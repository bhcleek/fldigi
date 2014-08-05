// ----------------------------------------------------------------------------
// Frequency Control Widget for the Fast Light Tool Kit (Fltk)
//
// Copyright 2005-2009, Dave Freese W1HKJ
// Copyright 2007-2009, Stelios Bounanos, M0GLD
//
// This file is part of fldigi.
//
// Fldigi is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Fldigi is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with fldigi.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#include <config.h>

#include <FL/Fl.H>
#include <FL/Fl_Float_Input.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>

#include <cstdlib>
#include <cmath>

#include "fl_digi.h"
#include "qrunner.h"

#include "FreqControl.h"
#include "gettext.h"

const char *cFreqControl::Label[10] = {
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

void cFreqControl::IncFreq (int nbr) {
	long v = 1;
	v = val + mult[nbr];
	if (v <= maxVal) val = v;
	updatevalue();
	do_callback();
}

void cFreqControl::DecFreq (int nbr) {
	long v = 1;
	v = val - mult[nbr];
	if (v >= minVal)
 	  val = v;
	updatevalue();
	do_callback();
}

void cbSelectDigit (Fl_Widget *btn, void * nbr)
{

	Fl_Button *b = (Fl_Button *)btn;
	int Nbr = (int)(reinterpret_cast<long> (nbr));

	cFreqControl *fc = (cFreqControl *)b->parent();
	if (Fl::event_button1())
		fc->IncFreq(Nbr);
	else if (Fl::event_button3())
		fc->DecFreq(Nbr);

	fc->damage();
}

cFreqControl::cFreqControl(int x, int y, int w, int h, const char *lbl):
			  Fl_Group(x,y,w,h,"") {
	font_number = FL_COURIER;
	ONCOLOR = FL_YELLOW;
	OFFCOLOR = FL_BLACK;
	SELCOLOR = fl_rgb_color(100, 100, 100);
	ILLUMCOLOR = FL_GREEN;
	oldval = val = 0;
	nD = 9; // nD <= MAXDIGITS
	_dispfocus = false;

	int fcWidth = (int)(w - 4)/(nD + 0.5);
	int pw = fcWidth / 2;
	int fcFirst = x;
	int fcTop = y;
	int fcHeight = h;
	long int max;
	int xpos;

	lsd = 1;

	box(FL_DOWN_BOX);
	color(OFFCOLOR);
	max = 1;
	for (int n = 0; n < nD; n++) {
		xpos = fcFirst + (nD - 1 - n) * fcWidth + 2;
		if (n < 3) xpos += pw;
		Digit[n] = new Fl_Repeat_Button (
			xpos,
			fcTop + 2,
			fcWidth,
			fcHeight-4,
			" ");
		Digit[n]->box(FL_FLAT_BOX);
		Digit[n]->labelfont(font_number);
		Digit[n]->labelcolor(ONCOLOR);
		Digit[n]->color(OFFCOLOR, SELCOLOR);
		Digit[n]->labelsize(fcHeight-4);
		Digit[n]->callback(cbSelectDigit, reinterpret_cast<void *>(n) );
		mult[n] = max;
		max *= 10;
	}
	decbx = new Fl_Box(
				fcFirst + (nD - 3) * fcWidth + 2, fcTop + 2,
				pw, fcHeight-4, "");
	decbx->box(FL_FLAT_BOX);
	decbx->labelfont(font_number);
	decbx->labelcolor(ONCOLOR);
	decbx->color(OFFCOLOR);
	decbx->labelsize(fcHeight-4);
	decbx->label(".");

	actbx = new Fl_Box(
				fcFirst + (nD - 3) * fcWidth + 2, fcTop + 2,
				pw, (fcHeight-4)/2," ");
	actbx->box(FL_FLAT_BOX);
	actbx->align(FL_ALIGN_CENTER | FL_ALIGN_INSIDE);
	actbx->labelfont(font_number);
	actbx->labelcolor(ONCOLOR);
	actbx->color(OFFCOLOR);
	actbx->labelsize((fcHeight-4)/2);

	cbFunc = NULL;
	maxVal = max * 10 - 1;
	minVal = 0;
	end();

	finp = new Fl_Float_Input(0, 0, 1, 1);
	finp->callback(freq_input_cb, this);
	finp->when(FL_WHEN_CHANGED);
	finp->hide();
	parent()->remove(finp);

	tooltip(_("Enter frequency or change with\nLeft/Right/Up/Down/Pg_Up/Pg_Down"));
}

cFreqControl::~cFreqControl()
{
	for (int i = 0; i < nD; i++) {
		delete Digit[i];
	}
	delete finp;
}

void cFreqControl::updatevalue()
{
	long v = val;
	int i;
	if (likely(v > 0L)) {
		for (i = 0; i < nD; i++) {
			Digit[i]->label(v == 0 ? "" : Label[v % 10]);
			v /= 10;
		}
	}
	else {
		for (i = 0; i < 4; i++)
			Digit[i]->label("0");
		for (; i < nD; i++)
			Digit[i]->label("");
	}
	decbx->label(".");
	decbx->redraw_label();
	actbx->redraw_label();
	damage();
}

void cFreqControl::SetONOFFCOLOR( Fl_Color ONcolor, Fl_Color OFFcolor)
{
	OFFCOLOR = OFFcolor;
	ONCOLOR = ONcolor;

	color(OFFCOLOR);

	for (int n = 0; n < nD; n++) {
		Digit[n]->labelcolor(ONCOLOR);
		Digit[n]->color(OFFCOLOR);
	}
	actbx->labelcolor(ONCOLOR);
	actbx->color(OFFCOLOR);
	decbx->labelcolor(ONCOLOR);
	decbx->color(OFFCOLOR);
	damage();
}

void cFreqControl::SetONCOLOR (uchar r, uchar g, uchar b)
{
	ONCOLOR = fl_rgb_color (r, g, b);
	for (int n = 0; n < nD; n++) {
		Digit[n]->labelcolor(ONCOLOR);
		Digit[n]->color(OFFCOLOR);
	}
	actbx->labelcolor(ONCOLOR);
	actbx->color(OFFCOLOR);
	decbx->labelcolor(ONCOLOR);
	decbx->color(OFFCOLOR);
	damage();
}

void cFreqControl::SetOFFCOLOR (uchar r, uchar g, uchar b)
{
	OFFCOLOR = fl_rgb_color (r, g, b);
	color(OFFCOLOR);
	for (int n = 0; n < nD; n++) {
		Digit[n]->labelcolor(ONCOLOR);
		Digit[n]->color(OFFCOLOR);
	}
	actbx->labelcolor(ONCOLOR);
	actbx->color(OFFCOLOR);
	decbx->labelcolor(ONCOLOR);
	decbx->color(OFFCOLOR);
	damage();
}

void cFreqControl::font(Fl_Font fnt)
{
	font_number = fnt;
	for (int n = 0; n < nD; n++)
		Digit[n]->labelfont(fnt);
	actbx->labelfont(fnt);
	decbx->labelfont(fnt);
	damage();
}

void blink_point(cFreqControl *fc)
{
	fc->decbx->label()[0] == '.' ? fc->decbx->label("") : fc->decbx->label(".");
	fc->decbx->redraw_label();
	fc->actbx->redraw_label();
	Fl::add_timeout(0.2, (Fl_Timeout_Handler)blink_point, fc);
}

void cFreqControl::value(long lv)
{
	oldval = val = lv;
	Fl::remove_timeout((Fl_Timeout_Handler)blink_point, this);
	REQ(&cFreqControl::updatevalue, this);
}

void cFreqControl::cancel_kb_entry(void)
{
	Fl::remove_timeout((Fl_Timeout_Handler)blink_point, this);
	val = oldval;
	updatevalue();
}

#define KEEP_FOCUS (long)0
#define LOSE_FOCUS (long)1

void cFreqControl::show_focus()
{
	actbx->label("@-62->");
	actbx->redraw_label();
}

void cFreqControl::clear_focus()
{
	actbx->label("");
	actbx->redraw_label();
}

int cFreqControl::handle(int event)
{
	static Fl_Widget* fw = NULL;
	int d;

	switch (event) {
	case FL_ENTER:
		fw = Fl::focus();
		take_focus();
		break;
	case FL_LEAVE:
		if (fw)
			fw->take_focus();
		if (Fl::has_timeout((Fl_Timeout_Handler)blink_point, this))
			cancel_kb_entry();
		clear_focus();
		updatevalue();
		do_callback((Fl_Widget *)this, LOSE_FOCUS);
		return 1;
		break;
	case FL_KEYBOARD:
		switch (d = Fl::event_key()) {
		case FL_Right:
			if (Fl::event_shift())
				d = 100 * lsd;
			else
				d = lsd;
			val += d;
			updatevalue();
			do_callback();
			return 1;
			break;
		case FL_Left:
			if (Fl::event_shift())
				d = -100 * lsd;
			else
				d = -1 * lsd;
			val += d;
			updatevalue();
			do_callback();
			return 1;
			break;
		case FL_Up:
			if (Fl::event_shift())
				d = 1000 * lsd;
			else
				d = 10 * lsd;
			val += d;
			updatevalue();
			do_callback();
			return 1;
			break;
		case FL_Down:
			if (Fl::event_shift())
				d = -1000 * lsd;
			else
				d = -10 * lsd;
			val += d;
			updatevalue();
			do_callback();
			return 1;
			break;
		default:
			if (Fl::event_ctrl()) {
				if (Fl::event_key() == 'v') {
					finp->handle(event);
					Fl::remove_timeout((Fl_Timeout_Handler)blink_point, this);
					return 1;
				}
			}
			if (Fl::has_timeout((Fl_Timeout_Handler)blink_point, this)) {
				if (d == FL_Escape) {
					cancel_kb_entry();
					return 1;
				}
				else if (d == FL_Enter || d == FL_KP_Enter) { // append
					finp->position(finp->size());
					finp->replace(finp->position(), finp->mark(), "\n", 1);
					clear_focus();
					updatevalue();
					do_callback((Fl_Widget *)this, LOSE_FOCUS);
					return 1;
				}
			}
			else {
				if (d == FL_Escape && window() != Fl::first_window()) {
					window()->do_callback();
					return 1;
				} else if (d == FL_Enter) {
					clear_focus();
					updatevalue();
					do_callback((Fl_Widget *)this, LOSE_FOCUS);
					return 1;
				} else {
					const char *key = Fl::event_text();
					if ((key[0] >= '0' && key[0] <= '9') || key[0] == '.') {
						Fl::add_timeout(0.0, (Fl_Timeout_Handler)blink_point, this);
						finp->static_value("");
						oldval = val;
					}
				}
			}
			return finp->handle(event);
		}
		break;
	case FL_MOUSEWHEEL:
		if ( !((d = Fl::event_dy()) || (d = Fl::event_dx())) )
			return 1;

		for (int i = 0; i < nD; i++) {
			if (Fl::event_inside(Digit[i])) {
				d > 0 ? DecFreq(i) : IncFreq(i);
				break;
			}
		}
		break;
	case FL_PUSH:
		if (Fl::event_button() == FL_MIDDLE_MOUSE)
			Fl::paste(*this, 0);
		else
			return Fl_Group::handle(event);
		break;
	case FL_PASTE:
		finp->value(Fl::event_text());
		finp->position(finp->size());
		finp->insert(" \n", 2); // space before newline for pasted text
		finp->do_callback();
		break;
	}

	return 1;
}

void cFreqControl::freq_input_cb(Fl_Widget*, void* arg)
{
	cFreqControl* fc = reinterpret_cast<cFreqControl*>(arg);
	double val = strtod(fc->finp->value(), NULL);
	if (val == 0.0 && fc->finp->index(fc->finp->size() - 2) == ' ')
		return; // invalid pasted text
	if (val >= 0.0 && val < pow(10.0, MAX_DIGITS - 3)) {
		val *= 1e3;
		val += 0.5;
		fc->val = (long)val;
		fc->updatevalue();
		if (fc->finp->index(fc->finp->size() - 1) == '\n' && val > 0.0) {
			Fl::remove_timeout((Fl_Timeout_Handler)blink_point, fc);
			fc->do_callback();
		}
	}
}

// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "gettext.h"
#include "fd_view.h"
#include "configuration.h"

Fl_Output *view_FD_call=(Fl_Output *)0;

Fl_Output *view_FD_class=(Fl_Output *)0;

Fl_Output *view_FD_section=(Fl_Output *)0;

Fl_Output *view_FD_mult=(Fl_Output *)0;

Fl_Output *view_FD_score=(Fl_Output *)0;

Fl_Output *view_FD_CW[12]={(Fl_Output *)0};

Fl_Output *view_FD_CW_OP[12]={(Fl_Output *)0};

Fl_Output *view_FD_DIG[12]={(Fl_Output *)0};

Fl_Output *view_FD_DIG_OP[12]={(Fl_Output *)0};

Fl_Output *view_FD_PHONE[12]={(Fl_Output *)0};

Fl_Output *view_FD_PHONE_OP[12]={(Fl_Output *)0};

Fl_Input2 *inp_fd_tcpip_addr=(Fl_Input2 *)0;

static void cb_inp_fd_tcpip_addr(Fl_Input2* o, void*) {
  progdefaults.fd_tcpip_addr=o->value();
progdefaults.changed = true;
}

Fl_Input2 *inp_fd_tcpip_port=(Fl_Input2 *)0;

static void cb_inp_fd_tcpip_port(Fl_Input2* o, void*) {
  progdefaults.fd_tcpip_port=o->value();
progdefaults.changed = true;
}

Fl_Input2 *inp_fd_op_call=(Fl_Input2 *)0;

static void cb_inp_fd_op_call(Fl_Input2* o, void*) {
  progdefaults.fd_op_call=o->value();
progdefaults.changed = true;
}

Fl_Check_Button *btn_fd_connect=(Fl_Check_Button *)0;

static void cb_btn_fd_connect(Fl_Check_Button* o, void*) {
  progdefaults.connect_to_fdserver=o->value();
if (progdefaults.connect_to_fdserver) {
	btn_fd_contest->value(1);
	progdefaults.logging = LOG_FD;
} else {
	btn_fd_contest->value(0);
	progdefaults.logging = LOG_QSO;
}
UI_select();
}

Fl_Box *box_fdserver_connected=(Fl_Box *)0;

Fl_Double_Window* make_fd_view() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(785, 270, _("Field Day Viewer - use with program \'fdserver\'"));
    w = o; if (w) {/* empty */}
    o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    { Fl_Output* o = view_FD_call = new Fl_Output(98, 6, 77, 24, _("FD Call"));
      o->value(progdefaults.my_FD_call.c_str());
    } // Fl_Output* view_FD_call
    { Fl_Output* o = view_FD_class = new Fl_Output(277, 5, 38, 24, _("FD Class"));
      o->value(progdefaults.my_FD_class.c_str());
    } // Fl_Output* view_FD_class
    { Fl_Output* o = view_FD_section = new Fl_Output(417, 5, 38, 24, _("FD Section"));
      o->value(progdefaults.my_FD_section.c_str());
    } // Fl_Output* view_FD_section
    { Fl_Output* o = view_FD_mult = new Fl_Output(557, 5, 38, 24, _("FD Mult"));
      o->value(progdefaults.my_FD_mult.c_str());
    } // Fl_Output* view_FD_mult
    { view_FD_score = new Fl_Output(698, 5, 80, 24, _("Score"));
    } // Fl_Output* view_FD_score
    { Fl_Box* o = new Fl_Box(55, 33, 50, 17, _("160"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(114, 33, 50, 17, _("80"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(174, 33, 50, 17, _("40"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(233, 33, 50, 17, _("20"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(293, 33, 50, 17, _("17"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(352, 33, 50, 17, _("15"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(414, 33, 50, 17, _("12"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(476, 33, 50, 17, _("10"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(538, 33, 50, 17, _("6"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(600, 33, 50, 17, _("2"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(660, 33, 60, 17, _("220"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(720, 33, 60, 17, _("440"));
      o->box(FL_FLAT_BOX);
    } // Fl_Box* o
    { view_FD_CW[0] = new Fl_Output(55, 49, 60, 24, _("CW"));
    } // Fl_Output* view_FD_CW[0]
    { view_FD_CW[1] = new Fl_Output(115, 49, 60, 24);
      view_FD_CW[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[1]
    { view_FD_CW[2] = new Fl_Output(174, 49, 60, 24);
      view_FD_CW[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[2]
    { view_FD_CW[3] = new Fl_Output(234, 49, 60, 24);
      view_FD_CW[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[3]
    { view_FD_CW[4] = new Fl_Output(293, 49, 60, 24);
      view_FD_CW[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[4]
    { view_FD_CW[5] = new Fl_Output(353, 49, 60, 24);
      view_FD_CW[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[5]
    { view_FD_CW[6] = new Fl_Output(415, 49, 60, 24);
      view_FD_CW[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[6]
    { view_FD_CW[7] = new Fl_Output(475, 49, 60, 24);
      view_FD_CW[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[7]
    { view_FD_CW[8] = new Fl_Output(536, 49, 60, 24);
      view_FD_CW[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[8]
    { view_FD_CW[9] = new Fl_Output(598, 49, 60, 24);
      view_FD_CW[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[9]
    { view_FD_CW[10] = new Fl_Output(659, 49, 60, 24);
      view_FD_CW[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[10]
    { view_FD_CW[11] = new Fl_Output(719, 49, 60, 24);
      view_FD_CW[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW[11]
    { view_FD_CW_OP[0] = new Fl_Output(55, 73, 60, 24, _("Oper\'"));
    } // Fl_Output* view_FD_CW_OP[0]
    { view_FD_CW_OP[1] = new Fl_Output(115, 73, 60, 24);
      view_FD_CW_OP[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[1]
    { view_FD_CW_OP[2] = new Fl_Output(174, 73, 60, 24);
      view_FD_CW_OP[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[2]
    { view_FD_CW_OP[3] = new Fl_Output(234, 73, 60, 24);
      view_FD_CW_OP[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[3]
    { view_FD_CW_OP[4] = new Fl_Output(293, 73, 60, 24);
      view_FD_CW_OP[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[4]
    { view_FD_CW_OP[5] = new Fl_Output(353, 73, 60, 24);
      view_FD_CW_OP[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[5]
    { view_FD_CW_OP[6] = new Fl_Output(415, 73, 60, 24);
      view_FD_CW_OP[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[6]
    { view_FD_CW_OP[7] = new Fl_Output(475, 73, 60, 24);
      view_FD_CW_OP[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[7]
    { view_FD_CW_OP[8] = new Fl_Output(536, 73, 60, 24);
      view_FD_CW_OP[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[8]
    { view_FD_CW_OP[9] = new Fl_Output(598, 73, 60, 24);
      view_FD_CW_OP[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[9]
    { view_FD_CW_OP[10] = new Fl_Output(659, 73, 60, 24);
      view_FD_CW_OP[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[10]
    { view_FD_CW_OP[11] = new Fl_Output(719, 73, 60, 24);
      view_FD_CW_OP[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_CW_OP[11]
    { view_FD_DIG[0] = new Fl_Output(55, 103, 60, 24, _("DIG"));
    } // Fl_Output* view_FD_DIG[0]
    { view_FD_DIG[1] = new Fl_Output(115, 103, 60, 24);
      view_FD_DIG[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[1]
    { view_FD_DIG[2] = new Fl_Output(174, 103, 60, 24);
      view_FD_DIG[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[2]
    { view_FD_DIG[3] = new Fl_Output(234, 103, 60, 24);
      view_FD_DIG[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[3]
    { view_FD_DIG[4] = new Fl_Output(293, 103, 60, 24);
      view_FD_DIG[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[4]
    { view_FD_DIG[5] = new Fl_Output(353, 103, 60, 24);
      view_FD_DIG[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[5]
    { view_FD_DIG[6] = new Fl_Output(415, 103, 60, 24);
      view_FD_DIG[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[6]
    { view_FD_DIG[7] = new Fl_Output(475, 103, 60, 24);
      view_FD_DIG[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[7]
    { view_FD_DIG[8] = new Fl_Output(536, 103, 60, 24);
      view_FD_DIG[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[8]
    { view_FD_DIG[9] = new Fl_Output(598, 103, 60, 24);
      view_FD_DIG[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[9]
    { view_FD_DIG[10] = new Fl_Output(659, 103, 60, 24);
      view_FD_DIG[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[10]
    { view_FD_DIG[11] = new Fl_Output(719, 103, 60, 24);
      view_FD_DIG[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG[11]
    { view_FD_DIG_OP[0] = new Fl_Output(55, 128, 60, 24, _("Oper\'"));
    } // Fl_Output* view_FD_DIG_OP[0]
    { view_FD_DIG_OP[1] = new Fl_Output(115, 128, 60, 24);
      view_FD_DIG_OP[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[1]
    { view_FD_DIG_OP[2] = new Fl_Output(174, 128, 60, 24);
      view_FD_DIG_OP[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[2]
    { view_FD_DIG_OP[3] = new Fl_Output(234, 128, 60, 24);
      view_FD_DIG_OP[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[3]
    { view_FD_DIG_OP[4] = new Fl_Output(293, 128, 60, 24);
      view_FD_DIG_OP[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[4]
    { view_FD_DIG_OP[5] = new Fl_Output(353, 128, 60, 24);
      view_FD_DIG_OP[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[5]
    { view_FD_DIG_OP[6] = new Fl_Output(415, 128, 60, 24);
      view_FD_DIG_OP[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[6]
    { view_FD_DIG_OP[7] = new Fl_Output(475, 128, 60, 24);
      view_FD_DIG_OP[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[7]
    { view_FD_DIG_OP[8] = new Fl_Output(536, 128, 60, 24);
      view_FD_DIG_OP[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[8]
    { view_FD_DIG_OP[9] = new Fl_Output(598, 128, 60, 24);
      view_FD_DIG_OP[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[9]
    { view_FD_DIG_OP[10] = new Fl_Output(659, 128, 60, 24);
      view_FD_DIG_OP[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[10]
    { view_FD_DIG_OP[11] = new Fl_Output(719, 128, 60, 24);
      view_FD_DIG_OP[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_DIG_OP[11]
    { view_FD_PHONE[0] = new Fl_Output(55, 158, 60, 24, _("PHONE"));
    } // Fl_Output* view_FD_PHONE[0]
    { view_FD_PHONE[1] = new Fl_Output(115, 158, 60, 24);
      view_FD_PHONE[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[1]
    { view_FD_PHONE[2] = new Fl_Output(174, 158, 60, 24);
      view_FD_PHONE[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[2]
    { view_FD_PHONE[3] = new Fl_Output(234, 158, 60, 24);
      view_FD_PHONE[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[3]
    { view_FD_PHONE[4] = new Fl_Output(293, 158, 60, 24);
      view_FD_PHONE[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[4]
    { view_FD_PHONE[5] = new Fl_Output(353, 158, 60, 24);
      view_FD_PHONE[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[5]
    { view_FD_PHONE[6] = new Fl_Output(415, 158, 60, 24);
      view_FD_PHONE[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[6]
    { view_FD_PHONE[7] = new Fl_Output(475, 158, 60, 24);
      view_FD_PHONE[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[7]
    { view_FD_PHONE[8] = new Fl_Output(536, 158, 60, 24);
      view_FD_PHONE[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[8]
    { view_FD_PHONE[9] = new Fl_Output(598, 158, 60, 24);
      view_FD_PHONE[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[9]
    { view_FD_PHONE[10] = new Fl_Output(659, 158, 60, 24);
      view_FD_PHONE[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[10]
    { view_FD_PHONE[11] = new Fl_Output(719, 158, 60, 24);
      view_FD_PHONE[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE[11]
    { view_FD_PHONE_OP[0] = new Fl_Output(55, 183, 60, 24, _("Oper\'"));
    } // Fl_Output* view_FD_PHONE_OP[0]
    { view_FD_PHONE_OP[1] = new Fl_Output(115, 183, 60, 24);
      view_FD_PHONE_OP[1]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[1]
    { view_FD_PHONE_OP[2] = new Fl_Output(174, 183, 60, 24);
      view_FD_PHONE_OP[2]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[2]
    { view_FD_PHONE_OP[3] = new Fl_Output(234, 183, 60, 24);
      view_FD_PHONE_OP[3]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[3]
    { view_FD_PHONE_OP[4] = new Fl_Output(293, 183, 60, 24);
      view_FD_PHONE_OP[4]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[4]
    { view_FD_PHONE_OP[5] = new Fl_Output(353, 183, 60, 24);
      view_FD_PHONE_OP[5]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[5]
    { view_FD_PHONE_OP[6] = new Fl_Output(415, 183, 60, 24);
      view_FD_PHONE_OP[6]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[6]
    { view_FD_PHONE_OP[7] = new Fl_Output(475, 183, 60, 24);
      view_FD_PHONE_OP[7]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[7]
    { view_FD_PHONE_OP[8] = new Fl_Output(536, 183, 60, 24);
      view_FD_PHONE_OP[8]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[8]
    { view_FD_PHONE_OP[9] = new Fl_Output(598, 183, 60, 24);
      view_FD_PHONE_OP[9]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[9]
    { view_FD_PHONE_OP[10] = new Fl_Output(659, 183, 60, 24);
      view_FD_PHONE_OP[10]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[10]
    { view_FD_PHONE_OP[11] = new Fl_Output(719, 183, 60, 24);
      view_FD_PHONE_OP[11]->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Output* view_FD_PHONE_OP[11]
    { Fl_Group* o = new Fl_Group(5, 212, 775, 55, _("\"fdserver\" Client"));
      o->box(FL_ENGRAVED_BOX);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { Fl_Input2* o = inp_fd_tcpip_addr = new Fl_Input2(85, 234, 198, 24, _("tcpip addr"));
        inp_fd_tcpip_addr->tooltip(_("fdserver tcipip address"));
        inp_fd_tcpip_addr->box(FL_DOWN_BOX);
        inp_fd_tcpip_addr->color(FL_BACKGROUND2_COLOR);
        inp_fd_tcpip_addr->selection_color(FL_SELECTION_COLOR);
        inp_fd_tcpip_addr->labeltype(FL_NORMAL_LABEL);
        inp_fd_tcpip_addr->labelfont(0);
        inp_fd_tcpip_addr->labelsize(14);
        inp_fd_tcpip_addr->labelcolor(FL_FOREGROUND_COLOR);
        inp_fd_tcpip_addr->callback((Fl_Callback*)cb_inp_fd_tcpip_addr);
        inp_fd_tcpip_addr->align(Fl_Align(FL_ALIGN_LEFT));
        inp_fd_tcpip_addr->when(FL_WHEN_RELEASE);
        o->value(progdefaults.fd_tcpip_addr.c_str());
      } // Fl_Input2* inp_fd_tcpip_addr
      { Fl_Input2* o = inp_fd_tcpip_port = new Fl_Input2(325, 234, 75, 24, _("port"));
        inp_fd_tcpip_port->tooltip(_("fdserver tcpip port"));
        inp_fd_tcpip_port->box(FL_DOWN_BOX);
        inp_fd_tcpip_port->color(FL_BACKGROUND2_COLOR);
        inp_fd_tcpip_port->selection_color(FL_SELECTION_COLOR);
        inp_fd_tcpip_port->labeltype(FL_NORMAL_LABEL);
        inp_fd_tcpip_port->labelfont(0);
        inp_fd_tcpip_port->labelsize(14);
        inp_fd_tcpip_port->labelcolor(FL_FOREGROUND_COLOR);
        inp_fd_tcpip_port->callback((Fl_Callback*)cb_inp_fd_tcpip_port);
        inp_fd_tcpip_port->align(Fl_Align(FL_ALIGN_LEFT));
        inp_fd_tcpip_port->when(FL_WHEN_RELEASE);
        o->value(progdefaults.fd_tcpip_port.c_str());
      } // Fl_Input2* inp_fd_tcpip_port
      { Fl_Input2* o = inp_fd_op_call = new Fl_Input2(500, 234, 90, 24, _("OP callsign"));
        inp_fd_op_call->tooltip(_("free form exchange"));
        inp_fd_op_call->box(FL_DOWN_BOX);
        inp_fd_op_call->color(FL_BACKGROUND2_COLOR);
        inp_fd_op_call->selection_color(FL_SELECTION_COLOR);
        inp_fd_op_call->labeltype(FL_NORMAL_LABEL);
        inp_fd_op_call->labelfont(0);
        inp_fd_op_call->labelsize(14);
        inp_fd_op_call->labelcolor(FL_FOREGROUND_COLOR);
        inp_fd_op_call->callback((Fl_Callback*)cb_inp_fd_op_call);
        inp_fd_op_call->align(Fl_Align(FL_ALIGN_LEFT));
        inp_fd_op_call->when(FL_WHEN_RELEASE);
        o->value(progdefaults.fd_op_call.c_str());
      } // Fl_Input2* inp_fd_op_call
      { Fl_Check_Button* o = btn_fd_connect = new Fl_Check_Button(608, 236, 70, 20, _("Connect"));
        btn_fd_connect->tooltip(_("Connect / Disconnect^jAddr/Port/OP required"));
        btn_fd_connect->down_box(FL_DOWN_BOX);
        btn_fd_connect->callback((Fl_Callback*)cb_btn_fd_connect);
        o->value(progdefaults.connect_to_fdserver);
      } // Fl_Check_Button* btn_fd_connect
      { box_fdserver_connected = new Fl_Box(722, 237, 18, 18, _("Connected"));
        box_fdserver_connected->box(FL_ROUND_DOWN_BOX);
        box_fdserver_connected->color((Fl_Color)31);
        box_fdserver_connected->align(Fl_Align(FL_ALIGN_TOP));
      } // Fl_Box* box_fdserver_connected
      o->end();
    } // Fl_Group* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}
// generated by Fast Light User Interface Designer (fluid) version 1.0110

#ifndef confdialog_h
#define confdialog_h
#include <FL/Fl.H>
#include "globals.h"
#include "modem.h"
#include "configuration.h"
#include "combo.h"
#include "flinput2.h"
#include "flslider2.h"
#include "flmisc.h"
extern Fl_Double_Window *dlgConfig; 
extern Mode_Browser* mode_browser; 
void set_qrz_buttons(Fl_Button* b);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *tabsConfigure;
#include <FL/Fl_Group.H>
extern Fl_Group *tabOperator;
extern Fl_Input2 *inpMyCallsign;
extern Fl_Input2 *inpMyName;
extern Fl_Input2 *inpMyQth;
extern Fl_Input2 *inpMyLocator;
extern Fl_Input2 *inpMyAntenna;
extern Fl_Group *grpNoise;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btnNoiseOn;
extern Fl_Counter2 *noiseDB;
extern Fl_Group *tabUI;
extern Fl_Tabs *tabsUI;
extern Fl_Group *tabUserInterface;
extern Fl_Check_Button *btnShowTooltips;
extern Fl_Check_Button *chkMenuIcons;
#include <FL/Fl_Choice.H>
extern Fl_Choice *mnuScheme;
#include <FL/Fl_Button.H>
extern Fl_Button *bVisibleModes;
extern Fl_Check_Button *btnRXClicks;
extern Fl_Check_Button *btnRXTooltips;
extern Fl_Input2 *inpNonword;
extern Fl_Check_Button *btnNagMe;
extern Fl_Check_Button *btnClearOnSave;
extern Fl_Check_Button *btnAutoFillQSO;
extern Fl_Check_Button *btnCallUpperCase;
extern Fl_Input2 *inpMyPower;
extern Fl_Group *tabContest;
#include <FL/Fl_Box.H>
extern Fl_Box *lblSend;
extern Fl_Input2 *inpSend1;
extern Fl_Check_Button *btn599;
extern Fl_Check_Button *btnCutNbrs;
extern Fl_Check_Button *btnUseLeadingZeros;
extern Fl_Value_Input2 *nbrContestStart;
extern Fl_Value_Input2 *nbrContestDigits;
extern Fl_Button *btnResetSerNbr;
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *btnDupCheckOn;
extern Fl_Check_Button *btnDupBand;
extern Fl_Check_Button *btnDupMode;
extern Fl_Check_Button *btnDupState;
extern Fl_Check_Button *btnDupXchg1;
extern Fl_Check_Button *btnDupTimeSpan;
extern Fl_Value_Input2 *nbrTimeSpan;
#include <FL/Fl_Color_Chooser.H>
extern Fl_Button *btnDupColor;
extern Fl_Group *tabWF_UI;
extern Fl_Check_Button *btnWF_UIrev;
extern Fl_Check_Button *btnWF_UIx1;
extern Fl_Check_Button *btnWF_UIwfcarrier;
extern Fl_Check_Button *btnWF_UIwfshift;
extern Fl_Check_Button *btnWF_UIwfreflevel;
extern Fl_Check_Button *btnWF_UIwfdrop;
extern Fl_Check_Button *btnWF_UIwfampspan;
extern Fl_Check_Button *btnWF_UIwfstore;
extern Fl_Check_Button *btnWF_UIwfmode;
extern Fl_Check_Button *btnWF_UIqsy;
extern Fl_Check_Button *btnWF_UIxmtlock;
extern Fl_Button *btn_wf_enable_all;
extern Fl_Button *btn_wf_disable_all;
extern Fl_Check_Button *btn_rx_lowercase;
extern Fl_Group *tabWaterfall;
extern Fl_Tabs *tabsWaterfall;
#include "colorbox.h"
extern colorbox *WF_Palette;
extern Fl_Button *btnColor[9];
extern Fl_Button *btnLoadPalette;
extern Fl_Button *btnSavePalette;
extern Fl_Check_Button *btnUseCursorLines;
extern Fl_Button *btnCursorBWcolor;
extern Fl_Check_Button *btnUseCursorCenterLine;
extern Fl_Button *btnCursorCenterLineColor;
extern Fl_Check_Button *btnUseBWTracks;
extern Fl_Button *btnBwTracksColor;
extern Fl_Check_Button *chkShowAudioScale;
extern Fl_Button *btnWaterfallFont;
extern Fl_Check_Button *btnViewXmtSignal;
extern Fl_Value_Slider2 *valTxMonitorLevel;
extern Fl_Counter2 *cntLowFreqCutoff;
extern Fl_Counter2 *valLatency;
extern Fl_Check_Button *btnWFaveraging;
extern Fl_Choice *mnuFFTPrefilter;
extern Fl_Counter2 *cntrWfwidth;
extern Fl_Counter2 *cntrWfheight;
extern Fl_Check_Button *btnWaterfallHistoryDefault;
extern Fl_Check_Button *btnWaterfallQSY;
extern Fl_Check_Button *btnWaterfallClickInsert;
extern Fl_Input2 *inpWaterfallClickText;
extern Fl_Choice *mnuWaterfallWheelAction;
extern Fl_Group *tabModems;
extern Fl_Tabs *tabsModems;
extern Fl_Group *tabCW;
extern Fl_Tabs *tabsCW;
extern Fl_Value_Slider2 *sldrCWbandwidth;
extern Fl_Check_Button *btnCWrcvTrack;
extern Fl_Counter2 *cntCWrange;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *valCWrcvWPM;
#include <FL/Fl_Progress.H>
extern Fl_Progress *prgsCWrcvWPM;
extern Fl_Value_Slider2 *sldrCWxmtWPM;
extern Fl_Counter2 *cntCWdefWPM;
#include <FL/Fl_Counter.H>
extern Fl_Counter *cntCWlowerlimit;
extern Fl_Counter *cntCWupperlimit;
extern Fl_Value_Slider2 *sldrCWfarnsworth;
extern Fl_Check_Button *btnCWusefarnsworth;
extern Fl_Counter2 *cntCWweight;
extern Fl_Counter2 *cntCWdash2dot;
extern Fl_Counter2 *cntCWrisetime;
extern Fl_Choice *mnuQSKshape;
extern Fl_Check_Button *btnCWnarrow;
extern Fl_Check_Button *btnQSK;
extern Fl_Counter2 *cntPreTiming;
extern Fl_Counter2 *cntPostTiming;
extern Fl_Check_Button *btnQSKadjust;
extern char szTestChar[];
extern Fl_Choice *mnuTestChar;
extern Fl_Check_Button *btnCW_use_paren;
extern Fl_Choice *mnu_prosign[9];
extern Fl_Group *tabDomEX;
extern Fl_Input2 *txtSecondary;
extern Fl_Check_Button *valDominoEX_FILTER;
extern Fl_Counter2 *valDominoEX_BW;
extern Fl_Check_Button *chkDominoEX_FEC;
extern Fl_Value_Slider2 *valDomCWI;
extern Fl_Counter2 *valDominoEX_PATHS;
extern Fl_Group *tabFeld;
#include "fontdef.h"
extern Fl_Choice *selHellFont;
extern Fl_Check_Button *btnBlackboard;
extern Fl_Spinner2 *valHellXmtWidth;
extern Fl_Check_Button *btnHellRcvWidth;
extern Fl_Choice *mnuHellPulse;
extern Fl_Value_Slider2 *sldrHellBW;
extern Fl_Check_Button *btnFeldHellIdle;
extern Fl_Check_Button *btnHellXmtWidth;
extern Fl_Group *tabMT63;
extern Fl_Check_Button *btnmt63_interleave;
extern Fl_Check_Button *btnMT63_8bit;
extern Fl_Check_Button *btnMT63_rx_integration;
extern Fl_Check_Button *btnMT63_usetones;
extern Fl_Check_Button *btnMT63_upper_lower;
extern Fl_Spinner2 *MT63_tone_duration;
extern Fl_Group *tabOlivia;
extern Fl_Choice *mnuOlivia_Bandwidth;
extern Fl_Choice *mnuOlivia_Tones;
extern Fl_Counter2 *cntOlivia_smargin;
extern Fl_Counter2 *cntOlivia_sinteg;
extern Fl_Check_Button *btnOlivia_8bit;
extern Fl_Group *tabContestia;
extern Fl_Choice *mnuContestia_Bandwidth;
extern Fl_Choice *mnuContestia_Tones;
extern Fl_Counter2 *cntContestia_smargin;
extern Fl_Counter2 *cntContestia_sinteg;
extern Fl_Check_Button *btnContestia_8bit;
extern Fl_Group *tabPSK;
extern Fl_Tabs *tabsPSK;
extern Fl_Counter2 *cntSearchRange;
extern Fl_Counter2 *cntACQsn;
extern Fl_Choice *mnuPSKStatusTimeout;
extern Fl_Check_Button *btnMarquee;
extern Fl_Spinner2 *cntChannels;
extern Fl_Spinner2 *cntStartFrequency;
extern Fl_Spinner2 *cntTimeout;
extern Fl_Choice *mnuViewerLabel;
extern Fl_Button *btnViewerFont;
extern Fl_Group *tabRTTY;
extern Fl_Choice *selShift;
extern Fl_Choice *selBaud;
extern Fl_Choice *selBits;
extern Fl_Choice *selParity;
extern Fl_Choice *selStopBits;
extern Fl_Check_Button *btnAUTOCRLF;
extern Fl_Check_Button *btnCRCRLF;
extern Fl_Counter2 *cntrAUTOCRLF;
extern Fl_Check_Button *chkUOSrx;
extern Fl_Check_Button *chkUOStx;
extern Fl_Check_Button *btnPreferXhairScope;
extern Fl_Check_Button *chkPseudoFSK;
extern Fl_Choice *mnuRTTYAFCSpeed;
extern Fl_Check_Button *chkXagc;
extern Fl_Value_Slider2 *sldrRTTYbandwidth;
extern Fl_Counter2 *selCustomShift;
extern Fl_Group *tabTHOR;
extern Fl_Input2 *txtTHORSecondary;
extern Fl_Check_Button *valTHOR_FILTER;
extern Fl_Counter2 *valTHOR_BW;
extern Fl_Value_Slider2 *valThorCWI;
extern Fl_Counter2 *valTHOR_PATHS;
extern Fl_Group *tabRig;
extern Fl_Tabs *tabsRig;
extern Fl_Group *grpHWPTT;
#include <FL/Fl_Input_Choice.H>
extern Fl_Input_Choice *inpTTYdev;
#include <FL/Fl_Round_Button.H>
extern Fl_Round_Button *btnRTSptt;
extern Fl_Round_Button *btnRTSplusV;
extern Fl_Round_Button *btnDTRptt;
extern Fl_Round_Button *btnDTRplusV;
extern Fl_Button *btnInitHWPTT;
extern Fl_Round_Button *btnTTYptt;
extern Fl_Round_Button *btnUsePPortPTT;
extern Fl_Round_Button *btnUseUHrouterPTT;
extern Fl_Check_Button *btnPTTrightchannel;
extern Fl_Check_Button *chkUSERIGCAT;
extern Fl_Group *grpRigCAT;
#include <FL/Fl_Output.H>
extern Fl_Output *txtXmlRigFilename;
extern Fl_Button *btnSelectRigXmlFile;
extern Fl_Input_Choice *inpXmlRigDevice;
extern Fl_Value_Input2 *cntRigCatRetries;
extern Fl_Value_Input2 *cntRigCatTimeout;
extern Fl_Value_Input2 *cntRigCatWait;
extern Fl_Choice *mnuXmlRigBaudrate;
extern Fl_Counter2 *valRigCatStopbits;
extern Fl_Button *btnInitRIGCAT;
extern Fl_Check_Button *btnRigCatEcho;
extern Fl_Round_Button *btnRigCatCMDptt;
extern Fl_Round_Button *btnRigCatRTSptt;
extern Fl_Round_Button *btnRigCatDTRptt;
extern Fl_Check_Button *btnRigCatRTSplus;
extern Fl_Check_Button *btnRigCatDTRplus;
extern Fl_Check_Button *chkRigCatRTSCTSflow;
#include "rigio.h"
extern Fl_Button *btnRevertRIGCAT;
extern Fl_Check_Button *chkRigCatVSP;
extern Fl_Group *tabHamlib;
extern Fl_Check_Button *chkUSEHAMLIB;
extern Fl_Group *grpHamlib;
extern Fl_ComboBox *cboHamlibRig;
extern Fl_Input_Choice *inpRIGdev;
extern Fl_Value_Input2 *cntHamlibRetries;
extern Fl_Value_Input2 *cntHamlibTimeout;
extern Fl_Value_Input2 *cntHamlibWriteDelay;
extern Fl_Value_Input2 *cntHamlibWait;
extern Fl_Choice *mnuBaudRate;
extern Fl_Counter2 *valHamRigStopbits;
extern Fl_Counter2 *cntHamlibTimeout0;
extern Fl_Input2 *inpHamlibConfig;
extern Fl_Button *btnInitHAMLIB;
extern Fl_Choice *mnuSideband;
extern Fl_Round_Button *btnHamlibCMDptt;
extern Fl_Check_Button *btnHamlibDTRplus;
extern Fl_Check_Button *chkHamlibRTSplus;
extern Fl_Check_Button *chkHamlibRTSCTSflow;
extern Fl_Check_Button *chkHamlibXONXOFFflow;
extern Fl_Button *btnRevertHAMLIB;
extern Fl_Group *grpMemmap;
extern Fl_Check_Button *chkUSEMEMMAP;
extern Fl_Round_Button *btnMEMMAPptt;
extern Fl_Button *btnInitMEMMAP;
extern Fl_Group *tabXMLRPC;
extern Fl_Group *grpXMLRPC;
extern Fl_Check_Button *chkUSEXMLRPC;
extern Fl_Button *btnInitXMLRPC;
extern Fl_Group *tabSoundCard;
extern Fl_Tabs *tabsSoundCard;
extern Fl_Group *tabAudio;
extern Fl_Group *AudioOSS;
extern Fl_Input_Choice *menuOSSDev;
extern Fl_Group *AudioPort;
extern Fl_Choice *menuPortInDev;
extern Fl_Choice *menuPortOutDev;
extern Fl_Group *AudioPulse;
extern Fl_Input2 *inpPulseServer;
extern Fl_Group *AudioNull;
extern Fl_Round_Button *btnAudioIO[4];
extern Fl_Group *tabAudioOpt;
extern Fl_Group *grpAudioSampleRate;
extern Fl_Choice *menuInSampleRate;
extern Fl_Choice *menuOutSampleRate;
#include <FL/fl_ask.H>
extern Fl_Choice *menuSampleConverter;
extern Fl_Spinner2 *cntRxRateCorr;
extern Fl_Spinner2 *cntTxRateCorr;
extern Fl_Spinner2 *cntTxOffset;
extern Fl_Check_Button *chkAudioStereoOut;
extern Fl_Group *tabMixer;
extern void resetMixerControls();
extern Fl_Check_Button *btnMixer;
extern Fl_Input_Choice *menuMix;
extern Fl_Light_Button *btnMicIn;
extern void setMixerInput(int);
extern Fl_Light_Button *btnLineIn;
extern void setPCMvolume(double);
extern Fl_Value_Slider2 *valPCMvolume;
extern Fl_Group *tabID;
extern Fl_Check_Button *btnsendid;
extern Fl_Check_Button *btnsendvideotext;
extern Fl_Input2 *valVideotext;
extern Fl_Check_Button *chkID_SMALL;
extern Fl_Value_Slider2 *sldrVideowidth;
extern Fl_Check_Button *btn_vidlimit;
extern Fl_Check_Button *btn_vidmodelimit;
extern Fl_Button *bVideoIDModes;
extern Fl_Group *sld;
extern Fl_Check_Button *btnCWID;
extern Fl_Value_Slider2 *sldrCWIDwpm;
extern Fl_Button *bCWIDModes;
extern Fl_Check_Button *chkRSidWideSearch;
extern Fl_Check_Button *chkRSidMark;
extern Fl_Check_Button *chkRSidAutoDisable;
extern Fl_Check_Button *chkRSidNotifyOnly;
extern Fl_Button *bRSIDRxModes;
extern Fl_Value_Slider2 *sldrRSIDsquelch;
extern Fl_Check_Button *chkRSidPost;
extern Fl_Button *bRSIDTxModes;
extern Fl_Group *tabMisc;
extern Fl_Tabs *tabsMisc;
extern Fl_Group *tabSweetSpot;
extern Fl_Value_Input2 *valCWsweetspot;
extern Fl_Value_Input2 *valRTTYsweetspot;
extern Fl_Value_Input2 *valPSKsweetspot;
extern Fl_Check_Button *btnStartAtSweetSpot;
extern Fl_Group *tabSpot;
extern Fl_Check_Button *btnPSKRepAuto;
extern Fl_Check_Button *btnPSKRepLog;
extern Fl_Check_Button *btnPSKRepQRG;
extern Fl_Input2 *inpPSKRepHost;
extern Fl_Input2 *inpPSKRepPort;
extern Fl_Button *btnPSKRepInit;
extern Fl_Box *boxPSKRepMsg;
extern Fl_Group *tabMacros;
extern Fl_Check_Button *btnUseLastMacro;
extern Fl_Check_Button *btnDisplayMacroFilename;
extern Fl_Group *tabCPUspeed;
extern Fl_Check_Button *chkSlowCpu;
extern Fl_Group *tabFileExtraction;
#include "rx_extract.h"
extern Fl_Check_Button *chkAutoExtract;
extern Fl_Check_Button *chkStartFlmsg;
extern Fl_Check_Button *chkRxStream;
#include "speak.h"
extern Fl_Group *grpTalker;
extern void open_talker();
extern Fl_Button *btnConnectTalker;
extern Fl_Group *tabPskmail;
extern Fl_Counter2 *cntServerCarrier;
extern Fl_Counter2 *cntServerOffset;
extern Fl_Counter2 *cntServerACQsn;
extern Fl_Counter2 *cntServerAFCrange;
extern Fl_Check_Button *btnPSKmailSweetSpot;
extern Fl_Check_Button *btn_arq_s2n_report;
extern Fl_Group *tabQRZ;
extern Fl_Round_Button *btnQRZcdrom;
extern Fl_Input2 *txtQRZpathname;
extern Fl_Round_Button *btnQRZsub;
extern Fl_Round_Button *btnHamcall;
extern Fl_Input2 *inpQRZusername;
extern Fl_Input2 *inpQRZuserpassword;
extern Fl_Button *btnQRZpasswordShow;
extern Fl_Round_Button *btnQRZnotavailable;
extern Fl_Round_Button *btnQRZonline;
extern Fl_Round_Button *btnHAMCALLonline;
extern Fl_Round_Button *btnCALLOOK;
extern Fl_Button *btnSaveConfig;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnCloseConfig;
extern Fl_Button *btnResetConfig;
Fl_Double_Window* ConfigureDialog();
void openConfig();
void closeDialog();
void createConfig();
#endif

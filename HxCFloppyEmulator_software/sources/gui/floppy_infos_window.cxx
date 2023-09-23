// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "floppy_infos_window.h"
#include "gui_strings.h"

#include <stdint.h>
extern "C"
{
	#include "libhxcfe.h"
	#include "usb_hxcfloppyemulator.h"
}

#include "cb_floppy_infos_window.h"
#include "fl_mouse_box.h"

floppy_infos_window::floppy_infos_window() {
  { window = new Fl_Window(1275, 540, getString(STR_FLOPPYVIEWERWINDOW_0001));
    window->user_data((void*)(this));
    { Fl_Group* o = new Fl_Group(1000, 387, 275, 113, "Track / Side selection");
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { track_number_slide = new Fl_Value_Slider(1006, 402, 264, 19, getString(STR_FLOPPYVIEWERWINDOW_0003));
        track_number_slide->type(1);
        track_number_slide->labelsize(12);
        track_number_slide->textsize(12);
        track_number_slide->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Value_Slider* track_number_slide
      { side_number_slide = new Fl_Value_Slider(1005, 434, 265, 19, getString(STR_FLOPPYVIEWERWINDOW_0004));
        side_number_slide->type(1);
        side_number_slide->labelsize(12);
        side_number_slide->textsize(12);
        side_number_slide->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Value_Slider* side_number_slide
      { view_mode = new Fl_Choice(1090, 472, 180, 20, "View mode");
        view_mode->down_box(FL_BORDER_BOX);
        view_mode->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Choice* view_mode
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1000, 2, 275, 269, getString(STR_FLOPPYVIEWERWINDOW_0005));
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { x_pos = new Fl_Output(1005, 17, 265, 15);
        x_pos->labelsize(10);
        x_pos->textsize(10);
      } // Fl_Output* x_pos
      { y_pos = new Fl_Output(1005, 33, 265, 15);
        y_pos->labelsize(10);
        y_pos->textsize(10);
      } // Fl_Output* y_pos
      { global_status = new Fl_Output(1005, 49, 265, 16);
        global_status->labelsize(10);
        global_status->textsize(10);
      } // Fl_Output* global_status
      { object_txt = new Fl_Text_Display(1005, 68, 265, 215);
        object_txt->labelsize(10);
        object_txt->textsize(10);
        object_txt->user_data((void*)(this));
      } // Fl_Text_Display* object_txt
      o->end();
    } // Fl_Group* o
    { floppy_map_disp = new Fl_Group(0, 1, 1000, 500, getString(STR_FLOPPYVIEWERWINDOW_0007));
      floppy_map_disp->box(FL_ENGRAVED_FRAME);
      floppy_map_disp->labeltype(FL_EMBOSSED_LABEL);
      floppy_map_disp->labelsize(12);
      floppy_map_disp->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      floppy_map_disp->end();
      Fl_Group::current()->resizable(floppy_map_disp);
    } // Fl_Group* floppy_map_disp
    { Fl_Group* o = new Fl_Group(0, 500, 1275, 41, getString(STR_FLOPPYVIEWERWINDOW_0008));
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { y_time = new Fl_Value_Slider(694, 505, 305, 20, getString(STR_FLOPPYVIEWERWINDOW_0009));
        y_time->type(5);
        y_time->labelsize(12);
        y_time->textsize(12);
        y_time->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Value_Slider* y_time
      { x_offset = new Fl_Value_Slider(45, 505, 305, 20, getString(STR_FLOPPYVIEWERWINDOW_0010));
        x_offset->type(5);
        x_offset->labelsize(12);
        x_offset->textsize(12);
        x_offset->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Value_Slider* x_offset
      { x_time = new Fl_Slider(370, 505, 305, 20, getString(STR_FLOPPYVIEWERWINDOW_0013));
        x_time->type(1);
        x_time->labelsize(12);
        x_time->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Slider* x_time
      { bt_edit = new Fl_Button(1020, 506, 105, 26, "Edit tools");
        bt_edit->labelsize(10);
        bt_edit->callback((Fl_Callback*)disk_infos_window_bt_edit_callback, (void*)(this));
      } // Fl_Button* bt_edit
      { Fl_Button* o = new Fl_Button(1150, 506, 105, 26, "OK");
        o->callback((Fl_Callback*)floppy_infos_ok, (void*)(this));
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1000, 272, 275, 117, getString(STR_FLOPPYVIEWERWINDOW_0014));
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { iso_mfm_bt = new Fl_Light_Button(1015, 290, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0015));
        iso_mfm_bt->labelsize(10);
        iso_mfm_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* iso_mfm_bt
      { iso_fm_bt = new Fl_Light_Button(1015, 305, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0016));
        iso_fm_bt->labelsize(10);
        iso_fm_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* iso_fm_bt
      { amiga_mfm_bt = new Fl_Light_Button(1015, 320, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0017));
        amiga_mfm_bt->labelsize(10);
        amiga_mfm_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* amiga_mfm_bt
      { membrain_bt = new Fl_Light_Button(1099, 320, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0018));
        membrain_bt->labelsize(10);
        membrain_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* membrain_bt
      { tycom_bt = new Fl_Light_Button(1099, 305, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0019));
        tycom_bt->labelsize(10);
        tycom_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* tycom_bt
      { eemu_bt = new Fl_Light_Button(1099, 290, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0020));
        eemu_bt->labelsize(10);
        eemu_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* eemu_bt
      { apple2_bt = new Fl_Light_Button(1015, 335, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0021));
        apple2_bt->labelsize(10);
        apple2_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* apple2_bt
      { arburg_bt = new Fl_Light_Button(1099, 335, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0022));
        arburg_bt->labelsize(10);
        arburg_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* arburg_bt
      { aed6200p_bt = new Fl_Light_Button(1183, 290, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0023));
        aed6200p_bt->labelsize(10);
        aed6200p_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* aed6200p_bt
      { northstar_bt = new Fl_Light_Button(1183, 305, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0024));
        northstar_bt->labelsize(10);
        northstar_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* northstar_bt
      { heathkit_bt = new Fl_Light_Button(1183, 320, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0025));
        heathkit_bt->labelsize(10);
        heathkit_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* heathkit_bt
      { decrx02_bt = new Fl_Light_Button(1183, 335, 76, 15, getString(STR_FLOPPYVIEWERWINDOW_0026));
        decrx02_bt->labelsize(10);
        decrx02_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* decrx02_bt
      { c64_bt = new Fl_Light_Button(1015, 350, 76, 15, "C64");
        c64_bt->labelsize(10);
        c64_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* c64_bt
      { qd_mo5_bt = new Fl_Light_Button(1183, 350, 76, 15, "QD MO5");
        qd_mo5_bt->labelsize(10);
        qd_mo5_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* qd_mo5_bt
      { victor9k_bt = new Fl_Light_Button(1099, 350, 76, 15, "Victor 9K");
        victor9k_bt->labelsize(10);
        victor9k_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* victor9k_bt
      { centurion_bt = new Fl_Light_Button(1015, 365, 76, 15, "Centurion");
        centurion_bt->labelsize(10);
        centurion_bt->callback((Fl_Callback*)disk_infos_window_callback, (void*)(this));
      } // Fl_Light_Button* centurion_bt
      o->end();
    } // Fl_Group* o

	Fl_Mouse_Box *m = new Fl_Mouse_Box(floppy_map_disp->x(), floppy_map_disp->y(),floppy_map_disp->w(), floppy_map_disp->h(), 0);
	m->callback(mouse_di_cb);

    window->end();
  } // Fl_Window* window
}

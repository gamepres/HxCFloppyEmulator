// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "edittool_window.h"

trackedittool_window::trackedittool_window() {
  { window = new Fl_Double_Window(220, 380, "Track edition toolbar");
    window->labelsize(12);
    window->user_data((void*)(this));
    { bt_copy = new Fl_Button(7, 36, 113, 16, "Copy");
      bt_copy->labelsize(10);
      bt_copy->callback((Fl_Callback*)edittool_window_bt_copy_callback, (void*)(this));
    } // Fl_Button* bt_copy
    { bt_startpoint = new Fl_Button(7, 3, 113, 16, "Select start point");
      bt_startpoint->labelsize(10);
      bt_startpoint->callback((Fl_Callback*)edittool_window_bt_startpoint_callback, (void*)(this));
    } // Fl_Button* bt_startpoint
    { bt_endpoint = new Fl_Button(7, 20, 113, 16, "Select end point");
      bt_endpoint->labelsize(10);
      bt_endpoint->callback((Fl_Callback*)edittool_window_bt_endpoint_callback, (void*)(this));
    } // Fl_Button* bt_endpoint
    { bt_paste = new Fl_Button(7, 52, 113, 16, "Paste");
      bt_paste->labelsize(10);
      bt_paste->callback((Fl_Callback*)edittool_window_bt_paste_callback, (void*)(this));
    } // Fl_Button* bt_paste
    { bt_fill = new Fl_Button(7, 68, 113, 16, "Fill");
      bt_fill->labelsize(10);
      bt_fill->callback((Fl_Callback*)edittool_window_bt_fill_callback, (void*)(this));
    } // Fl_Button* bt_fill
    { edit_startpoint = new Fl_Int_Input(125, 3, 85, 16);
      edit_startpoint->type(2);
      edit_startpoint->labelsize(10);
      edit_startpoint->textsize(10);
    } // Fl_Int_Input* edit_startpoint
    { edit_endpoint = new Fl_Int_Input(125, 20, 85, 16);
      edit_endpoint->type(2);
      edit_endpoint->labelsize(10);
      edit_endpoint->textsize(10);
    } // Fl_Int_Input* edit_endpoint
    { bt_insert = new Fl_Button(7, 85, 113, 16, "Insert");
      bt_insert->labelsize(10);
      bt_insert->callback((Fl_Callback*)edittool_window_bt_insert_callback, (void*)(this));
    } // Fl_Button* bt_insert
    { bt_delete = new Fl_Button(7, 102, 113, 16, "Delete");
      bt_delete->labelsize(10);
      bt_delete->callback((Fl_Callback*)edittool_window_bt_delete_callback, (void*)(this));
    } // Fl_Button* bt_delete
    { bt_setflakey = new Fl_Button(7, 118, 113, 16, "Set Flakey pattern");
      bt_setflakey->labelsize(10);
      bt_setflakey->callback((Fl_Callback*)edittool_window_bt_flakeypattern_callback, (void*)(this));
    } // Fl_Button* bt_setflakey
    { bt_setbitrate = new Fl_Button(7, 134, 113, 16, "Set bitrate");
      bt_setbitrate->labelsize(10);
      bt_setbitrate->callback((Fl_Callback*)edittool_window_bt_setbitrate_callback, (void*)(this));
    } // Fl_Button* bt_setbitrate
    { bt_directedition = new Fl_Light_Button(7, 335, 113, 16, "Direct edition");
      bt_directedition->labelsize(10);
      bt_directedition->user_data((void*)(this));
    } // Fl_Light_Button* bt_directedition
    { edit_bitrate = new Fl_Int_Input(125, 134, 85, 16);
      edit_bitrate->type(2);
      edit_bitrate->labelsize(10);
      edit_bitrate->textsize(10);
      edit_bitrate->user_data((void*)(this));
    } // Fl_Int_Input* edit_bitrate
    { edit_editbuffer = new Fl_Int_Input(7, 352, 207, 22);
      edit_editbuffer->type(2);
      edit_editbuffer->labelsize(10);
      edit_editbuffer->textsize(10);
      edit_editbuffer->user_data((void*)(this));
    } // Fl_Int_Input* edit_editbuffer
    { bt_shift = new Fl_Button(7, 150, 113, 16, "Shift");
      bt_shift->labelsize(10);
      bt_shift->callback((Fl_Callback*)edittool_window_bt_shift_callback, (void*)(this));
    } // Fl_Button* bt_shift
    { edit_shiftbit = new Fl_Int_Input(125, 150, 85, 16);
      edit_shiftbit->type(2);
      edit_shiftbit->labelsize(10);
      edit_shiftbit->textsize(10);
      edit_shiftbit->user_data((void*)(this));
    } // Fl_Int_Input* edit_shiftbit
    { edit_fillflakey = new Fl_Int_Input(125, 68, 85, 16);
      edit_fillflakey->type(2);
      edit_fillflakey->labelsize(10);
      edit_fillflakey->textsize(10);
      edit_fillflakey->user_data((void*)(this));
    } // Fl_Int_Input* edit_fillflakey
    { bt_erase1 = new Fl_Button(7, 250, 113, 16, "Erase Side 1");
      bt_erase1->labelsize(10);
      bt_erase1->callback((Fl_Callback*)edittool_window_bt_erase_side1_callback, (void*)(this));
    } // Fl_Button* bt_erase1
    { bt_erase0 = new Fl_Button(7, 234, 113, 16, "Erase Side 0");
      bt_erase0->labelsize(10);
      bt_erase0->callback((Fl_Callback*)edittool_window_bt_erase_side0_callback, (void*)(this));
    } // Fl_Button* bt_erase0
    { bt_setdiskbitrate = new Fl_Button(7, 202, 113, 16, "Set Disk Bitrate");
      bt_setdiskbitrate->labelsize(10);
      bt_setdiskbitrate->callback((Fl_Callback*)edittool_window_bt_setdiskbitrate_callback, (void*)(this));
    } // Fl_Button* bt_setdiskbitrate
    { edit_bitrate2 = new Fl_Int_Input(125, 202, 85, 16);
      edit_bitrate2->type(2);
      edit_bitrate2->labelsize(10);
      edit_bitrate2->textsize(10);
      edit_bitrate2->user_data((void*)(this));
    } // Fl_Int_Input* edit_bitrate2
    { bt_rpm = new Fl_Button(7, 187, 113, 16, "Set Disk RPM");
      bt_rpm->labelsize(10);
      bt_rpm->callback((Fl_Callback*)edittool_window_bt_setdiskrpm_callback, (void*)(this));
    } // Fl_Button* bt_rpm
    { bt_addtrack = new Fl_Button(7, 282, 113, 16, "Add Track");
      bt_addtrack->labelsize(9);
      bt_addtrack->callback((Fl_Callback*)edittool_window_bt_addtrack_callback, (void*)(this));
    } // Fl_Button* bt_addtrack
    { bt_removetrack = new Fl_Button(7, 298, 113, 16, "Remove Track");
      bt_removetrack->labelsize(9);
      bt_removetrack->callback((Fl_Callback*)edittool_window_bt_removetrack_callback, (void*)(this));
    } // Fl_Button* bt_removetrack
    { edit_rpm = new Fl_Int_Input(125, 187, 85, 16);
      edit_rpm->type(2);
      edit_rpm->labelsize(10);
      edit_rpm->textsize(10);
      edit_rpm->user_data((void*)(this));
    } // Fl_Int_Input* edit_rpm
    { Fl_Box* o = new Fl_Box(6, 184, 209, 1);
      o->box(FL_ENGRAVED_BOX);
      o->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(5, 332, 210, 1);
      o->box(FL_ENGRAVED_BOX);
      o->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { bt_removeoddtracks = new Fl_Button(7, 314, 113, 16, "Remove Odd Tracks");
      bt_removeoddtracks->labelsize(9);
      bt_removeoddtracks->callback((Fl_Callback*)edittool_window_bt_removeoddtracks_callback, (void*)(this));
    } // Fl_Button* bt_removeoddtracks
    { bt_shifttracks = new Fl_Button(7, 218, 113, 16, "Shift Tracks");
      bt_shifttracks->labelsize(10);
      bt_shifttracks->callback((Fl_Callback*)edittool_window_bt_shifttracks_callback, (void*)(this));
    } // Fl_Button* bt_shifttracks
    { edit_shiftbittracks = new Fl_Int_Input(125, 217, 85, 16);
      edit_shiftbittracks->type(2);
      edit_shiftbittracks->labelsize(10);
      edit_shiftbittracks->textsize(10);
      edit_shiftbittracks->user_data((void*)(this));
    } // Fl_Int_Input* edit_shiftbittracks
    { bt_swapsides = new Fl_Button(7, 266, 113, 16, "Swap sides");
      bt_swapsides->labelsize(10);
      bt_swapsides->callback((Fl_Callback*)edittool_window_bt_swapsides_callback, (void*)(this));
    } // Fl_Button* bt_swapsides
    { bt_repair = new Fl_Button(7, 166, 113, 16, "Repair");
      bt_repair->labelsize(10);
      bt_repair->callback((Fl_Callback*)edittool_window_bt_repair_callback, (void*)(this));
      bt_repair->deactivate();
    } // Fl_Button* bt_repair
    { bt_reversedisk = new Fl_Button(120, 314, 95, 16, "Reverse Tracks");
      bt_reversedisk->labelsize(10);
      bt_reversedisk->callback((Fl_Callback*)edittool_window_bt_reversedisk_callback, (void*)(this));
    } // Fl_Button* bt_reversedisk
    window->end();
  } // Fl_Double_Window* window
}

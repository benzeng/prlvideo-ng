
undefined8
FUN_100363800(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  uint uVar1;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = WidgetUtils::cursorPos();
  local_38 = param_2;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_4,param_6,param_7);
  if (uVar1 < 2) {
    uVar1 = (**(code **)(*param_3 + 0x20))(param_3,param_5,param_6);
    if (uVar1 < 2) {
      return 0;
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                  "Failed to grab keyboard into guest. Release the mouse.");
    (**(code **)(*param_3 + 0x18))(param_3,0xc,&local_40);
  }
  else {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Failed to grab mouse into guest");
  }
  return 3;
}


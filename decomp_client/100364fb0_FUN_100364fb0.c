
undefined8
FUN_100364fb0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = WidgetUtils::cursorPos();
  local_38 = param_2;
  iVar2 = (**(code **)(*param_3 + 0x10))(param_3,param_4,param_6,param_7);
  bVar1 = true;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_3 + 0x10))(param_3,param_4,param_6,param_7);
    if (iVar2 != 1) {
      bVar1 = false;
      FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Failed to grab mouse into guest");
    }
  }
  iVar2 = (**(code **)(*param_3 + 0x20))(param_3,param_5,param_6);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_3 + 0x20))(param_3,param_5,param_6);
    if (iVar2 != 1) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                    "Failed to grab keyboard into guest. Release the mouse.");
      uVar3 = 3;
      if (bVar1) {
        (**(code **)(*param_3 + 0x18))(param_3,0xc,&local_40);
      }
    }
  }
  return uVar3;
}


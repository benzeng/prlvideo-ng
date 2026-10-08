
undefined8
FUN_100366a90(undefined8 param_1,undefined8 param_2,long param_3,QWidget *param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  
  uVar3 = *(uint *)(param_5 + 0x50);
  if ((int)uVar3 < 0x10) {
    if ((uVar3 < 9) && ((0x116U >> (uVar3 & 0x1f) & 1) != 0)) goto LAB_100366aec;
  }
  else if ((int)uVar3 < 0x40) {
    if ((uVar3 == 0x10) || (uVar3 == 0x20)) {
LAB_100366aec:
      FUN_100365f20(param_3,param_4,param_5);
      uVar3 = *(uint *)(param_5 + 0x50);
      if (uVar3 == 2) {
        iVar2 = MacUtils::getMouseButtons();
        uVar3 = 2;
        if ((iVar2 == 1) && ((*(byte *)(param_5 + 0x17) & 0x10) != 0)) {
          uVar3 = 1;
          FUN_10035db20(*(undefined8 *)(param_3 + 8),0x20,1);
        }
      }
      FUN_10035daa0(*(long *)(param_3 + 8),*(uint *)(*(long *)(param_3 + 8) + 0x80) | uVar3);
      local_60 = WidgetUtils::mapToGlobal(param_4,(QPointF *)(param_5 + 0x20));
      plVar1 = *(long **)(*(long *)(param_3 + 8) + 0x28);
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = param_2;
      local_30 = uVar3;
      (**(code **)(*plVar1 + 0xd0))(plVar1,&local_60,1);
      return 0;
    }
  }
  else if ((uVar3 == 0x40) || (uVar3 == 0x80)) goto LAB_100366aec;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",2,
                  "Failed to send mouse to VM. Unsupported mouse buttons.");
  }
  return 0;
}


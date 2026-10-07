
undefined8
FUN_1002e7620(long *param_1,char param_2,char param_3,short param_4,ushort param_5,
             undefined1 *param_6,int *param_7)

{
  undefined8 uVar1;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[MSC] ClassIntControl %02x %02x %04x %04x",param_2,param_3,param_4,
                  param_5);
  }
  uVar1 = 0x20;
  if ((param_4 == 0) && (param_5 < *(byte *)(*(long *)(param_1[5] + 0x10) + 4))) {
    if (param_3 == -2) {
      if (param_2 != -0x5f) {
        return 0x20;
      }
      if (*param_7 != 1) {
        return 0x20;
      }
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[MSC] Get Max LUN");
      }
      *param_6 = 0;
    }
    else {
      if (param_3 != -1) {
        return 0x20;
      }
      if (param_2 != '!') {
        return 0x20;
      }
      if (*param_7 != 0) {
        return 0x20;
      }
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[MSC] MS Reset");
      }
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}


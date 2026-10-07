
undefined8
FUN_1002dc480(long *param_1,char param_2,int param_3,undefined2 param_4,ushort param_5,
             undefined1 *param_6)

{
  int iVar1;
  
  if (param_3 == 1) {
    if (param_2 < '\0') {
      return 0x20;
    }
  }
  else if (param_3 == 10) {
    if (param_2 != -0x7f) {
      return 0x20;
    }
    if (*(byte *)(*(long *)(param_1[5] + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    *param_6 = *(undefined1 *)(*(long *)(param_1[3] + (ulong)param_5 * 0x10) + 3);
  }
  else {
    if (param_3 != 0xb) {
      return 0x20;
    }
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_5,param_4);
    if (iVar1 == 0) {
      return 0x20;
    }
  }
  return 0;
}


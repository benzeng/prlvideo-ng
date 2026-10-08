
undefined8 FUN_100bda2d0(undefined1 *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    iVar1 = FUN_100c6fc30(param_3);
    uVar3 = DAT_102302fb0;
    if (((((((int)DAT_102302fb0 == iVar1) || (uVar3 = DAT_102302fb8, (int)DAT_102302fb8 == iVar1))
          || (uVar3 = DAT_102302fc0, (int)DAT_102302fc0 == iVar1)) ||
         ((uVar3 = DAT_102302fc8, (int)DAT_102302fc8 == iVar1 ||
          (uVar3 = DAT_102302fd0, (int)DAT_102302fd0 == iVar1)))) ||
        (uVar3 = DAT_102302fd8, (int)DAT_102302fd8 == iVar1)) && (uVar3 >> 0x20 != 0xffffffff)) {
      iVar1 = *param_2;
      uVar2 = DAT_102302fe0;
      uVar4 = 0;
      if (((((int)DAT_102302fe0 == iVar1) || (uVar2 = DAT_102302fe8, (int)DAT_102302fe8 == iVar1))
          || (uVar2 = DAT_102302ff0, (int)DAT_102302ff0 == iVar1)) && (uVar2 >> 0x20 != 0xffffffff))
      {
        *param_1 = (char)(uVar3 >> 0x20);
        param_1[1] = (char)(uVar2 >> 0x20);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


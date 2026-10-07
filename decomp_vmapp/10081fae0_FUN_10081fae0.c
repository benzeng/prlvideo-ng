
undefined8 FUN_10081fae0(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    lVar3 = FUN_100884e10();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x267;
LAB_10081fb82:
      FUN_100887ce0(0xf,0x66,0x41,"ex_data.c",uVar4);
      return 0;
    }
  }
  iVar1 = FUN_100885600();
  lVar3 = *param_1;
  if (iVar1 <= param_2) {
    iVar1 = iVar1 + -1;
    do {
      iVar2 = FUN_1008852e0(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0x26f;
        goto LAB_10081fb82;
      }
      lVar3 = *param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  FUN_100885650(lVar3,param_2,param_3);
  return 1;
}


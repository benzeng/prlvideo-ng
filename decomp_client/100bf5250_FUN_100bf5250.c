
undefined8 FUN_100bf5250(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    lVar3 = FUN_100c60010();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x267;
LAB_100bf52f2:
      FUN_100c62ee0(0xf,0x66,0x41,"ex_data.c",uVar4);
      return 0;
    }
  }
  iVar1 = FUN_100c60800();
  lVar3 = *param_1;
  if (iVar1 <= param_2) {
    iVar1 = iVar1 + -1;
    do {
      iVar2 = FUN_100c604e0(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0x26f;
        goto LAB_100bf52f2;
      }
      lVar3 = *param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  FUN_100c60850(lVar3,param_2,param_3);
  return 1;
}


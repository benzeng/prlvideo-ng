
undefined8 FUN_100cb1100(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*param_1 == 0) {
    lVar4 = FUN_100c60010();
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_100c60800();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_100c60820(*param_1,iVar1);
        iVar2 = FUN_100bf7220(*puVar3);
        if (iVar2 == param_2) {
          FUN_100c7bc60(puVar3);
          lVar4 = FUN_100c7bca0(param_2,param_3,param_4);
          if (lVar4 == 0) {
            return 0;
          }
          lVar6 = FUN_100c60850(*param_1,iVar1,lVar4);
          if (lVar6 != 0) {
            return 1;
          }
          goto LAB_100cb11e7;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(*param_1);
      } while (iVar1 < iVar2);
    }
  }
  lVar4 = FUN_100c7bca0(param_2,param_3,param_4);
  uVar5 = 0;
  if (lVar4 != 0) {
    iVar1 = FUN_100c604e0(*param_1,lVar4);
    uVar5 = 1;
    if (iVar1 == 0) {
LAB_100cb11e7:
      FUN_100c7bc60(lVar4);
      uVar5 = 0;
    }
  }
  return uVar5;
}


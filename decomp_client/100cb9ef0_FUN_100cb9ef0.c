
undefined8 FUN_100cb9ef0(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  if (0 < param_3) {
    lVar4 = FUN_100c83780();
    if (lVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_100c76820(lVar4,(long)param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_100c7ae20();
  if (lVar2 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    FUN_100c837a0(lVar4);
    return 0;
  }
  uVar3 = FUN_100bf6fe0(param_2);
  FUN_100c7aec0(lVar2,uVar3,-(uint)(lVar4 == 0) | 2,lVar4);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar4 = FUN_100c60010();
    *param_1 = lVar4;
    if (lVar4 == 0) goto LAB_100cb9f92;
  }
  iVar1 = FUN_100c604e0(lVar4,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
LAB_100cb9f92:
  FUN_100c7ae40(lVar2);
  return 0;
}


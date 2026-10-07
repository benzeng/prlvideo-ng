
undefined8 FUN_1008dd6b0(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  if (0 < param_3) {
    lVar4 = FUN_1008a8200();
    if (lVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_10089b2a0(lVar4,(long)param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_10089f8a0();
  if (lVar2 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    FUN_1008a8220(lVar4);
    return 0;
  }
  uVar3 = FUN_100821870(param_2);
  FUN_10089f940(lVar2,uVar3,-(uint)(lVar4 == 0) | 2,lVar4);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar4 = FUN_100884e10();
    *param_1 = lVar4;
    if (lVar4 == 0) goto LAB_1008dd752;
  }
  iVar1 = FUN_1008852e0(lVar4,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
LAB_1008dd752:
  FUN_10089f8c0(lVar2);
  return 0;
}


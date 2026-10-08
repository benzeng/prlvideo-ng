
undefined1  [16] FUN_100ae7d30(long *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (param_2 < 0) {
    lVar2 = *param_1;
  }
  else {
    lVar2 = *param_1;
    if (param_2 < *(int *)(lVar2 + 4)) goto LAB_100ae7d93;
  }
  iVar3 = -1;
  if (0 < (long)*(int *)(lVar2 + 4)) {
    lVar5 = lVar2 + -4 + *(long *)(lVar2 + 0x10);
    lVar4 = (long)*(int *)(lVar2 + 4) << 2;
    do {
      if (lVar4 == 0) goto LAB_100ae7d8b;
      lVar4 = lVar4 + -4;
      piVar1 = (int *)(lVar5 + 4);
      lVar5 = lVar5 + 4;
    } while (*piVar1 != (int)param_1[1]);
    iVar3 = (int)((ulong)(lVar5 - (lVar2 + *(long *)(lVar2 + 0x10))) >> 2);
  }
LAB_100ae7d8b:
  param_2 = 0;
  if (iVar3 != -1) {
    param_2 = iVar3;
  }
LAB_100ae7d93:
  _CGDisplayBounds(&local_28,*(undefined4 *)(lVar2 + *(long *)(lVar2 + 0x10) + (long)param_2 * 4));
  auVar6._4_4_ = (int)local_20;
  auVar6._0_4_ = (int)local_28;
  auVar6._12_4_ = (int)local_20 + -1 + (int)local_10;
  auVar6._8_4_ = (int)local_28 + -1 + (int)local_18;
  return auVar6;
}


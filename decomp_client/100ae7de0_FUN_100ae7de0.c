
undefined4 FUN_100ae7de0(long *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 0) {
    lVar2 = *param_1;
  }
  else {
    lVar2 = *param_1;
    if (param_2 < *(int *)(lVar2 + 4)) goto LAB_100ae7e43;
  }
  iVar3 = -1;
  if (0 < (long)*(int *)(lVar2 + 4)) {
    lVar5 = lVar2 + -4 + *(long *)(lVar2 + 0x10);
    lVar4 = (long)*(int *)(lVar2 + 4) << 2;
    do {
      if (lVar4 == 0) goto LAB_100ae7e3b;
      lVar4 = lVar4 + -4;
      piVar1 = (int *)(lVar5 + 4);
      lVar5 = lVar5 + 4;
    } while (*piVar1 != (int)param_1[1]);
    iVar3 = (int)((ulong)(lVar5 - (lVar2 + *(long *)(lVar2 + 0x10))) >> 2);
  }
LAB_100ae7e3b:
  param_2 = 0;
  if (iVar3 != -1) {
    param_2 = iVar3;
  }
LAB_100ae7e43:
  return *(undefined4 *)(lVar2 + *(long *)(lVar2 + 0x10) + (long)param_2 * 4);
}


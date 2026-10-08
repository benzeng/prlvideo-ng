
int FUN_100ae79f0(long *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar2 = *param_1;
  iVar5 = -1;
  if (0 < (long)*(int *)(lVar2 + 4)) {
    lVar6 = lVar2 + -4 + *(long *)(lVar2 + 0x10);
    lVar4 = (long)*(int *)(lVar2 + 4) << 2;
    do {
      if (lVar4 == 0) goto LAB_100ae7a3b;
      lVar4 = lVar4 + -4;
      piVar1 = (int *)(lVar6 + 4);
      lVar6 = lVar6 + 4;
    } while (*piVar1 != (int)param_1[1]);
    iVar5 = (int)((ulong)(lVar6 - (lVar2 + *(long *)(lVar2 + 0x10))) >> 2);
  }
LAB_100ae7a3b:
  iVar3 = 0;
  if (iVar5 != -1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


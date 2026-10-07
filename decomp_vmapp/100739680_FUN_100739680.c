
undefined8 FUN_100739680(long param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  
  iVar4 = param_3 + -1;
  if (param_4 < 0) {
    lVar5 = (long)param_4 + -1;
    plVar6 = (long *)(param_2 + ((long)iVar4 - (long)param_4) * 8);
    do {
      if (*plVar6 != 0) {
        return 0xffffffff;
      }
      lVar5 = lVar5 + 1;
      plVar6 = plVar6 + -1;
    } while (lVar5 < -1);
  }
  if (0 < param_4) {
    lVar5 = (long)param_4 + 1;
    do {
      if (*(long *)(param_1 + (long)iVar4 * 8 + -8 + lVar5 * 8) != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
    } while (1 < lVar5);
  }
  uVar1 = *(ulong *)(param_2 + (long)iVar4 * 8);
  uVar2 = *(ulong *)(param_1 + (long)iVar4 * 8);
  bVar7 = uVar2 < uVar1;
  bVar8 = uVar2 == uVar1;
  if (bVar8) {
    uVar3 = 0;
    if (-1 < param_3 + -2) {
      lVar5 = (long)(param_3 + -2) + 1;
      do {
        uVar1 = *(ulong *)(param_2 + -8 + lVar5 * 8);
        uVar2 = *(ulong *)(param_1 + -8 + lVar5 * 8);
        bVar7 = uVar2 < uVar1;
        bVar8 = uVar2 == uVar1;
        if (!bVar8) goto LAB_100739716;
        lVar5 = lVar5 + -1;
      } while (0 < lVar5);
    }
  }
  else {
LAB_100739716:
    uVar3 = 0xffffffff;
    if (!bVar7 && !bVar8) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


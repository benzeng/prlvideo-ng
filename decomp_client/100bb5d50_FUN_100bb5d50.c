
undefined8 FUN_100bb5d50(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar5 = (int)param_2[1];
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if (param_2 != param_1) {
      if (*(int *)((long)param_1 + 0xc) < iVar5) {
        lVar3 = FUN_100bac510(param_1);
        if (lVar3 == 0) {
          return 0;
        }
        iVar5 = (int)param_2[1];
      }
      *(int *)(param_1 + 1) = iVar5;
      *(int *)(param_1 + 2) = (int)param_2[2];
      iVar5 = (int)param_2[1];
    }
    lVar3 = *param_1;
    if (0 < iVar5) {
      lVar1 = *param_2;
      lVar6 = (long)iVar5 + 1;
      uVar7 = 0;
      do {
        uVar2 = *(ulong *)(lVar1 + -0x10 + lVar6 * 8);
        *(ulong *)(lVar3 + -0x10 + lVar6 * 8) = uVar2 >> 1 | uVar7;
        uVar7 = uVar2 << 0x3f;
        lVar6 = lVar6 + -1;
      } while (1 < lVar6);
    }
    iVar5 = (int)param_1[1];
    if (0 < (long)iVar5) {
      plVar4 = (long *)(lVar3 + -8 + (long)iVar5 * 8);
      iVar5 = iVar5 + 1;
      do {
        if (*plVar4 != 0) {
          return 1;
        }
        plVar4 = plVar4 + -1;
        *(int *)(param_1 + 1) = iVar5 + -2;
        iVar5 = iVar5 + -1;
      } while (1 < iVar5);
    }
  }
  return 1;
}



undefined8 FUN_10084fef0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  
  iVar1 = (int)param_2[1];
  lVar8 = (long)iVar1;
  if (lVar8 == 0) {
    FUN_10084bbb0(param_1,0);
  }
  else {
    lVar2 = *param_2;
    uVar5 = *(ulong *)(lVar2 + -8 + lVar8 * 8);
    iVar9 = iVar1 - (uint)(uVar5 == 1);
    if (param_2 != param_1) {
      if (*(int *)((long)param_1 + 0xc) < iVar9) {
        lVar4 = FUN_10084b900(param_1,iVar9);
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = *(ulong *)(lVar2 + -8 + lVar8 * 8);
      }
      *(int *)(param_1 + 2) = (int)param_2[2];
    }
    lVar4 = *param_1;
    if (uVar5 >> 1 != 0) {
      *(ulong *)(lVar4 + -8 + lVar8 * 8) = uVar5 >> 1;
    }
    if (1 < iVar1) {
      puVar6 = (ulong *)(lVar4 + (long)(iVar1 + -2) * 8);
      puVar7 = (ulong *)(lVar2 + (long)(iVar1 + -2) * 8);
      do {
        lVar8 = lVar8 + -1;
        uVar3 = *puVar7;
        *puVar6 = uVar5 << 0x3f | uVar3 >> 1;
        puVar6 = puVar6 + -1;
        puVar7 = puVar7 + -1;
        uVar5 = uVar3;
      } while (1 < lVar8);
    }
    *(int *)(param_1 + 1) = iVar9;
  }
  return 1;
}


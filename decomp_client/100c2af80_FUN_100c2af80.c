
undefined8 FUN_100c2af80(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  
  if (param_1 == param_2) {
    if ((*(int *)((long)param_1 + 0xc) <= (int)param_1[1]) &&
       (lVar4 = FUN_100c26b00(param_1,(int)param_1[1] + 1), lVar4 == 0)) {
      return 0;
    }
  }
  else {
    *(int *)(param_1 + 2) = (int)param_2[2];
    iVar6 = (int)param_2[1];
    if (*(int *)((long)param_1 + 0xc) <= iVar6) {
      lVar4 = FUN_100c26b00(param_1,iVar6 + 1);
      if (lVar4 == 0) {
        return 0;
      }
      iVar6 = (int)param_2[1];
    }
    *(int *)(param_1 + 1) = iVar6;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar1) {
    puVar2 = (ulong *)*param_1;
    puVar7 = (ulong *)*param_2;
    lVar4 = 1;
    if (1 < (int)uVar1) {
      lVar4 = (ulong)(uVar1 - 1) + 1;
    }
    uVar9 = 0;
    puVar5 = puVar2;
    if ((uVar1 & 3) == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar3 * 2 | uVar8;
        puVar5 = puVar5 + 1;
        uVar8 = uVar3 >> 0x3f;
        uVar9 = uVar9 + 1;
      } while ((uVar1 & 3) != uVar9);
    }
    if (2 < uVar1 - 1) {
      do {
        uVar3 = *puVar7;
        *puVar5 = uVar3 * 2 | uVar8;
        uVar8 = puVar7[1];
        puVar5[1] = uVar3 >> 0x3f | uVar8 << 1;
        uVar3 = puVar7[2];
        puVar5[2] = uVar8 >> 0x3f | uVar3 << 1;
        uVar8 = puVar7[3];
        puVar5[3] = uVar3 >> 0x3f | uVar8 << 1;
        uVar8 = uVar8 >> 0x3f;
        uVar9 = uVar9 + 4;
        puVar7 = puVar7 + 4;
        puVar5 = puVar5 + 4;
      } while ((int)uVar9 < (int)uVar1);
    }
    if (uVar8 != 0) {
      puVar2[lVar4] = 1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  return 1;
}


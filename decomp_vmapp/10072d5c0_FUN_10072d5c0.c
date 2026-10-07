
long * FUN_10072d5c0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar11 = *(uint *)(param_2 + 1);
  if (*(int *)((long)param_1 + 0xc) < (int)uVar11) {
    lVar7 = FUN_10072d730(param_1);
    if (lVar7 == 0) {
      return (long *)0x0;
    }
    uVar11 = *(uint *)(param_2 + 1);
  }
  puVar13 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)*param_2;
  uVar10 = (int)uVar11 >> 2;
  if (0 < (int)uVar10) {
    uVar5 = ~uVar10;
    uVar8 = 0xfffffffe;
    if (-3 < (int)uVar5) {
      uVar8 = uVar5;
    }
    uVar1 = uVar10 + 1 + uVar8;
    puVar9 = puVar14;
    puVar12 = puVar13;
    if ((uVar10 + 2 + uVar8 & 3) != 0) {
      uVar8 = 0xfffffffe;
      if (-3 < (int)uVar5) {
        uVar8 = uVar5;
      }
      iVar6 = -(uVar10 + 2 + uVar8 & 3);
      do {
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        *puVar12 = *puVar9;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        uVar10 = uVar10 - 1;
        puVar12 = puVar12 + 4;
        puVar9 = puVar9 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
    }
    if (2 < uVar1) {
      iVar6 = uVar10 + 1;
      do {
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        *puVar12 = *puVar9;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        uVar2 = puVar9[5];
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        puVar12[4] = puVar9[4];
        puVar12[5] = uVar2;
        puVar12[6] = uVar3;
        puVar12[7] = uVar4;
        uVar2 = puVar9[9];
        uVar3 = puVar9[10];
        uVar4 = puVar9[0xb];
        puVar12[8] = puVar9[8];
        puVar12[9] = uVar2;
        puVar12[10] = uVar3;
        puVar12[0xb] = uVar4;
        uVar2 = puVar9[0xd];
        uVar3 = puVar9[0xe];
        uVar4 = puVar9[0xf];
        puVar12[0xc] = puVar9[0xc];
        puVar12[0xd] = uVar2;
        puVar12[0xe] = uVar3;
        puVar12[0xf] = uVar4;
        iVar6 = iVar6 + -4;
        puVar9 = puVar9 + 0x10;
        puVar12 = puVar12 + 0x10;
      } while (1 < iVar6);
    }
    puVar14 = puVar14 + (ulong)uVar1 * 4 + 4;
    puVar13 = puVar13 + (ulong)uVar1 * 4 + 4;
  }
  uVar10 = uVar11 & 3;
  if (uVar10 != 1) {
    if (uVar10 != 2) {
      if (uVar10 != 3) goto LAB_10072d711;
      puVar13[2] = puVar14[2];
    }
    puVar13[1] = puVar14[1];
  }
  *puVar13 = *puVar14;
LAB_10072d711:
  *(uint *)(param_1 + 1) = uVar11;
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}


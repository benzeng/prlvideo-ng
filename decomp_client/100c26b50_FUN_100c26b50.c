
long * FUN_100c26b50(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar13 = *(uint *)(param_2 + 1);
  if (*(int *)((long)param_1 + 0xc) < (int)uVar13) {
    puVar7 = (undefined8 *)FUN_100c26860(param_1,uVar13);
    if (puVar7 == (undefined8 *)0x0) {
      return (long *)0x0;
    }
    if (*param_1 != 0) {
      FUN_100bf3910();
    }
    *param_1 = (long)puVar7;
    *(uint *)((long)param_1 + 0xc) = uVar13;
    uVar13 = *(uint *)(param_2 + 1);
  }
  else {
    puVar7 = (undefined8 *)*param_1;
  }
  puVar12 = (undefined8 *)*param_2;
  uVar8 = (int)uVar13 >> 2;
  if (0 < (int)uVar8) {
    uVar5 = ~uVar8;
    uVar9 = 0xfffffffe;
    if (-3 < (int)uVar5) {
      uVar9 = uVar5;
    }
    uVar1 = uVar8 + 1 + uVar9;
    puVar10 = puVar7;
    puVar11 = puVar12;
    if ((uVar8 + 2 + uVar9 & 3) != 0) {
      uVar9 = 0xfffffffe;
      if (-3 < (int)uVar5) {
        uVar9 = uVar5;
      }
      iVar6 = -(uVar8 + 2 + uVar9 & 3);
      do {
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
    }
    if (2 < uVar1) {
      iVar6 = uVar8 + 1;
      do {
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        uVar2 = puVar11[5];
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar2;
        puVar10[6] = uVar3;
        puVar10[7] = uVar4;
        uVar2 = puVar11[9];
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar2;
        puVar10[10] = uVar3;
        puVar10[0xb] = uVar4;
        uVar2 = puVar11[0xd];
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar2;
        puVar10[0xe] = uVar3;
        puVar10[0xf] = uVar4;
        iVar6 = iVar6 + -4;
        puVar11 = puVar11 + 0x10;
        puVar10 = puVar10 + 0x10;
      } while (1 < iVar6);
    }
    puVar12 = puVar12 + (ulong)uVar1 * 4 + 4;
    puVar7 = puVar7 + (ulong)uVar1 * 4 + 4;
  }
  uVar8 = uVar13 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_100c26cc5;
      puVar7[2] = puVar12[2];
    }
    puVar7[1] = puVar12[1];
  }
  *puVar7 = *puVar12;
LAB_100c26cc5:
  *(uint *)(param_1 + 1) = uVar13;
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}


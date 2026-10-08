
long * FUN_100bac510(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (param_2 <= *(int *)((long)param_1 + 0xc)) {
    return param_1;
  }
  if (0x7fffff < param_2) {
    return (long *)0x0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 2) != 0) {
    return (long *)0x0;
  }
  puVar10 = (undefined8 *)FUN_100bf3540(param_2 * 8,"../src/snlic/sn_crypto_helper_13.c",0x158);
  if (puVar10 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) goto LAB_100bac69f;
  uVar16 = *(uint *)(param_1 + 1);
  uVar12 = (int)uVar16 >> 2;
  puVar11 = puVar1;
  puVar13 = puVar10;
  if (0 < (int)uVar12) {
    uVar8 = ~uVar12;
    uVar14 = 0xfffffffe;
    if (-3 < (int)uVar8) {
      uVar14 = uVar8;
    }
    uVar15 = uVar12 + 1 + uVar14;
    if ((uVar12 + 2 + uVar14 & 3) != 0) {
      uVar14 = 0xfffffffe;
      if (-3 < (int)uVar8) {
        uVar14 = uVar8;
      }
      iVar9 = -(uVar12 + 2 + uVar14 & 3);
      do {
        uVar2 = *(undefined4 *)((long)puVar11 + 4);
        uVar3 = *(undefined4 *)(puVar11 + 1);
        uVar4 = *(undefined4 *)((long)puVar11 + 0xc);
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)puVar13 = *(undefined4 *)puVar11;
        *(undefined4 *)((long)puVar13 + 4) = uVar2;
        *(undefined4 *)(puVar13 + 1) = uVar3;
        *(undefined4 *)((long)puVar13 + 0xc) = uVar4;
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0);
    }
    if (2 < uVar15) {
      iVar9 = uVar12 + 1;
      do {
        uVar5 = puVar11[1];
        uVar6 = puVar11[2];
        uVar7 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar5;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
        uVar5 = puVar11[5];
        uVar6 = puVar11[6];
        uVar7 = puVar11[7];
        puVar13[4] = puVar11[4];
        puVar13[5] = uVar5;
        puVar13[6] = uVar6;
        puVar13[7] = uVar7;
        uVar5 = puVar11[9];
        uVar6 = puVar11[10];
        uVar7 = puVar11[0xb];
        puVar13[8] = puVar11[8];
        puVar13[9] = uVar5;
        puVar13[10] = uVar6;
        puVar13[0xb] = uVar7;
        uVar2 = *(undefined4 *)((long)puVar11 + 100);
        uVar3 = *(undefined4 *)(puVar11 + 0xd);
        uVar4 = *(undefined4 *)((long)puVar11 + 0x6c);
        uVar5 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
        *(undefined4 *)((long)puVar13 + 100) = uVar2;
        *(undefined4 *)(puVar13 + 0xd) = uVar3;
        *(undefined4 *)((long)puVar13 + 0x6c) = uVar4;
        puVar13[0xe] = uVar5;
        puVar13[0xf] = uVar6;
        iVar9 = iVar9 + -4;
        puVar11 = puVar11 + 0x10;
        puVar13 = puVar13 + 0x10;
      } while (1 < iVar9);
    }
    puVar13 = puVar10 + (ulong)uVar15 * 4 + 4;
    puVar11 = puVar1 + (ulong)uVar15 * 4 + 4;
  }
  uVar16 = uVar16 & 3;
  if (uVar16 == 1) {
LAB_100bac68f:
    *puVar13 = *puVar11;
  }
  else {
    if (uVar16 == 2) {
LAB_100bac687:
      puVar13[1] = puVar11[1];
      goto LAB_100bac68f;
    }
    if (uVar16 == 3) {
      puVar13[2] = puVar11[2];
      goto LAB_100bac687;
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_100bf3910();
  }
LAB_100bac69f:
  *param_1 = (long)puVar10;
  *(int *)((long)param_1 + 0xc) = param_2;
  return param_1;
}


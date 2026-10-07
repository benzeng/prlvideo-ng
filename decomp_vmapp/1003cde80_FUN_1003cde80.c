
undefined8 FUN_1003cde80(long param_1,int *param_2,long param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar10;
  
  uVar15 = param_2[1];
  uVar12 = param_2[3];
  if (uVar15 < uVar12) {
    iVar2 = param_2[2];
    iVar3 = *param_2;
    uVar19 = *(uint *)(param_3 + 0xc);
    puVar18 = (uint *)((ulong)(param_4[1] * uVar19 + *param_4 * 4) + *(long *)(param_3 + 0x10));
    uVar5 = *(uint *)(param_1 + 0xc);
    puVar17 = (uint *)((ulong)(uVar5 * uVar15 + iVar3 * 4) + *(long *)(param_1 + 0x10));
    uVar7 = (iVar2 + -1) - iVar3;
    uVar10 = (ulong)uVar7;
    uVar1 = uVar10 + 1;
    uVar8 = iVar2 - iVar3;
    do {
      if (iVar2 != iVar3) {
        uVar13 = uVar1 & 0x1fffffffc;
        if (uVar13 == 0) {
LAB_1003cdf59:
          uVar13 = 0;
          puVar4 = puVar17;
          puVar6 = puVar18;
        }
        else {
          puVar6 = puVar18 + uVar13;
          puVar4 = puVar17 + uVar13;
          puVar11 = puVar18;
          uVar14 = uVar1 & 0xfffffffffffffffc;
          puVar16 = puVar17;
          if ((puVar18 <= puVar17 + uVar10) && (puVar17 <= puVar18 + uVar10)) goto LAB_1003cdf59;
          do {
            uVar12 = puVar16[1];
            uVar19 = puVar16[2];
            uVar5 = puVar16[3];
            *puVar11 = *puVar16 << 0x18 | *puVar16 >> 8;
            puVar11[1] = uVar12 << 0x18 | uVar12 >> 8;
            puVar11[2] = uVar19 << 0x18 | uVar19 >> 8;
            puVar11[3] = uVar5 << 0x18 | uVar5 >> 8;
            puVar16 = puVar16 + 4;
            puVar11 = puVar11 + 4;
            uVar14 = uVar14 - 4;
          } while (uVar14 != 0);
        }
        uVar12 = (uint)uVar13;
        if (uVar1 != uVar13) {
          uVar19 = uVar7 - uVar12;
          if ((uVar8 & 3) != 0) {
            iVar9 = -(uVar8 & 3);
            do {
              *puVar6 = *puVar4 << 0x18 | *puVar4 >> 8;
              puVar6 = puVar6 + 1;
              puVar4 = puVar4 + 1;
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulong)uVar12;
              iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
          }
          if (2 < uVar19) {
            iVar9 = uVar8 - uVar12;
            do {
              *puVar6 = *puVar4 << 0x18 | *puVar4 >> 8;
              puVar6[1] = puVar4[1] << 0x18 | puVar4[1] >> 8;
              puVar6[2] = puVar4[2] << 0x18 | puVar4[2] >> 8;
              puVar6[3] = puVar4[3] << 0x18 | puVar4[3] >> 8;
              puVar4 = puVar4 + 4;
              puVar6 = puVar6 + 4;
              iVar9 = iVar9 + -4;
            } while (iVar9 != 0);
          }
        }
        uVar5 = *(uint *)(param_1 + 0xc);
        uVar19 = *(uint *)(param_3 + 0xc);
        uVar12 = param_2[3];
      }
      puVar17 = (uint *)((long)puVar17 + (ulong)uVar5);
      puVar18 = (uint *)((long)puVar18 + (ulong)uVar19);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar12);
  }
  return 1;
}


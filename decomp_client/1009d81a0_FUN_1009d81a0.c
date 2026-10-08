
void FUN_1009d81a0(long param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  
  uVar20 = *(uint *)(param_1 + 0x410) & 0xffff;
  uVar10 = *(uint *)(param_1 + 0x410) >> 0x10;
  if (0x15af < param_3) {
    uVar1 = param_3 - 0x15b0;
    pbVar22 = param_2;
    do {
      param_3 = param_3 - 0x15b0;
      lVar19 = 0;
      do {
        iVar11 = pbVar22[lVar19] + uVar20;
        iVar3 = (uint)pbVar22[lVar19 + 1] + iVar11;
        iVar12 = (uint)pbVar22[lVar19 + 2] + iVar3;
        iVar4 = (uint)pbVar22[lVar19 + 3] + iVar12;
        iVar13 = (uint)pbVar22[lVar19 + 4] + iVar4;
        iVar5 = (uint)pbVar22[lVar19 + 5] + iVar13;
        iVar14 = (uint)pbVar22[lVar19 + 6] + iVar5;
        iVar6 = (uint)pbVar22[lVar19 + 7] + iVar14;
        iVar15 = (uint)pbVar22[lVar19 + 8] + iVar6;
        iVar7 = (uint)pbVar22[lVar19 + 9] + iVar15;
        iVar16 = (uint)pbVar22[lVar19 + 10] + iVar7;
        iVar8 = (uint)pbVar22[lVar19 + 0xb] + iVar16;
        iVar17 = (uint)pbVar22[lVar19 + 0xc] + iVar8;
        iVar9 = (uint)pbVar22[lVar19 + 0xd] + iVar17;
        iVar18 = (uint)pbVar22[lVar19 + 0xe] + iVar9;
        uVar20 = (uint)pbVar22[lVar19 + 0xf] + iVar18;
        uVar10 = uVar10 + iVar11 + iVar3 + iVar12 + iVar4 + iVar13 + iVar5 + iVar14 + iVar6 + iVar15
                 + iVar7 + iVar16 + iVar8 + iVar17 + iVar9 + iVar18 + uVar20;
        lVar19 = lVar19 + 0x10;
      } while ((int)lVar19 != 0x15b0);
      pbVar22 = pbVar22 + 0x15b0;
      uVar20 = uVar20 % 0xfff1;
      uVar10 = uVar10 % 0xfff1;
    } while (0x15af < param_3);
    param_2 = param_2 + (uVar1 / 0x15b0) * 0x15b0 + 0x15b0;
    param_3 = uVar1 % 0x15b0;
  }
  if (param_3 != 0) {
    if (param_3 < 0x10) goto LAB_1009d83e0;
    uVar1 = param_3 - 0x10;
    uVar21 = uVar1 & 0xfffffffffffffff0;
    pbVar22 = param_2 + uVar21 + 0x10;
    do {
      param_3 = param_3 - 0x10;
      iVar11 = *param_2 + uVar20;
      iVar3 = (uint)param_2[1] + iVar11;
      iVar12 = (uint)param_2[2] + iVar3;
      iVar4 = (uint)param_2[3] + iVar12;
      iVar13 = (uint)param_2[4] + iVar4;
      iVar5 = (uint)param_2[5] + iVar13;
      iVar14 = (uint)param_2[6] + iVar5;
      iVar6 = (uint)param_2[7] + iVar14;
      iVar15 = (uint)param_2[8] + iVar6;
      iVar7 = (uint)param_2[9] + iVar15;
      iVar16 = (uint)param_2[10] + iVar7;
      iVar8 = (uint)param_2[0xb] + iVar16;
      iVar17 = (uint)param_2[0xc] + iVar8;
      iVar9 = (uint)param_2[0xd] + iVar17;
      iVar18 = (uint)param_2[0xe] + iVar9;
      uVar20 = (uint)param_2[0xf] + iVar18;
      uVar10 = uVar10 + iVar11 + iVar3 + iVar12 + iVar4 + iVar13 + iVar5 + iVar14 + iVar6 + iVar15 +
               iVar7 + iVar16 + iVar8 + iVar17 + iVar9 + iVar18 + uVar20;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    param_2 = pbVar22;
    for (param_3 = uVar1 - uVar21; param_3 != 0; param_3 = param_3 - 1) {
LAB_1009d83e0:
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar20 = uVar20 + bVar2;
      uVar10 = uVar10 + uVar20;
    }
    *(uint *)(param_1 + 0x410) = (uVar10 % 0xfff1) * 0x10000 | uVar20 % 0xfff1;
  }
  return;
}


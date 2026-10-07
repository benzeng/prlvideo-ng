
void FUN_10044fc30(undefined1 *param_1,byte *param_2,uint param_3,int param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  undefined1 *puVar23;
  
  puVar23 = param_1;
  if (1 < param_3) {
    uVar14 = param_3 - 2;
    uVar18 = uVar14 >> 1;
    lVar1 = (ulong)uVar18 + 1;
    lVar22 = 0;
    pbVar20 = param_2;
    do {
      bVar2 = *pbVar20;
      bVar3 = pbVar20[1];
      bVar4 = pbVar20[2];
      param_1[lVar22 * 2] =
           (char)((uint)bVar4 * 0x4c + 0x200 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x95 >> 10);
      bVar5 = pbVar20[3];
      bVar6 = pbVar20[4];
      bVar7 = pbVar20[5];
      param_1[lVar22 * 2 + 4] =
           (char)((uint)bVar7 * 0x4c + 0x200 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x95 >> 10);
      bVar8 = pbVar20[param_5];
      bVar9 = pbVar20[param_5 + 1];
      bVar10 = pbVar20[param_5 + 2];
      param_1[lVar22 * 2 + (long)param_4] =
           (char)((uint)bVar10 * 0x4c + 0x200 + (uint)bVar8 * 0x1d + (uint)bVar9 * 0x95 >> 10);
      bVar11 = pbVar20[param_5 + 3];
      bVar12 = pbVar20[param_5 + 4];
      bVar13 = pbVar20[param_5 + 5];
      param_1[lVar22 * 2 + (long)(param_4 + 4)] =
           (char)((uint)bVar13 * 0x4c + 0x200 + (uint)bVar11 * 0x1d + (uint)bVar12 * 0x95 >> 10);
      uVar21 = bVar11 + 2 + (uint)bVar2 + (uint)bVar5 + (uint)bVar8 >> 2;
      uVar16 = bVar12 + 2 + (uint)bVar3 + (uint)bVar6 + (uint)bVar9 >> 2;
      uVar15 = bVar13 + 2 + (uint)bVar4 + (uint)bVar7 + (uint)bVar10 >> 2;
      iVar19 = uVar16 * -0x54 + uVar21 * 0x7e;
      iVar17 = uVar15 * -0x2b;
      param_1[lVar22 + 1] =
           (char)(((uint)(iVar17 + 0x1ff + iVar19 >> 0x1f) >> 0x16) + 0x1ff + iVar19 + iVar17 >> 10)
           + ' ';
      iVar17 = uVar15 * 0x7e;
      iVar19 = uVar16 * -0x6a + uVar21 * -0x15;
      param_1[lVar22 + 2] =
           (char)(((uint)(iVar17 + 0x1ff + iVar19 >> 0x1f) >> 0x16) + 0x1ff + iVar19 + iVar17 >> 10)
           + ' ';
      pbVar20 = pbVar20 + 6;
      param_3 = param_3 - 2;
      lVar22 = lVar22 + 4;
    } while (1 < param_3);
    puVar23 = param_1 + lVar1 * 4;
    param_3 = uVar14 + uVar18 * -2;
    param_2 = param_2 + lVar1 * 6;
    param_1 = param_1 + (ulong)uVar18 * 8 + 8;
  }
  if (param_3 != 0) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    bVar4 = param_2[2];
    *param_1 = (char)((uint)bVar4 * 0x4c + 0x200 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x95 >> 10);
    bVar5 = param_2[param_5];
    bVar6 = param_2[(long)param_5 + 1];
    bVar7 = param_2[(long)param_5 + 2];
    param_1[param_4] =
         (char)((uint)bVar7 * 0x4c + 0x200 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x95 >> 10);
    uVar18 = bVar2 + 1 + (uint)bVar5 >> 1;
    uVar15 = bVar3 + 1 + (uint)bVar6 >> 1;
    uVar14 = bVar4 + 1 + (uint)bVar7 >> 1;
    iVar19 = uVar15 * -0x54 + uVar18 * 0x7e;
    iVar17 = uVar14 * -0x2b;
    puVar23[1] = (char)(((uint)(iVar17 + 0x1ff + iVar19 >> 0x1f) >> 0x16) + 0x1ff + iVar19 + iVar17
                       >> 10) + ' ';
    iVar17 = uVar14 * 0x7e;
    iVar19 = uVar15 * -0x6a + uVar18 * -0x15;
    puVar23[2] = (char)(((uint)(iVar17 + 0x1ff + iVar19 >> 0x1f) >> 0x16) + 0x1ff + iVar19 + iVar17
                       >> 10) + ' ';
  }
  return;
}


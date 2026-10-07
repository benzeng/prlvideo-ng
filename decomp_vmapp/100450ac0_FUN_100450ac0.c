
void FUN_100450ac0(undefined1 *param_1,byte *param_2,uint param_3,int param_4,int param_5)

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
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  long lVar22;
  undefined1 *puVar23;
  
  puVar23 = param_1;
  if (1 < param_3) {
    uVar14 = param_3 - 2;
    uVar19 = uVar14 >> 1;
    lVar1 = (ulong)uVar19 + 1;
    lVar22 = 0;
    pbVar21 = param_2;
    do {
      bVar2 = *pbVar21;
      bVar3 = pbVar21[1];
      bVar4 = pbVar21[2];
      param_1[lVar22 * 2] =
           (char)(((uint)bVar2 + (uint)bVar2 * 8) * 3 + (uint)bVar3 * 0x8d + 0x800 +
                  ((uint)bVar4 + (uint)bVar4 * 8) * 8 >> 0xc);
      bVar5 = pbVar21[3];
      bVar6 = pbVar21[4];
      bVar7 = pbVar21[5];
      param_1[lVar22 * 2 + 4] =
           (char)(((uint)bVar5 + (uint)bVar5 * 8) * 3 + (uint)bVar6 * 0x8d + 0x800 +
                  ((uint)bVar7 + (uint)bVar7 * 8) * 8 >> 0xc);
      bVar8 = pbVar21[param_5];
      bVar9 = pbVar21[param_5 + 1];
      bVar10 = pbVar21[param_5 + 2];
      param_1[lVar22 * 2 + (long)param_4] =
           (char)(((uint)bVar8 + (uint)bVar8 * 8) * 3 + (uint)bVar9 * 0x8d + 0x800 +
                  ((uint)bVar10 + (uint)bVar10 * 8) * 8 >> 0xc);
      bVar11 = pbVar21[param_5 + 3];
      bVar12 = pbVar21[param_5 + 4];
      bVar13 = pbVar21[param_5 + 5];
      param_1[lVar22 * 2 + (long)(param_4 + 4)] =
           (char)(((uint)bVar11 + (uint)bVar11 * 8) * 3 + (uint)bVar12 * 0x8d + 0x800 +
                  ((uint)bVar13 + (uint)bVar13 * 8) * 8 >> 0xc);
      uVar15 = bVar11 + 2 + (uint)bVar2 + (uint)bVar5 + (uint)bVar8 >> 2;
      uVar16 = bVar12 + 2 + (uint)bVar3 + (uint)bVar6 + (uint)bVar9 >> 2;
      uVar17 = bVar13 + 2 + (uint)bVar4 + (uint)bVar7 + (uint)bVar10 >> 2;
      iVar20 = uVar16 * -0x50 + uVar15 * 0x78;
      iVar18 = uVar17 * -0x29;
      param_1[lVar22 + 1] =
           (char)(((uint)(iVar18 + 0x7ff + iVar20 >> 0x1f) >> 0x14) + 0x7ff + iVar20 + iVar18 >> 0xc
                 ) + '\b';
      iVar20 = uVar17 * 0x78;
      iVar18 = uVar16 * -0x65 + uVar15 * -0x14;
      param_1[lVar22 + 2] =
           (char)(((uint)(iVar20 + 0x7ff + iVar18 >> 0x1f) >> 0x14) + 0x7ff + iVar18 + iVar20 >> 0xc
                 ) + '\b';
      pbVar21 = pbVar21 + 6;
      param_3 = param_3 - 2;
      lVar22 = lVar22 + 4;
    } while (1 < param_3);
    puVar23 = param_1 + lVar1 * 4;
    param_3 = uVar14 + uVar19 * -2;
    param_2 = param_2 + lVar1 * 6;
    param_1 = param_1 + (ulong)uVar19 * 8 + 8;
  }
  if (param_3 != 0) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    bVar4 = param_2[2];
    *param_1 = (char)(((uint)bVar2 + (uint)bVar2 * 8) * 3 + (uint)bVar3 * 0x8d + 0x800 +
                      ((uint)bVar4 + (uint)bVar4 * 8) * 8 >> 0xc);
    bVar5 = param_2[param_5];
    bVar6 = param_2[(long)param_5 + 1];
    bVar7 = param_2[(long)param_5 + 2];
    param_1[param_4] =
         (char)(((uint)bVar5 + (uint)bVar5 * 8) * 3 + (uint)bVar6 * 0x8d + 0x800 +
                ((uint)bVar7 + (uint)bVar7 * 8) * 8 >> 0xc);
    uVar15 = bVar2 + 1 + (uint)bVar5 >> 1;
    uVar19 = bVar3 + 1 + (uint)bVar6 >> 1;
    uVar14 = bVar4 + 1 + (uint)bVar7 >> 1;
    iVar20 = uVar19 * -0x50 + uVar15 * 0x78;
    iVar18 = uVar14 * -0x29;
    puVar23[1] = (char)(((uint)(iVar18 + 0x7ff + iVar20 >> 0x1f) >> 0x14) + 0x7ff + iVar20 + iVar18
                       >> 0xc) + '\b';
    iVar18 = uVar14 * 0x78;
    iVar20 = uVar19 * -0x65 + uVar15 * -0x14;
    puVar23[2] = (char)(((uint)(iVar18 + 0x7ff + iVar20 >> 0x1f) >> 0x14) + 0x7ff + iVar20 + iVar18
                       >> 0xc) + '\b';
  }
  return;
}


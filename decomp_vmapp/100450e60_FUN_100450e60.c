
void FUN_100450e60(undefined1 *param_1,byte *param_2,uint param_3,int param_4,int param_5)

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
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  
  puVar22 = param_1;
  if (1 < param_3) {
    uVar14 = param_3 - 2;
    uVar18 = uVar14 >> 1;
    lVar1 = (ulong)uVar18 + 1;
    lVar16 = 0;
    do {
      bVar2 = param_2[lVar16 * 2];
      bVar3 = param_2[lVar16 * 2 + 1];
      bVar4 = param_2[lVar16 * 2 + 2];
      param_1[lVar16 * 2] =
           (char)(((uint)bVar2 + (uint)bVar2 * 8) * 3 + (uint)bVar3 * 0x8d + 0x800 +
                  ((uint)bVar4 + (uint)bVar4 * 8) * 8 >> 0xc);
      bVar5 = param_2[lVar16 * 2 + 4];
      bVar6 = param_2[lVar16 * 2 + 5];
      bVar7 = param_2[lVar16 * 2 + 6];
      param_1[lVar16 * 2 + 4] =
           (char)(((uint)bVar5 + (uint)bVar5 * 8) * 3 + (uint)bVar6 * 0x8d + 0x800 +
                  ((uint)bVar7 + (uint)bVar7 * 8) * 8 >> 0xc);
      bVar8 = param_2[lVar16 * 2 + (long)param_5];
      bVar9 = param_2[lVar16 * 2 + (long)(param_5 + 1)];
      bVar10 = param_2[lVar16 * 2 + (long)(param_5 + 2)];
      param_1[lVar16 * 2 + (long)param_4] =
           (char)(((uint)bVar8 + (uint)bVar8 * 8) * 3 + (uint)bVar9 * 0x8d + 0x800 +
                  ((uint)bVar10 + (uint)bVar10 * 8) * 8 >> 0xc);
      bVar11 = param_2[lVar16 * 2 + (long)(param_5 + 4)];
      bVar12 = param_2[lVar16 * 2 + (long)(param_5 + 5)];
      bVar13 = param_2[lVar16 * 2 + (long)(param_5 + 6)];
      param_1[lVar16 * 2 + (long)(param_4 + 4)] =
           (char)(((uint)bVar11 + (uint)bVar11 * 8) * 3 + (uint)bVar12 * 0x8d + 0x800 +
                  ((uint)bVar13 + (uint)bVar13 * 8) * 8 >> 0xc);
      uVar21 = bVar11 + 2 + (uint)bVar2 + (uint)bVar5 + (uint)bVar8 >> 2;
      uVar20 = bVar12 + 2 + (uint)bVar3 + (uint)bVar6 + (uint)bVar9 >> 2;
      uVar17 = bVar13 + 2 + (uint)bVar4 + (uint)bVar7 + (uint)bVar10 >> 2;
      iVar19 = uVar20 * -0x50 + uVar21 * 0x78;
      iVar15 = uVar17 * -0x29;
      param_1[lVar16 + 1] =
           (char)(((uint)(iVar15 + 0x7ff + iVar19 >> 0x1f) >> 0x14) + 0x7ff + iVar19 + iVar15 >> 0xc
                 ) + '\b';
      iVar19 = uVar17 * 0x78;
      iVar15 = uVar20 * -0x65 + uVar21 * -0x14;
      param_1[lVar16 + 2] =
           (char)(((uint)(iVar19 + 0x7ff + iVar15 >> 0x1f) >> 0x14) + 0x7ff + iVar15 + iVar19 >> 0xc
                 ) + '\b';
      param_3 = param_3 - 2;
      lVar16 = lVar16 + 4;
    } while (1 < param_3);
    puVar22 = param_1 + lVar1 * 4;
    param_3 = uVar14 + uVar18 * -2;
    param_2 = param_2 + lVar1 * 8;
    param_1 = param_1 + (ulong)uVar18 * 8 + 8;
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
    uVar17 = bVar2 + 1 + (uint)bVar5 >> 1;
    uVar18 = bVar3 + 1 + (uint)bVar6 >> 1;
    uVar14 = bVar4 + 1 + (uint)bVar7 >> 1;
    iVar19 = uVar18 * -0x50 + uVar17 * 0x78;
    iVar15 = uVar14 * -0x29;
    puVar22[1] = (char)(((uint)(iVar15 + 0x7ff + iVar19 >> 0x1f) >> 0x14) + 0x7ff + iVar19 + iVar15
                       >> 0xc) + '\b';
    iVar15 = uVar14 * 0x78;
    iVar19 = uVar18 * -0x65 + uVar17 * -0x14;
    puVar22[2] = (char)(((uint)(iVar15 + 0x7ff + iVar19 >> 0x1f) >> 0x14) + 0x7ff + iVar19 + iVar15
                       >> 0xc) + '\b';
  }
  return;
}


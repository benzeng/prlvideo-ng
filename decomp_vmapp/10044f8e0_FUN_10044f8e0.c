
void FUN_10044f8e0(undefined1 *param_1,byte *param_2,uint param_3,int param_4,int param_5)

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
  long lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
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
           (char)((uint)bVar4 * 0x4d + 0x80 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x96 >> 8);
      bVar5 = param_2[lVar16 * 2 + 4];
      bVar6 = param_2[lVar16 * 2 + 5];
      bVar7 = param_2[lVar16 * 2 + 6];
      param_1[lVar16 * 2 + 4] =
           (char)((uint)bVar7 * 0x4d + 0x80 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x96 >> 8);
      bVar8 = param_2[lVar16 * 2 + (long)param_5];
      bVar9 = param_2[lVar16 * 2 + (long)(param_5 + 1)];
      bVar10 = param_2[lVar16 * 2 + (long)(param_5 + 2)];
      param_1[lVar16 * 2 + (long)param_4] =
           (char)((uint)bVar10 * 0x4d + 0x80 + (uint)bVar8 * 0x1d + (uint)bVar9 * 0x96 >> 8);
      bVar11 = param_2[lVar16 * 2 + (long)(param_5 + 4)];
      bVar12 = param_2[lVar16 * 2 + (long)(param_5 + 5)];
      bVar13 = param_2[lVar16 * 2 + (long)(param_5 + 6)];
      param_1[lVar16 * 2 + (long)(param_4 + 4)] =
           (char)((uint)bVar13 * 0x4d + 0x80 + (uint)bVar11 * 0x1d + (uint)bVar12 * 0x96 >> 8);
      uVar21 = bVar11 + 2 + (uint)bVar2 + (uint)bVar5 + (uint)bVar8;
      uVar15 = bVar12 + 2 + (uint)bVar3 + (uint)bVar6 + (uint)bVar9 >> 2;
      uVar19 = bVar13 + 2 + (uint)bVar4 + (uint)bVar7 + (uint)bVar10 >> 2;
      iVar17 = uVar19 * -0x2b + uVar15 * -0x55 + (uVar21 * 0x20 | 0x7f);
      param_1[lVar16 + 1] = (char)(((uint)(iVar17 >> 0x1f) >> 0x18) + iVar17 >> 8) + -0x80;
      iVar20 = uVar19 * 0x80;
      iVar17 = uVar15 * -0x6b + (uVar21 >> 2) * -0x15;
      param_1[lVar16 + 2] =
           (char)(((uint)(iVar20 + 0x7f + iVar17 >> 0x1f) >> 0x18) + 0x7f + iVar17 + iVar20 >> 8) +
           -0x80;
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
    *param_1 = (char)((uint)bVar4 * 0x4d + 0x80 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x96 >> 8);
    bVar5 = param_2[param_5];
    bVar6 = param_2[(long)param_5 + 1];
    bVar7 = param_2[(long)param_5 + 2];
    param_1[param_4] =
         (char)((uint)bVar7 * 0x4d + 0x80 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x96 >> 8);
    uVar18 = bVar2 + 1 + (uint)bVar5;
    uVar21 = bVar3 + 1 + (uint)bVar6 >> 1;
    uVar14 = bVar4 + 1 + (uint)bVar7 >> 1;
    iVar17 = uVar14 * -0x2b + uVar21 * -0x55 + (uVar18 * 0x40 | 0x7f);
    puVar22[1] = (char)(((uint)(iVar17 >> 0x1f) >> 0x18) + iVar17 >> 8) + -0x80;
    iVar17 = uVar14 * 0x80;
    iVar20 = uVar21 * -0x6b + (uVar18 >> 1) * -0x15;
    puVar22[2] = (char)(((uint)(iVar17 + 0x7f + iVar20 >> 0x1f) >> 0x18) + 0x7f + iVar20 + iVar17 >>
                       8) + -0x80;
  }
  return;
}


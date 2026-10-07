
void FUN_100450320(undefined1 *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar12;
  
  puVar16 = param_1;
  if (1 < param_3) {
    uVar9 = param_3 - 2;
    uVar10 = uVar9 >> 1;
    uVar12 = (ulong)uVar10;
    lVar18 = 0;
    do {
      uVar1 = *(ushort *)((long)param_2 + lVar18);
      uVar8 = uVar1 >> 2 & 0xf8;
      uVar5 = uVar1 >> 7 & 0xf8;
      param_1[lVar18 * 2] =
           (char)(uVar8 * 0x8d + uVar5 * 0x48 + 0x800 + (uVar1 & 0x1f) * 0xd8 >> 0xc);
      uVar2 = *(ushort *)((long)param_2 + lVar18 + 2);
      uVar19 = uVar2 >> 2 & 0xf8;
      uVar6 = uVar2 >> 7 & 0xf8;
      param_1[lVar18 * 2 + 4] =
           (char)(uVar19 * 0x8d + 0x800 + (uVar2 & 0x1f) * 0xd8 + uVar6 * 0x48 >> 0xc);
      uVar3 = *(ushort *)((long)param_2 + lVar18 + (long)(param_5 / 2) * 2);
      uVar13 = uVar3 >> 2 & 0xf8;
      uVar15 = uVar3 >> 7 & 0xf8;
      param_1[lVar18 * 2 + (long)param_4] =
           (char)(uVar13 * 0x8d + 0x800 + (uVar3 & 0x1f) * 0xd8 + uVar15 * 0x48 >> 0xc);
      uVar4 = *(ushort *)((long)param_2 + lVar18 + (long)(param_5 / 2 + 1) * 2);
      uVar17 = uVar4 >> 2 & 0xf8;
      uVar7 = uVar4 >> 7 & 0xf8;
      param_1[lVar18 * 2 + (long)(param_4 + 4)] =
           (char)(uVar17 * 0x8d + 0x800 + (uVar4 & 0x1f) * 0xd8 + uVar7 * 0x48 >> 0xc);
      uVar20 = (uVar4 & 0x1f) * 8 + (uVar3 & 0x1f) * 8 + (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >>
               2;
      uVar8 = uVar8 + 2 + uVar19 + uVar13 + uVar17 >> 2;
      uVar5 = uVar7 + uVar15 + uVar6 + uVar5 >> 2;
      iVar11 = uVar5 * -0x29 + uVar20 * 0x78;
      iVar14 = uVar8 * -0x50;
      param_1[lVar18 + 1] =
           (char)(((uint)(iVar14 + 0x7ff + iVar11 >> 0x1f) >> 0x14) + 0x7ff + iVar11 + iVar14 >> 0xc
                 ) + '\b';
      iVar14 = uVar20 * -0x14 + uVar5 * 0x78;
      iVar11 = uVar8 * -0x65;
      param_1[lVar18 + 2] =
           (char)(((uint)(iVar11 + 0x7ff + iVar14 >> 0x1f) >> 0x14) + 0x7ff + iVar14 + iVar11 >> 0xc
                 ) + '\b';
      param_3 = param_3 - 2;
      lVar18 = lVar18 + 4;
    } while (1 < param_3);
    puVar16 = param_1 + (uVar12 + 1) * 4;
    param_1 = param_1 + (uVar12 * 2 + 2) * 4;
    param_2 = param_2 + uVar12 * 2 + 2;
    param_3 = uVar9 + uVar10 * -2;
  }
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar6 = uVar1 >> 2 & 0xf8;
    uVar8 = uVar1 >> 7 & 0xf8;
    *param_1 = (char)(uVar6 * 0x8d + uVar8 * 0x48 + 0x800 + (uVar1 & 0x1f) * 0xd8 >> 0xc);
    uVar2 = param_2[param_5 / 2];
    uVar10 = uVar2 >> 2 & 0xf8;
    uVar5 = uVar2 >> 7 & 0xf8;
    param_1[param_4] = (char)(uVar10 * 0x8d + 0x800 + (uVar2 & 0x1f) * 0xd8 + uVar5 * 0x48 >> 0xc);
    uVar9 = (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >> 1;
    uVar10 = uVar10 + 1 + uVar6 >> 1;
    uVar5 = uVar5 + uVar8 >> 1;
    iVar14 = uVar5 * -0x29 + uVar9 * 0x78;
    iVar11 = uVar10 * -0x50;
    puVar16[1] = (char)(((uint)(iVar11 + 0x7ff + iVar14 >> 0x1f) >> 0x14) + 0x7ff + iVar14 + iVar11
                       >> 0xc) + '\b';
    iVar11 = uVar9 * -0x14 + uVar5 * 0x78;
    iVar14 = uVar10 * -0x65;
    puVar16[2] = (char)(((uint)(iVar14 + 0x7ff + iVar11 >> 0x1f) >> 0x14) + 0x7ff + iVar11 + iVar14
                       >> 0xc) + '\b';
  }
  return;
}


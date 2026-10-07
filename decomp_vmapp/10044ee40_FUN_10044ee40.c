
void FUN_10044ee40(undefined1 *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar11;
  
  puVar15 = param_1;
  if (1 < param_3) {
    uVar10 = param_3 - 2;
    uVar8 = uVar10 >> 1;
    uVar11 = (ulong)uVar8;
    lVar16 = 0;
    do {
      uVar1 = *(ushort *)((long)param_2 + lVar16);
      uVar17 = uVar1 >> 2 & 0xf8;
      uVar5 = uVar1 >> 7 & 0xf8;
      param_1[lVar16 * 2] =
           (char)((uVar1 & 0x1f) * 0xe8 + 0x200 + uVar17 * 0x95 + uVar5 * 0x4c >> 10);
      uVar2 = *(ushort *)((long)param_2 + lVar16 + 2);
      uVar19 = uVar2 >> 2 & 0xf8;
      uVar6 = uVar2 >> 7 & 0xf8;
      param_1[lVar16 * 2 + 4] =
           (char)(uVar19 * 0x95 + 0x200 + (uVar2 & 0x1f) * 0xe8 + uVar6 * 0x4c >> 10);
      uVar3 = *(ushort *)((long)param_2 + lVar16 + (long)(param_5 / 2) * 2);
      uVar12 = uVar3 >> 2 & 0xf8;
      uVar14 = uVar3 >> 7 & 0xf8;
      param_1[lVar16 * 2 + (long)param_4] =
           (char)(uVar12 * 0x95 + 0x200 + (uVar3 & 0x1f) * 0xe8 + uVar14 * 0x4c >> 10);
      uVar4 = *(ushort *)((long)param_2 + lVar16 + (long)(param_5 / 2 + 1) * 2);
      uVar18 = uVar4 >> 2 & 0xf8;
      uVar7 = uVar4 >> 7 & 0xf8;
      param_1[lVar16 * 2 + (long)(param_4 + 4)] =
           (char)(uVar18 * 0x95 + 0x200 + (uVar4 & 0x1f) * 0xe8 + uVar7 * 0x4c >> 10);
      uVar20 = (uVar4 & 0x1f) * 8 + (uVar3 & 0x1f) * 8 + (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >>
               2;
      uVar12 = uVar17 + 2 + uVar19 + uVar12 + uVar18 >> 2;
      uVar5 = uVar7 + uVar14 + uVar6 + uVar5 >> 2;
      iVar9 = uVar5 * -0x2b + uVar20 * 0x7e;
      iVar13 = uVar12 * -0x54;
      param_1[lVar16 + 1] =
           (char)(((uint)(iVar13 + 0x1ff + iVar9 >> 0x1f) >> 0x16) + 0x1ff + iVar9 + iVar13 >> 10) +
           ' ';
      iVar13 = uVar20 * -0x15 + uVar5 * 0x7e;
      iVar9 = uVar12 * -0x6a;
      param_1[lVar16 + 2] =
           (char)(((uint)(iVar9 + 0x1ff + iVar13 >> 0x1f) >> 0x16) + 0x1ff + iVar13 + iVar9 >> 10) +
           ' ';
      param_3 = param_3 - 2;
      lVar16 = lVar16 + 4;
    } while (1 < param_3);
    puVar15 = param_1 + (uVar11 + 1) * 4;
    param_1 = param_1 + (uVar11 * 2 + 2) * 4;
    param_2 = param_2 + uVar11 * 2 + 2;
    param_3 = uVar10 + uVar8 * -2;
  }
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar12 = uVar1 >> 2 & 0xf8;
    uVar6 = uVar1 >> 7 & 0xf8;
    *param_1 = (char)((uVar1 & 0x1f) * 0xe8 + 0x200 + uVar12 * 0x95 + uVar6 * 0x4c >> 10);
    uVar2 = param_2[param_5 / 2];
    uVar10 = uVar2 >> 2 & 0xf8;
    uVar5 = uVar2 >> 7 & 0xf8;
    param_1[param_4] = (char)(uVar10 * 0x95 + 0x200 + (uVar2 & 0x1f) * 0xe8 + uVar5 * 0x4c >> 10);
    uVar8 = (uVar2 & 0x1f) * 8 + (uVar1 & 0x1f) * 8 >> 1;
    uVar10 = uVar10 + 1 + uVar12 >> 1;
    uVar5 = uVar5 + uVar6 >> 1;
    iVar13 = uVar5 * -0x2b + uVar8 * 0x7e;
    iVar9 = uVar10 * -0x54;
    puVar15[1] = (char)(((uint)(iVar9 + 0x1ff + iVar13 >> 0x1f) >> 0x16) + 0x1ff + iVar13 + iVar9 >>
                       10) + ' ';
    iVar13 = uVar8 * -0x15 + uVar5 * 0x7e;
    iVar9 = uVar10 * -0x6a;
    puVar15[2] = (char)(((uint)(iVar9 + 0x1ff + iVar13 >> 0x1f) >> 0x16) + 0x1ff + iVar13 + iVar9 >>
                       10) + ' ';
  }
  return;
}



void FUN_1004537d0(ushort *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  byte *pbVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar7;
  
  pbVar11 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar4 = uVar1 >> 1;
    uVar7 = (ulong)uVar4;
    lVar15 = 0;
    do {
      iVar5 = param_2[lVar15 + 1] - 8;
      iVar16 = (uint)param_2[lVar15 * 2] * 0x1100 + 0x80;
      iVar12 = iVar5 * 0x1e20 + 0x80 + (uint)param_2[lVar15 * 2] * 0x1100;
      uVar8 = 0;
      if ((-0x100 < iVar12) &&
         (uVar8 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        uVar8 = 0xff;
      }
      iVar12 = (param_2[lVar15 + 2] - 8) * -0xc24;
      iVar14 = iVar16 + iVar5 * -0x5da + iVar12;
      uVar9 = 0;
      uVar6 = 0;
      if ((-0x100 < iVar14) &&
         (uVar6 = (int)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14) >> 8, 0xffff < iVar14)) {
        uVar6 = 0xff;
      }
      iVar14 = (param_2[lVar15 + 2] - 8) * 0x17d6;
      iVar16 = iVar16 + iVar14;
      if ((-0x100 < iVar16) &&
         (uVar9 = (int)(((uint)(iVar16 >> 0x1f) >> 0x18) + iVar16) >> 8, 0xffff < iVar16)) {
        uVar9 = 0xff;
      }
      *(ushort *)((long)param_1 + lVar15) =
           (ushort)((uVar9 & 0xf8) << 8) | (ushort)((uVar6 & 0xfc) << 3) | (ushort)(uVar8 >> 3);
      iVar16 = (uint)param_2[lVar15 * 2 + 4] * 0x1100 + 0x80;
      iVar2 = (uint)param_2[lVar15 * 2 + 4] * 0x1100 + 0x80 + iVar5 * 0x1e20;
      uVar8 = 0;
      uVar6 = 0;
      if ((-0x100 < iVar2) &&
         (uVar6 = (int)(((uint)(iVar2 >> 0x1f) >> 0x18) + iVar2) >> 8, 0xffff < iVar2)) {
        uVar6 = 0xff;
      }
      iVar12 = iVar16 + iVar5 * -0x5da + iVar12;
      if ((-0x100 < iVar12) &&
         (uVar8 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        uVar8 = 0xff;
      }
      iVar16 = iVar16 + iVar14;
      uVar9 = 0;
      if ((-0x100 < iVar16) &&
         (uVar9 = (int)(((uint)(iVar16 >> 0x1f) >> 0x18) + iVar16) >> 8, 0xffff < iVar16)) {
        uVar9 = 0xff;
      }
      *(ushort *)((long)param_1 + lVar15 + 2) =
           (ushort)((uVar9 & 0xf8) << 8) | (ushort)((uVar8 & 0xfc) << 3) | (ushort)(uVar6 >> 3);
      param_3 = param_3 - 2;
      lVar15 = lVar15 + 4;
    } while (1 < param_3);
    param_1 = param_1 + uVar7 * 2 + 2;
    pbVar11 = param_2 + (uVar7 * 2 + 2) * 4;
    param_3 = uVar1 + uVar4 * -2;
    param_2 = param_2 + (uVar7 + 1) * 4;
  }
  if (param_3 != 0) {
    iVar16 = (uint)*pbVar11 * 0x1100 + 0x80;
    iVar12 = (param_2[1] - 8) * 0x1e20 + 0x80 + (uint)*pbVar11 * 0x1100;
    uVar13 = 0;
    if (-0x100 < iVar12) {
      uVar13 = 0x1f;
      if (iVar12 < 0x10000) {
        uVar13 = (ushort)((uint)((int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8) >> 3);
      }
    }
    iVar12 = (param_2[2] - 8) * -0xc24 + (param_2[1] - 8) * -0x5da + iVar16;
    uVar3 = 0;
    if (-0x100 < iVar12) {
      uVar3 = 0x7e0;
      if (iVar12 < 0x10000) {
        uVar3 = (ushort)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 5) & 0x7e0;
      }
    }
    iVar16 = (param_2[2] - 8) * 0x17d6 + iVar16;
    uVar10 = 0;
    if (-0x100 < iVar16) {
      uVar10 = 0xf800;
      if (iVar16 < 0x10000) {
        uVar10 = (ushort)(byte)(iVar16 >> 0x1f) + (short)iVar16 & 0xf800;
      }
    }
    *param_1 = uVar3 | uVar13 | uVar10;
  }
  return;
}


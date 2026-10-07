
void FUN_100452250(ushort *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar5;
  
  pbVar10 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar3 = uVar1 >> 1;
    uVar5 = (ulong)uVar3;
    lVar13 = 0;
    do {
      iVar8 = param_2[lVar13 + 1] - 0x20;
      iVar4 = iVar8 * 0x72c + 0x80 + (uint)param_2[lVar13 * 2] * 0x40c;
      iVar14 = (uint)param_2[lVar13 * 2] * 0x40c + 0x80;
      uVar7 = 0;
      if ((-0x100 < iVar4) &&
         (uVar7 = (int)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4) >> 8, 0xffff < iVar4)) {
        uVar7 = 0xff;
      }
      iVar12 = (param_2[lVar13 + 2] - 0x20) * -0x2e4;
      iVar4 = iVar14 + iVar8 * -0x165 + iVar12;
      uVar9 = 0;
      uVar16 = 0;
      if ((-0x100 < iVar4) &&
         (uVar16 = (int)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4) >> 8, 0xffff < iVar4)) {
        uVar16 = 0xff;
      }
      iVar4 = (param_2[lVar13 + 2] - 0x20) * 0x5ad;
      iVar14 = iVar14 + iVar4;
      if ((-0x100 < iVar14) &&
         (uVar9 = (int)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14) >> 8, 0xffff < iVar14)) {
        uVar9 = 0xff;
      }
      *(ushort *)((long)param_1 + lVar13) =
           (ushort)((uVar9 & 0xf8) << 7) | (ushort)((uVar16 & 0x1f8) << 2) | (ushort)(uVar7 >> 3);
      iVar14 = (uint)param_2[lVar13 * 2 + 4] * 0x40c + 0x80 + iVar8 * 0x72c;
      iVar15 = (uint)param_2[lVar13 * 2 + 4] * 0x40c + 0x80;
      uVar7 = 0;
      uVar9 = 0;
      if ((-0x100 < iVar14) &&
         (uVar9 = (int)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14) >> 8, 0xffff < iVar14)) {
        uVar9 = 0xff;
      }
      iVar12 = iVar15 + iVar8 * -0x165 + iVar12;
      if ((-0x100 < iVar12) &&
         (uVar7 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        uVar7 = 0xff;
      }
      iVar15 = iVar15 + iVar4;
      uVar16 = 0;
      if ((-0x100 < iVar15) &&
         (uVar16 = (int)(((uint)(iVar15 >> 0x1f) >> 0x18) + iVar15) >> 8, 0xffff < iVar15)) {
        uVar16 = 0xff;
      }
      *(ushort *)((long)param_1 + lVar13 + 2) =
           (ushort)((uVar16 & 0xf8) << 7) | (ushort)((uVar7 & 0x1f8) << 2) | (ushort)(uVar9 >> 3);
      param_3 = param_3 - 2;
      lVar13 = lVar13 + 4;
    } while (1 < param_3);
    param_1 = param_1 + uVar5 * 2 + 2;
    pbVar10 = param_2 + (uVar5 * 2 + 2) * 4;
    param_3 = uVar1 + uVar3 * -2;
    param_2 = param_2 + (uVar5 + 1) * 4;
  }
  if (param_3 != 0) {
    iVar4 = (param_2[1] - 0x20) * 0x72c + 0x80 + (uint)*pbVar10 * 0x40c;
    iVar8 = (uint)*pbVar10 * 0x40c + 0x80;
    uVar11 = 0;
    if (-0x100 < iVar4) {
      uVar11 = 0x1f;
      if (iVar4 < 0x10000) {
        uVar11 = (ushort)((uint)((int)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4) >> 8) >> 3);
      }
    }
    iVar4 = (param_2[2] - 0x20) * -0x2e4 + (param_2[1] - 0x20) * -0x165 + iVar8;
    uVar2 = 0;
    if (-0x100 < iVar4) {
      uVar2 = 0x3e0;
      if (iVar4 < 0x10000) {
        uVar2 = (ushort)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4 >> 6) & 0x7e0;
      }
    }
    iVar8 = (param_2[2] - 0x20) * 0x5ad + iVar8;
    uVar6 = 0;
    if (-0x100 < iVar8) {
      uVar6 = 0x7c00;
      if (iVar8 < 0x10000) {
        uVar6 = (ushort)(((uint)(iVar8 >> 0x1f) >> 0x18) + iVar8 >> 1) & 0x7c00;
      }
    }
    *param_1 = uVar2 | uVar11 | uVar6;
  }
  return;
}


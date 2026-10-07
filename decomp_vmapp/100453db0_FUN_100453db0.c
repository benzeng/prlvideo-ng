
void FUN_100453db0(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar2;
  
  pbVar6 = param_2;
  if (1 < param_3) {
    uVar9 = param_3 - 2;
    uVar1 = uVar9 >> 1;
    uVar2 = (ulong)uVar1;
    lVar10 = 0;
    do {
      iVar4 = param_2[lVar10 + 1] - 8;
      iVar12 = (uint)param_2[lVar10 * 2] * 0x1100 + 0x80;
      iVar8 = iVar4 * 0x1e20 + 0x80 + (uint)param_2[lVar10 * 2] * 0x1100;
      uVar7 = 0;
      if ((-0x100 < iVar8) &&
         (uVar7 = (int)(((uint)(iVar8 >> 0x1f) >> 0x18) + iVar8) >> 8, 0xffff < iVar8)) {
        uVar7 = 0xff;
      }
      iVar8 = (param_2[lVar10 + 2] - 8) * -0xc24;
      iVar3 = iVar12 + iVar4 * -0x5da + iVar8;
      iVar5 = 0;
      iVar11 = 0;
      if ((-0x100 < iVar3) &&
         (iVar11 = (int)(((uint)(iVar3 >> 0x1f) >> 0x18) + iVar3) >> 8, 0xffff < iVar3)) {
        iVar11 = 0xff;
      }
      iVar3 = (param_2[lVar10 + 2] - 8) * 0x17d6;
      iVar12 = iVar12 + iVar3;
      if ((-0x100 < iVar12) &&
         (iVar5 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        iVar5 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2) = uVar7 | iVar11 << 8 | iVar5 << 0x10 | 0xff000000;
      iVar12 = (uint)param_2[lVar10 * 2 + 4] * 0x1100 + 0x80;
      iVar5 = (uint)param_2[lVar10 * 2 + 4] * 0x1100 + 0x80 + iVar4 * 0x1e20;
      iVar11 = 0;
      uVar7 = 0;
      if ((-0x100 < iVar5) &&
         (uVar7 = (int)(((uint)(iVar5 >> 0x1f) >> 0x18) + iVar5) >> 8, 0xffff < iVar5)) {
        uVar7 = 0xff;
      }
      iVar8 = iVar12 + iVar4 * -0x5da + iVar8;
      if ((-0x100 < iVar8) &&
         (iVar11 = (int)(((uint)(iVar8 >> 0x1f) >> 0x18) + iVar8) >> 8, 0xffff < iVar8)) {
        iVar11 = 0xff;
      }
      iVar12 = iVar12 + iVar3;
      iVar8 = 0;
      if ((-0x100 < iVar12) &&
         (iVar8 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        iVar8 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2 + 4) = uVar7 | iVar11 << 8 | iVar8 << 0x10 | 0xff000000;
      param_3 = param_3 - 2;
      lVar10 = lVar10 + 4;
    } while (1 < param_3);
    param_1 = param_1 + uVar2 * 2 + 2;
    pbVar6 = param_2 + (uVar2 * 2 + 2) * 4;
    param_3 = uVar9 + uVar1 * -2;
    param_2 = param_2 + (uVar2 + 1) * 4;
  }
  if (param_3 != 0) {
    iVar12 = (uint)*pbVar6 * 0x1100 + 0x80;
    iVar8 = (param_2[1] - 8) * 0x1e20 + 0x80 + (uint)*pbVar6 * 0x1100;
    uVar9 = 0xff000000;
    if (-0x100 < iVar8) {
      uVar9 = 0xff0000ff;
      if (iVar8 < 0x10000) {
        uVar9 = ((uint)(iVar8 >> 0x1f) >> 0x18) + iVar8 >> 8 | 0xff000000;
      }
    }
    iVar8 = (param_2[2] - 8) * -0xc24 + (param_2[1] - 8) * -0x5da + iVar12;
    uVar1 = 0;
    if (-0x100 < iVar8) {
      uVar1 = 0xff00;
      if (iVar8 < 0x10000) {
        uVar1 = (iVar8 / 0x100) * 0x100;
      }
    }
    iVar12 = (param_2[2] - 8) * 0x17d6 + iVar12;
    uVar7 = 0;
    if (-0x100 < iVar12) {
      uVar7 = 0xff0000;
      if (iVar12 < 0x10000) {
        uVar7 = (((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 & 0xffff00) << 8;
      }
    }
    *param_1 = uVar1 | uVar9 | uVar7;
  }
  return;
}


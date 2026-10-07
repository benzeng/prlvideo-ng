
void FUN_1004531b0(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar2;
  
  pbVar6 = param_2;
  if (1 < param_3) {
    uVar8 = param_3 - 2;
    uVar1 = uVar8 >> 1;
    uVar2 = (ulong)uVar1;
    lVar10 = 0;
    do {
      iVar4 = param_2[lVar10 + 1] - 0x20;
      iVar9 = iVar4 * 0x72c + 0x80 + (uint)param_2[lVar10 * 2] * 0x40c;
      iVar12 = (uint)param_2[lVar10 * 2] * 0x40c + 0x80;
      uVar7 = 0;
      if ((-0x100 < iVar9) &&
         (uVar7 = (int)(((uint)(iVar9 >> 0x1f) >> 0x18) + iVar9) >> 8, 0xffff < iVar9)) {
        uVar7 = 0xff;
      }
      iVar9 = (param_2[lVar10 + 2] - 0x20) * -0x2e4;
      iVar3 = iVar12 + iVar4 * -0x165 + iVar9;
      iVar5 = 0;
      iVar11 = 0;
      if ((-0x100 < iVar3) &&
         (iVar11 = (int)(((uint)(iVar3 >> 0x1f) >> 0x18) + iVar3) >> 8, 0xffff < iVar3)) {
        iVar11 = 0xff;
      }
      iVar3 = (param_2[lVar10 + 2] - 0x20) * 0x5ad;
      iVar12 = iVar12 + iVar3;
      if ((-0x100 < iVar12) &&
         (iVar5 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        iVar5 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2) = uVar7 | iVar11 << 8 | iVar5 << 0x10 | 0xff000000;
      iVar12 = (uint)param_2[lVar10 * 2 + 4] * 0x40c + 0x80 + iVar4 * 0x72c;
      iVar5 = (uint)param_2[lVar10 * 2 + 4] * 0x40c + 0x80;
      iVar11 = 0;
      uVar7 = 0;
      if ((-0x100 < iVar12) &&
         (uVar7 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        uVar7 = 0xff;
      }
      iVar9 = iVar5 + iVar4 * -0x165 + iVar9;
      if ((-0x100 < iVar9) &&
         (iVar11 = (int)(((uint)(iVar9 >> 0x1f) >> 0x18) + iVar9) >> 8, 0xffff < iVar9)) {
        iVar11 = 0xff;
      }
      iVar5 = iVar5 + iVar3;
      iVar9 = 0;
      if ((-0x100 < iVar5) &&
         (iVar9 = (int)(((uint)(iVar5 >> 0x1f) >> 0x18) + iVar5) >> 8, 0xffff < iVar5)) {
        iVar9 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2 + 4) = uVar7 | iVar11 << 8 | iVar9 << 0x10 | 0xff000000;
      param_3 = param_3 - 2;
      lVar10 = lVar10 + 4;
    } while (1 < param_3);
    param_1 = param_1 + uVar2 * 2 + 2;
    pbVar6 = param_2 + (uVar2 * 2 + 2) * 4;
    param_3 = uVar8 + uVar1 * -2;
    param_2 = param_2 + (uVar2 + 1) * 4;
  }
  if (param_3 != 0) {
    iVar9 = (param_2[1] - 0x20) * 0x72c + 0x80 + (uint)*pbVar6 * 0x40c;
    iVar4 = (uint)*pbVar6 * 0x40c + 0x80;
    uVar8 = 0xff000000;
    if (-0x100 < iVar9) {
      uVar8 = 0xff0000ff;
      if (iVar9 < 0x10000) {
        uVar8 = ((uint)(iVar9 >> 0x1f) >> 0x18) + iVar9 >> 8 | 0xff000000;
      }
    }
    iVar9 = (param_2[2] - 0x20) * -0x2e4 + (param_2[1] - 0x20) * -0x165 + iVar4;
    uVar1 = 0;
    if (-0x100 < iVar9) {
      uVar1 = 0xff00;
      if (iVar9 < 0x10000) {
        uVar1 = (iVar9 / 0x100) * 0x100;
      }
    }
    iVar4 = (param_2[2] - 0x20) * 0x5ad + iVar4;
    uVar7 = 0;
    if (-0x100 < iVar4) {
      uVar7 = 0xff0000;
      if (iVar4 < 0x10000) {
        uVar7 = (((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4 & 0xffff00) << 8;
      }
    }
    *param_1 = uVar1 | uVar8 | uVar7;
  }
  return;
}


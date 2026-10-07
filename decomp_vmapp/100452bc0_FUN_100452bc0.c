
void FUN_100452bc0(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar2;
  
  pbVar7 = param_2;
  if (1 < param_3) {
    uVar9 = param_3 - 2;
    uVar1 = uVar9 >> 1;
    uVar2 = (ulong)uVar1;
    lVar10 = 0;
    do {
      iVar5 = param_2[lVar10 + 1] - 0x80;
      iVar12 = (uint)param_2[lVar10 * 2] * 0x100 + 0x80;
      iVar3 = iVar5 * 0x1c6 + 0x80 + (uint)param_2[lVar10 * 2] * 0x100;
      uVar8 = 0;
      if ((-0x100 < iVar3) &&
         (uVar8 = (int)(((uint)(iVar3 >> 0x1f) >> 0x18) + iVar3) >> 8, 0xffff < iVar3)) {
        uVar8 = 0xff;
      }
      iVar3 = (param_2[lVar10 + 2] - 0x80) * -0xb7;
      iVar4 = iVar12 + iVar5 * -0x58 + iVar3;
      iVar6 = 0;
      iVar11 = 0;
      if ((-0x100 < iVar4) &&
         (iVar11 = (int)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4) >> 8, 0xffff < iVar4)) {
        iVar11 = 0xff;
      }
      iVar4 = (param_2[lVar10 + 2] - 0x80) * 0x167;
      iVar12 = iVar12 + iVar4;
      if ((-0x100 < iVar12) &&
         (iVar6 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        iVar6 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2) = uVar8 | iVar11 << 8 | iVar6 << 0x10 | 0xff000000;
      iVar6 = (uint)param_2[lVar10 * 2 + 4] * 0x100 + 0x80;
      iVar12 = (uint)param_2[lVar10 * 2 + 4] * 0x100 + 0x80 + iVar5 * 0x1c6;
      iVar11 = 0;
      uVar8 = 0;
      if ((-0x100 < iVar12) &&
         (uVar8 = (int)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12) >> 8, 0xffff < iVar12)) {
        uVar8 = 0xff;
      }
      iVar3 = iVar6 + iVar5 * -0x58 + iVar3;
      if ((-0x100 < iVar3) &&
         (iVar11 = (int)(((uint)(iVar3 >> 0x1f) >> 0x18) + iVar3) >> 8, 0xffff < iVar3)) {
        iVar11 = 0xff;
      }
      iVar6 = iVar6 + iVar4;
      iVar3 = 0;
      if ((-0x100 < iVar6) &&
         (iVar3 = (int)(((uint)(iVar6 >> 0x1f) >> 0x18) + iVar6) >> 8, 0xffff < iVar6)) {
        iVar3 = 0xff;
      }
      *(uint *)((long)param_1 + lVar10 * 2 + 4) = uVar8 | iVar11 << 8 | iVar3 << 0x10 | 0xff000000;
      param_3 = param_3 - 2;
      lVar10 = lVar10 + 4;
    } while (1 < param_3);
    param_1 = param_1 + uVar2 * 2 + 2;
    pbVar7 = param_2 + (uVar2 * 2 + 2) * 4;
    param_3 = uVar9 + uVar1 * -2;
    param_2 = param_2 + (uVar2 + 1) * 4;
  }
  if (param_3 != 0) {
    iVar3 = (uint)*pbVar7 * 0x100 + 0x80;
    iVar5 = (param_2[1] - 0x80) * 0x1c6 + 0x80 + (uint)*pbVar7 * 0x100;
    uVar9 = 0xff000000;
    if (-0x100 < iVar5) {
      uVar9 = 0xff0000ff;
      if (iVar5 < 0x10000) {
        uVar9 = ((uint)(iVar5 >> 0x1f) >> 0x18) + iVar5 >> 8 | 0xff000000;
      }
    }
    iVar5 = (param_2[2] - 0x80) * -0xb7 + (param_2[1] - 0x80) * -0x58 + iVar3;
    uVar1 = 0;
    if (-0x100 < iVar5) {
      uVar1 = 0xff00;
      if (iVar5 < 0x10000) {
        uVar1 = (iVar5 / 0x100) * 0x100;
      }
    }
    iVar3 = (param_2[2] - 0x80) * 0x167 + iVar3;
    uVar8 = 0;
    if (-0x100 < iVar3) {
      uVar8 = 0xff0000;
      if (iVar3 < 0x10000) {
        uVar8 = (((uint)(iVar3 >> 0x1f) >> 0x18) + iVar3 & 0xffff00) << 8;
      }
    }
    *param_1 = uVar1 | uVar9 | uVar8;
  }
  return;
}


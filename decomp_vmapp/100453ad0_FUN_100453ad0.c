
void FUN_100453ad0(undefined1 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar8;
  undefined1 uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  ulong uVar7;
  
  pbVar10 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar6 = uVar1 >> 1;
    uVar7 = (ulong)uVar6;
    lVar13 = 0;
    puVar15 = param_1;
    do {
      bVar3 = param_2[lVar13 + 2];
      iVar5 = param_2[lVar13 + 1] - 8;
      iVar14 = (uint)param_2[lVar13 * 2] * 0x1100 + 0x80;
      iVar12 = iVar5 * 0x1e20 + 0x80 + (uint)param_2[lVar13 * 2] * 0x1100;
      uVar8 = 0;
      if ((-0x100 < iVar12) &&
         (uVar8 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8), 0xffff < iVar12)) {
        uVar8 = 0xff;
      }
      *puVar15 = uVar8;
      iVar12 = (bVar3 - 8) * -0xc24;
      iVar11 = iVar14 + iVar5 * -0x5da + iVar12;
      uVar8 = 0;
      uVar9 = 0;
      if ((-0x100 < iVar11) &&
         (uVar9 = (undefined1)(((uint)(iVar11 >> 0x1f) >> 0x18) + iVar11 >> 8), 0xffff < iVar11)) {
        uVar9 = 0xff;
      }
      puVar15[1] = uVar9;
      iVar11 = (bVar3 - 8) * 0x17d6;
      iVar14 = iVar14 + iVar11;
      if ((-0x100 < iVar14) &&
         (uVar8 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar8 = 0xff;
      }
      puVar15[2] = uVar8;
      iVar14 = (uint)param_2[lVar13 * 2 + 4] * 0x1100 + 0x80;
      iVar2 = (uint)param_2[lVar13 * 2 + 4] * 0x1100 + 0x80 + iVar5 * 0x1e20;
      uVar8 = 0;
      uVar9 = 0;
      if ((-0x100 < iVar2) &&
         (uVar9 = (undefined1)(((uint)(iVar2 >> 0x1f) >> 0x18) + iVar2 >> 8), 0xffff < iVar2)) {
        uVar9 = 0xff;
      }
      puVar15[3] = uVar9;
      iVar12 = iVar14 + iVar5 * -0x5da + iVar12;
      if ((-0x100 < iVar12) &&
         (uVar8 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8), 0xffff < iVar12)) {
        uVar8 = 0xff;
      }
      puVar15[4] = uVar8;
      iVar14 = iVar14 + iVar11;
      uVar8 = 0;
      if ((-0x100 < iVar14) &&
         (uVar8 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar8 = 0xff;
      }
      puVar15[5] = uVar8;
      param_3 = param_3 - 2;
      lVar13 = lVar13 + 4;
      puVar15 = puVar15 + 6;
    } while (1 < param_3);
    pbVar10 = param_2 + (uVar7 * 2 + 2) * 4;
    param_3 = uVar1 + uVar6 * -2;
    param_1 = param_1 + uVar7 * 6 + 6;
    param_2 = param_2 + (uVar7 + 1) * 4;
  }
  if (param_3 != 0) {
    bVar3 = param_2[1];
    bVar4 = param_2[2];
    iVar14 = (uint)*pbVar10 * 0x1100 + 0x80;
    iVar12 = (bVar3 - 8) * 0x1e20 + 0x80 + (uint)*pbVar10 * 0x1100;
    if (iVar12 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar12 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8);
      }
    }
    *param_1 = uVar8;
    iVar12 = (bVar4 - 8) * -0xc24 + (bVar3 - 8) * -0x5da + iVar14;
    if (iVar12 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar12 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8);
      }
    }
    param_1[1] = uVar8;
    iVar14 = (bVar4 - 8) * 0x17d6 + iVar14;
    if (iVar14 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar14 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8);
      }
    }
    param_1[2] = uVar8;
  }
  return;
}


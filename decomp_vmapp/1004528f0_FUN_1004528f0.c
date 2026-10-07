
void FUN_1004528f0(undefined1 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  ulong uVar7;
  
  pbVar11 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar5 = uVar1 >> 1;
    uVar7 = (ulong)uVar5;
    lVar13 = 0;
    puVar15 = param_1;
    do {
      bVar2 = param_2[lVar13 + 2];
      iVar4 = param_2[lVar13 + 1] - 0x80;
      iVar14 = (uint)param_2[lVar13 * 2] * 0x100 + 0x80;
      iVar6 = iVar4 * 0x1c6 + 0x80 + (uint)param_2[lVar13 * 2] * 0x100;
      uVar8 = 0;
      if ((-0x100 < iVar6) &&
         (uVar8 = (undefined1)(((uint)(iVar6 >> 0x1f) >> 0x18) + iVar6 >> 8), 0xffff < iVar6)) {
        uVar8 = 0xff;
      }
      *puVar15 = uVar8;
      iVar6 = (bVar2 - 0x80) * -0xb7;
      iVar12 = iVar14 + iVar4 * -0x58 + iVar6;
      uVar8 = 0;
      uVar9 = 0;
      if ((-0x100 < iVar12) &&
         (uVar9 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8), 0xffff < iVar12)) {
        uVar9 = 0xff;
      }
      puVar15[1] = uVar9;
      iVar12 = (bVar2 - 0x80) * 0x167;
      iVar14 = iVar14 + iVar12;
      if ((-0x100 < iVar14) &&
         (uVar8 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar8 = 0xff;
      }
      puVar15[2] = uVar8;
      iVar10 = (uint)param_2[lVar13 * 2 + 4] * 0x100 + 0x80;
      iVar14 = (uint)param_2[lVar13 * 2 + 4] * 0x100 + 0x80 + iVar4 * 0x1c6;
      uVar8 = 0;
      uVar9 = 0;
      if ((-0x100 < iVar14) &&
         (uVar9 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar9 = 0xff;
      }
      puVar15[3] = uVar9;
      iVar6 = iVar10 + iVar4 * -0x58 + iVar6;
      if ((-0x100 < iVar6) &&
         (uVar8 = (undefined1)(((uint)(iVar6 >> 0x1f) >> 0x18) + iVar6 >> 8), 0xffff < iVar6)) {
        uVar8 = 0xff;
      }
      puVar15[4] = uVar8;
      iVar10 = iVar10 + iVar12;
      uVar8 = 0;
      if ((-0x100 < iVar10) &&
         (uVar8 = (undefined1)(((uint)(iVar10 >> 0x1f) >> 0x18) + iVar10 >> 8), 0xffff < iVar10)) {
        uVar8 = 0xff;
      }
      puVar15[5] = uVar8;
      param_3 = param_3 - 2;
      lVar13 = lVar13 + 4;
      puVar15 = puVar15 + 6;
    } while (1 < param_3);
    pbVar11 = param_2 + (uVar7 * 2 + 2) * 4;
    param_3 = uVar1 + uVar5 * -2;
    param_1 = param_1 + uVar7 * 6 + 6;
    param_2 = param_2 + (uVar7 + 1) * 4;
  }
  if (param_3 != 0) {
    bVar2 = param_2[1];
    bVar3 = param_2[2];
    iVar4 = (uint)*pbVar11 * 0x100 + 0x80;
    iVar6 = (bVar2 - 0x80) * 0x1c6 + 0x80 + (uint)*pbVar11 * 0x100;
    if (iVar6 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar6 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar6 >> 0x1f) >> 0x18) + iVar6 >> 8);
      }
    }
    *param_1 = uVar8;
    iVar6 = (bVar3 - 0x80) * -0xb7 + (bVar2 - 0x80) * -0x58 + iVar4;
    if (iVar6 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar6 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar6 >> 0x1f) >> 0x18) + iVar6 >> 8);
      }
    }
    param_1[1] = uVar8;
    iVar4 = (bVar3 - 0x80) * 0x167 + iVar4;
    if (iVar4 < -0xff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xff;
      if (iVar4 < 0x10000) {
        uVar8 = (undefined1)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4 >> 8);
      }
    }
    param_1[2] = uVar8;
  }
  return;
}


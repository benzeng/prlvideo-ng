
void FUN_100452ed0(undefined1 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  ulong uVar6;
  
  pbVar10 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar5 = uVar1 >> 1;
    uVar6 = (ulong)uVar5;
    lVar13 = 0;
    puVar15 = param_1;
    do {
      bVar2 = param_2[lVar13 + 2];
      iVar4 = param_2[lVar13 + 1] - 0x20;
      iVar12 = iVar4 * 0x72c + 0x80 + (uint)param_2[lVar13 * 2] * 0x40c;
      iVar14 = (uint)param_2[lVar13 * 2] * 0x40c + 0x80;
      uVar7 = 0;
      if ((-0x100 < iVar12) &&
         (uVar7 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8), 0xffff < iVar12)) {
        uVar7 = 0xff;
      }
      *puVar15 = uVar7;
      iVar12 = (bVar2 - 0x20) * -0x2e4;
      iVar11 = iVar14 + iVar4 * -0x165 + iVar12;
      uVar7 = 0;
      uVar8 = 0;
      if ((-0x100 < iVar11) &&
         (uVar8 = (undefined1)(((uint)(iVar11 >> 0x1f) >> 0x18) + iVar11 >> 8), 0xffff < iVar11)) {
        uVar8 = 0xff;
      }
      puVar15[1] = uVar8;
      iVar11 = (bVar2 - 0x20) * 0x5ad;
      iVar14 = iVar14 + iVar11;
      if ((-0x100 < iVar14) &&
         (uVar7 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar7 = 0xff;
      }
      puVar15[2] = uVar7;
      iVar14 = (uint)param_2[lVar13 * 2 + 4] * 0x40c + 0x80 + iVar4 * 0x72c;
      iVar9 = (uint)param_2[lVar13 * 2 + 4] * 0x40c + 0x80;
      uVar7 = 0;
      uVar8 = 0;
      if ((-0x100 < iVar14) &&
         (uVar8 = (undefined1)(((uint)(iVar14 >> 0x1f) >> 0x18) + iVar14 >> 8), 0xffff < iVar14)) {
        uVar8 = 0xff;
      }
      puVar15[3] = uVar8;
      iVar12 = iVar9 + iVar4 * -0x165 + iVar12;
      if ((-0x100 < iVar12) &&
         (uVar7 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8), 0xffff < iVar12)) {
        uVar7 = 0xff;
      }
      puVar15[4] = uVar7;
      iVar9 = iVar9 + iVar11;
      uVar7 = 0;
      if ((-0x100 < iVar9) &&
         (uVar7 = (undefined1)(((uint)(iVar9 >> 0x1f) >> 0x18) + iVar9 >> 8), 0xffff < iVar9)) {
        uVar7 = 0xff;
      }
      puVar15[5] = uVar7;
      param_3 = param_3 - 2;
      lVar13 = lVar13 + 4;
      puVar15 = puVar15 + 6;
    } while (1 < param_3);
    pbVar10 = param_2 + (uVar6 * 2 + 2) * 4;
    param_3 = uVar1 + uVar5 * -2;
    param_1 = param_1 + uVar6 * 6 + 6;
    param_2 = param_2 + (uVar6 + 1) * 4;
  }
  if (param_3 != 0) {
    bVar2 = param_2[1];
    bVar3 = param_2[2];
    iVar12 = (bVar2 - 0x20) * 0x72c + 0x80 + (uint)*pbVar10 * 0x40c;
    iVar4 = (uint)*pbVar10 * 0x40c + 0x80;
    if (iVar12 < -0xff) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xff;
      if (iVar12 < 0x10000) {
        uVar7 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8);
      }
    }
    *param_1 = uVar7;
    iVar12 = (bVar3 - 0x20) * -0x2e4 + (bVar2 - 0x20) * -0x165 + iVar4;
    if (iVar12 < -0xff) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xff;
      if (iVar12 < 0x10000) {
        uVar7 = (undefined1)(((uint)(iVar12 >> 0x1f) >> 0x18) + iVar12 >> 8);
      }
    }
    param_1[1] = uVar7;
    iVar4 = (bVar3 - 0x20) * 0x5ad + iVar4;
    if (iVar4 < -0xff) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xff;
      if (iVar4 < 0x10000) {
        uVar7 = (undefined1)(((uint)(iVar4 >> 0x1f) >> 0x18) + iVar4 >> 8);
      }
    }
    param_1[2] = uVar7;
  }
  return;
}


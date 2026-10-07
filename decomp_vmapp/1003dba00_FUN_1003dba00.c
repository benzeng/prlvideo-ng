
void FUN_1003dba00(long param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  iVar15 = param_7 * 2;
  uVar11 = 0;
  if ((param_7 & 1) != 0) {
    iVar9 = *(byte *)(param_1 + (ulong)(((param_5 & 0xff) - 2) + iVar15)) - 0x80;
    iVar14 = *(byte *)(param_1 + (ulong)(((param_6 & 0xff) - 2) + iVar15)) - 0x80;
    iVar12 = (uint)*(byte *)(param_1 + (ulong)(((param_4 & 0xff) - 2) + iVar15)) * 0x12a;
    uVar16 = iVar14 * 0x199 + -0x1220 + iVar12 >> 8;
    uVar5 = iVar14 * -0xd0 + iVar12 + -0x1220 + iVar9 * -100 >> 8;
    uVar1 = iVar9 * 0x204 + -0x1220 + iVar12 >> 8;
    uVar10 = 0;
    if ((int)uVar16 < 0) {
      uVar16 = uVar10;
    }
    if ((int)uVar5 < 0) {
      uVar5 = uVar10;
    }
    if ((int)uVar1 < 0) {
      uVar1 = uVar10;
    }
    uVar10 = 0xff0000;
    if ((int)uVar16 < 0xff) {
      uVar10 = uVar16 << 0x10;
    }
    uVar16 = 0xff00;
    if ((int)uVar5 < 0xff) {
      uVar16 = uVar5 << 8;
    }
    uVar5 = 0xff0000ff;
    if ((int)uVar1 < 0xff) {
      uVar5 = uVar1 | 0xff000000;
    }
    *param_2 = uVar5 | uVar16 | uVar10;
    iVar15 = iVar15 + 2;
    param_8 = param_8 - 1;
    uVar11 = 1;
  }
  uVar16 = param_8 >> 1;
  if (uVar16 != 0) {
    lVar13 = 0;
    uVar5 = 0;
    do {
      iVar9 = (int)lVar13;
      iVar7 = *(byte *)(param_1 + (ulong)((param_5 & 0xff) + iVar15 + iVar9)) - 0x80;
      iVar3 = *(byte *)(param_1 + (ulong)((param_6 & 0xff) + iVar15 + iVar9)) - 0x80;
      iVar2 = (uint)*(byte *)(param_1 + (ulong)((param_3 & 0xff) + iVar15 + iVar9)) * 0x12a;
      iVar8 = iVar3 * 0x199;
      iVar12 = iVar8 + -0x1220 + iVar2 >> 8;
      iVar17 = iVar7 * -100;
      iVar3 = iVar3 * -0xd0;
      iVar14 = iVar17 + -0x1220 + iVar2 + iVar3 >> 8;
      iVar7 = iVar7 * 0x204;
      uVar1 = iVar7 + -0x1220 + iVar2 >> 8;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      uVar10 = iVar12 << 0x10;
      if (0xfe < iVar12) {
        uVar10 = 0xff0000;
      }
      uVar6 = iVar14 << 8;
      if (0xfe < iVar14) {
        uVar6 = 0xff00;
      }
      uVar4 = uVar1 | 0xff000000;
      if (0xfe < (int)uVar1) {
        uVar4 = 0xff0000ff;
      }
      *(uint *)((long)param_2 + lVar13 * 2 + uVar11 * 4) = uVar4 | uVar6 | uVar10;
      iVar14 = (uint)*(byte *)(param_1 + (ulong)((param_4 & 0xff) + iVar15 + iVar9)) * 0x12a;
      iVar9 = iVar14 + -0x1220 + iVar8 >> 8;
      iVar12 = iVar14 + -0x1220 + iVar3 + iVar17 >> 8;
      uVar1 = iVar14 + -0x1220 + iVar7 >> 8;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      uVar10 = iVar12 << 8;
      if (0xfe < iVar12) {
        uVar10 = 0xff00;
      }
      uVar6 = iVar9 << 0x10 | 0xff000000;
      if (0xfe < iVar9) {
        uVar6 = 0xffff0000;
      }
      *(uint *)((long)param_2 + lVar13 * 2 + uVar11 * 4 + 4) = uVar6 | uVar1 | uVar10;
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 4;
    } while (uVar5 < uVar16);
    iVar15 = iVar15 + uVar16 * 4;
    uVar11 = (ulong)((uVar16 * 2 - 2 | (uint)uVar11) + 2);
  }
  if ((param_8 & 1) != 0) {
    iVar9 = *(byte *)(param_1 + (ulong)((param_5 & 0xff) + iVar15)) - 0x80;
    iVar12 = *(byte *)(param_1 + (ulong)((param_6 & 0xff) + iVar15)) - 0x80;
    iVar15 = (uint)*(byte *)(param_1 + (ulong)((param_3 & 0xff) + iVar15)) * 0x12a;
    uVar16 = iVar12 * 0x199 + -0x1220 + iVar15 >> 8;
    uVar5 = iVar12 * -0xd0 + iVar15 + -0x1220 + iVar9 * -100 >> 8;
    uVar1 = iVar9 * 0x204 + -0x1220 + iVar15 >> 8;
    uVar10 = 0;
    if ((int)uVar16 < 0) {
      uVar16 = uVar10;
    }
    if ((int)uVar5 < 0) {
      uVar5 = uVar10;
    }
    if ((int)uVar1 < 0) {
      uVar1 = uVar10;
    }
    uVar10 = 0xff0000;
    if ((int)uVar16 < 0xff) {
      uVar10 = uVar16 << 0x10;
    }
    uVar16 = 0xff00;
    if ((int)uVar5 < 0xff) {
      uVar16 = uVar5 << 8;
    }
    uVar5 = 0xff0000ff;
    if ((int)uVar1 < 0xff) {
      uVar5 = uVar1 | 0xff000000;
    }
    param_2[uVar11] = uVar5 | uVar16 | uVar10;
  }
  return;
}



void FUN_1003dc270(byte *param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_7 * 2;
  if ((param_7 & 1) != 0) {
    bVar1 = *param_1;
    uVar7 = ((uint)param_1[1] * 0x81 + (uint)param_1[2] * 0x42 + 0x80 +
             ((uint)bVar1 + (uint)bVar1 * 4) * 5 >> 8) + 0x10;
    iVar2 = (int)((uint)bVar1 * -0x12 + 0x80 + (uint)param_1[1] * -0x5e + (uint)param_1[2] * 0x70)
            >> 8;
    iVar10 = iVar2 + 0x80;
    uVar5 = 0xff;
    if (uVar7 < 0x100) {
      uVar5 = (undefined1)uVar7;
    }
    if ((iVar2 < -0x80) && (iVar10 < 0x100)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
      if (iVar10 < 0x100) {
        uVar3 = (undefined1)iVar10;
      }
    }
    *(undefined1 *)(param_2 + (ulong)(((param_4 & 0xff) - 2) + iVar11)) = uVar5;
    *(undefined1 *)(param_2 + (ulong)(((param_6 & 0xff) - 2) + iVar11)) = uVar3;
    iVar11 = iVar11 + 2;
    param_1 = param_1 + 4;
    param_8 = param_8 - 1;
  }
  uVar7 = param_8 >> 1;
  if (uVar7 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      bVar1 = param_1[lVar8 * 2];
      uVar6 = ((uint)param_1[lVar8 * 2 + 1] * 0x81 + (uint)param_1[lVar8 * 2 + 2] * 0x42 + 0x80 +
               ((uint)bVar1 + (uint)bVar1 * 4) * 5 >> 8) + 0x10;
      iVar2 = (int)((uint)bVar1 * 0x70 + 0x80 +
                   (uint)param_1[lVar8 * 2 + 1] * -0x4a + (uint)param_1[lVar8 * 2 + 2] * -0x26) >> 8
      ;
      iVar10 = iVar2 + 0x80;
      if ((-0x81 < iVar2) || (uVar5 = 0, 0xff < iVar10)) {
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        uVar5 = (undefined1)iVar10;
      }
      uVar3 = 0xff;
      if (uVar6 < 0x100) {
        uVar3 = (undefined1)uVar6;
      }
      iVar2 = (int)lVar8;
      *(undefined1 *)(param_2 + (ulong)((param_3 & 0xff) + iVar11 + iVar2)) = uVar3;
      *(undefined1 *)(param_2 + (ulong)((param_5 & 0xff) + iVar11 + iVar2)) = uVar5;
      bVar1 = param_1[lVar8 * 2 + 4];
      uVar6 = ((uint)param_1[lVar8 * 2 + 5] * 0x81 + (uint)param_1[lVar8 * 2 + 6] * 0x42 + 0x80 +
               ((uint)bVar1 + (uint)bVar1 * 4) * 5 >> 8) + 0x10;
      iVar4 = (int)((uint)bVar1 * -0x12 + 0x80 +
                   (uint)param_1[lVar8 * 2 + 5] * -0x5e + (uint)param_1[lVar8 * 2 + 6] * 0x70) >> 8;
      iVar10 = iVar4 + 0x80;
      if ((-0x81 < iVar4) || (uVar5 = 0, 0xff < iVar10)) {
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        uVar5 = (undefined1)iVar10;
      }
      *(undefined1 *)(param_2 + (ulong)((param_6 & 0xff) + iVar11 + iVar2)) = uVar5;
      uVar5 = 0xff;
      if (uVar6 < 0x100) {
        uVar5 = (undefined1)uVar6;
      }
      *(undefined1 *)(param_2 + (ulong)((param_4 & 0xff) + iVar11 + iVar2)) = uVar5;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 4;
    } while (uVar9 < uVar7);
    iVar11 = iVar11 + uVar7 * 4;
    param_1 = param_1 + ((ulong)(uVar7 - 1) * 2 + 2) * 4;
  }
  if ((param_8 & 1) != 0) {
    bVar1 = *param_1;
    uVar7 = ((uint)param_1[1] * 0x81 + (uint)param_1[2] * 0x42 + 0x80 +
             ((uint)bVar1 + (uint)bVar1 * 4) * 5 >> 8) + 0x10;
    iVar10 = (int)((uint)bVar1 * 0x70 + 0x80 + (uint)param_1[1] * -0x4a + (uint)param_1[2] * -0x26)
             >> 8;
    iVar2 = iVar10 + 0x80;
    uVar5 = 0xff;
    if (uVar7 < 0x100) {
      uVar5 = (undefined1)uVar7;
    }
    if ((iVar10 < -0x80) && (iVar2 < 0x100)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
      if (iVar2 < 0x100) {
        uVar3 = (undefined1)iVar2;
      }
    }
    *(undefined1 *)(param_2 + (ulong)((param_3 & 0xff) + iVar11)) = uVar5;
    *(undefined1 *)(param_2 + (ulong)((param_5 & 0xff) + iVar11)) = uVar3;
  }
  return;
}


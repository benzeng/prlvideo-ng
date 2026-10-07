
void FUN_1003dc590(float *param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  
  iVar13 = param_7 * 2;
  if ((param_7 & 1) != 0) {
    iVar5 = (int)(long)(param_1[2] * DAT_100b44ca0);
    iVar9 = (int)(long)(param_1[1] * DAT_100b44ca0);
    iVar2 = (int)(long)(DAT_100b44ca0 * *param_1);
    iVar8 = iVar9 * 0x81 + iVar5 * 0x42 + 0x80 + iVar2 * 0x19 >> 8;
    iVar4 = iVar8 + 0x10;
    iVar5 = iVar2 * -0x12 + 0x80 + iVar9 * -0x5e + iVar5 * 0x70 >> 8;
    iVar2 = iVar5 + 0x80;
    if ((iVar8 < -0x10) && (iVar4 < 0x100)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xff;
      if (iVar4 < 0x100) {
        uVar7 = (undefined1)iVar4;
      }
    }
    if ((iVar5 < -0x80) && (iVar2 < 0x100)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xff;
      if (iVar2 < 0x100) {
        uVar6 = (undefined1)iVar2;
      }
    }
    *(undefined1 *)(param_2 + (ulong)(((param_4 & 0xff) - 2) + iVar13)) = uVar7;
    *(undefined1 *)(param_2 + (ulong)(((param_6 & 0xff) - 2) + iVar13)) = uVar6;
    iVar13 = iVar13 + 2;
    param_1 = param_1 + 4;
  }
  fVar1 = DAT_100b44ca0;
  uVar3 = param_8 >> 1;
  if (uVar3 != 0) {
    uVar15 = (param_3 & 0xff) + iVar13;
    uVar11 = (param_5 & 0xff) + iVar13;
    uVar10 = (param_6 & 0xff) + iVar13;
    uVar12 = (param_4 & 0xff) + iVar13;
    pfVar14 = param_1 + 6;
    uVar16 = 0;
    do {
      iVar9 = (int)(long)(pfVar14[-4] * fVar1);
      iVar8 = (int)(long)(pfVar14[-5] * fVar1);
      iVar2 = (int)(long)(pfVar14[-6] * fVar1);
      iVar5 = iVar8 * 0x81 + iVar9 * 0x42 + 0x80 + iVar2 * 0x19 >> 8;
      iVar4 = iVar5 + 0x10;
      iVar8 = iVar2 * 0x70 + 0x80 + iVar8 * -0x4a + iVar9 * -0x26 >> 8;
      iVar2 = iVar8 + 0x80;
      if ((-0x11 < iVar5) || (uVar7 = 0, 0xff < iVar4)) {
        if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        uVar7 = (undefined1)iVar4;
      }
      if ((-0x81 < iVar8) || (uVar6 = 0, 0xff < iVar2)) {
        if (0xff < iVar2) {
          iVar2 = 0xff;
        }
        uVar6 = (undefined1)iVar2;
      }
      *(undefined1 *)(param_2 + (ulong)uVar15) = uVar7;
      *(undefined1 *)(param_2 + (ulong)uVar11) = uVar6;
      iVar9 = (int)(long)(*pfVar14 * fVar1);
      iVar8 = (int)(long)(pfVar14[-1] * fVar1);
      iVar2 = (int)(long)(pfVar14[-2] * fVar1);
      iVar5 = iVar8 * 0x81 + iVar9 * 0x42 + 0x80 + iVar2 * 0x19 >> 8;
      iVar4 = iVar5 + 0x10;
      iVar8 = iVar2 * -0x12 + 0x80 + iVar8 * -0x5e + iVar9 * 0x70 >> 8;
      iVar2 = iVar8 + 0x80;
      if ((-0x11 < iVar5) || (uVar7 = 0, 0xff < iVar4)) {
        if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        uVar7 = (undefined1)iVar4;
      }
      if ((-0x81 < iVar8) || (uVar6 = 0, 0xff < iVar2)) {
        if (0xff < iVar2) {
          iVar2 = 0xff;
        }
        uVar6 = (undefined1)iVar2;
      }
      *(undefined1 *)(param_2 + (ulong)uVar10) = uVar6;
      *(undefined1 *)(param_2 + (ulong)uVar12) = uVar7;
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 4;
      uVar11 = uVar11 + 4;
      uVar10 = uVar10 + 4;
      uVar12 = uVar12 + 4;
      pfVar14 = pfVar14 + 8;
    } while (uVar16 < uVar3);
    iVar13 = iVar13 + uVar3 * 4;
    param_1 = param_1 + ((ulong)(uVar3 - 1) * 2 + 2) * 4;
  }
  if ((param_8 & 1) != 0) {
    iVar9 = (int)(long)(param_1[2] * DAT_100b44ca0);
    iVar5 = (int)(long)(param_1[1] * DAT_100b44ca0);
    iVar2 = (int)(long)(DAT_100b44ca0 * *param_1);
    iVar8 = iVar5 * 0x81 + iVar9 * 0x42 + 0x80 + iVar2 * 0x19 >> 8;
    iVar4 = iVar8 + 0x10;
    iVar5 = iVar2 * 0x70 + 0x80 + iVar5 * -0x4a + iVar9 * -0x26 >> 8;
    iVar2 = iVar5 + 0x80;
    if ((iVar8 < -0x10) && (iVar4 < 0x100)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xff;
      if (iVar4 < 0x100) {
        uVar7 = (undefined1)iVar4;
      }
    }
    if ((iVar5 < -0x80) && (iVar2 < 0x100)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xff;
      if (iVar2 < 0x100) {
        uVar6 = (undefined1)iVar2;
      }
    }
    *(undefined1 *)(param_2 + (ulong)((param_3 & 0xff) + iVar13)) = uVar7;
    *(undefined1 *)(param_2 + (ulong)((param_5 & 0xff) + iVar13)) = uVar6;
  }
  return;
}


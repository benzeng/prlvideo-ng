
void FUN_1003cbda0(float *param_1,undefined4 *param_2,ulong param_3,uint param_4,uint param_5)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  
  fVar1 = DAT_100b44ca0;
  uVar17 = (uint)param_3;
  switch(*param_2) {
  case 0x53:
    lVar26 = *(long *)(param_2 + 4);
    uVar25 = (ulong)(param_4 * param_2[3]);
    uVar17 = uVar17 * 2;
    if ((param_3 & 1) != 0) {
      *(char *)(lVar26 + (uVar17 | 1) + uVar25) = (char)(int)(param_1[1] * DAT_100b44ca0);
      *(char *)(lVar26 + uVar17 + uVar25) = (char)(int)(fVar1 * *param_1);
      uVar17 = uVar17 + 2;
      param_1 = param_1 + 4;
    }
    fVar1 = DAT_100b44ca0;
    uVar19 = param_5 >> 1;
    if (uVar19 != 0) {
      pfVar14 = param_1 + 5;
      uVar7 = 0;
      uVar10 = uVar17;
      do {
        *(char *)(lVar26 + (uVar10 + 1) + uVar25) = (char)(int)(pfVar14[-4] * fVar1);
        *(char *)(lVar26 + uVar10 + uVar25) = (char)(int)(pfVar14[-3] * fVar1);
        *(char *)(lVar26 + (uVar10 + 2) + uVar25) = (char)(int)(pfVar14[-1] * fVar1);
        *(char *)(lVar26 + (uVar10 + 3) + uVar25) = (char)(int)(*pfVar14 * fVar1);
        uVar10 = uVar10 + 4;
        uVar7 = uVar7 + 1;
        pfVar14 = pfVar14 + 8;
      } while (uVar7 < uVar19);
      uVar17 = uVar17 + uVar19 * 4;
      param_1 = param_1 + (ulong)(uVar19 - 1) * 8 + 8;
    }
    fVar1 = DAT_100b44ca0;
    if ((param_5 & 1) != 0) {
      *(char *)(lVar26 + (uVar17 + 1) + uVar25) = (char)(int)(param_1[1] * DAT_100b44ca0);
      *(char *)(lVar26 + uVar17 + uVar25) = (char)(int)(fVar1 * param_1[2]);
    }
    break;
  case 0x54:
    lVar26 = *(long *)(param_2 + 4);
    uVar25 = (ulong)(param_4 * param_2[3]);
    uVar17 = uVar17 * 2;
    if ((param_3 & 1) != 0) {
      *(char *)(lVar26 + uVar17 + uVar25) = (char)(int)(param_1[1] * DAT_100b44ca0);
      *(char *)(lVar26 + (uVar17 | 1) + uVar25) = (char)(int)(fVar1 * *param_1);
      uVar17 = uVar17 + 2;
      param_1 = param_1 + 4;
    }
    fVar1 = DAT_100b44ca0;
    uVar19 = param_5 >> 1;
    if (uVar19 != 0) {
      pfVar14 = param_1 + 5;
      uVar7 = 0;
      uVar10 = uVar17;
      do {
        *(char *)(lVar26 + uVar10 + uVar25) = (char)(int)(pfVar14[-4] * fVar1);
        *(char *)(lVar26 + (uVar10 + 1) + uVar25) = (char)(int)(pfVar14[-3] * fVar1);
        *(char *)(lVar26 + (uVar10 + 3) + uVar25) = (char)(int)(pfVar14[-1] * fVar1);
        *(char *)(lVar26 + (uVar10 + 2) + uVar25) = (char)(int)(*pfVar14 * fVar1);
        uVar10 = uVar10 + 4;
        uVar7 = uVar7 + 1;
        pfVar14 = pfVar14 + 8;
      } while (uVar7 < uVar19);
      uVar17 = uVar17 + uVar19 * 4;
      param_1 = param_1 + (ulong)(uVar19 - 1) * 8 + 8;
    }
    fVar1 = DAT_100b44ca0;
    if ((param_5 & 1) != 0) {
      *(char *)(lVar26 + uVar17 + uVar25) = (char)(int)(param_1[1] * DAT_100b44ca0);
      *(char *)(lVar26 + (uVar17 + 1) + uVar25) = (char)(int)(fVar1 * param_1[2]);
    }
    break;
  case 0x55:
    lVar26 = (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4);
    uVar8 = 0;
    uVar6 = 2;
    uVar15 = 1;
    uVar16 = 3;
    goto LAB_1003cc080;
  case 0x56:
    lVar26 = (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4);
    uVar8 = 1;
    uVar6 = 3;
    uVar15 = 0;
    uVar16 = 2;
LAB_1003cc080:
    FUN_1003dc590(param_1,lVar26,uVar8,uVar6,uVar15,uVar16,uVar17,param_5);
    break;
  case 0x57:
    if (uVar17 < param_5 + uVar17) {
      lVar26 = *(long *)(param_2 + 4);
      iVar5 = param_2[3];
      uVar17 = param_2[1];
      uVar19 = param_2[2];
      iVar12 = (param_4 >> 1) * (uVar17 >> 1) + uVar19 * iVar5;
      param_1 = param_1 + 2;
      do {
        iVar18 = (int)(long)(*param_1 * fVar1);
        iVar24 = (int)(long)(param_1[-1] * fVar1);
        iVar4 = (int)(long)(param_1[-2] * fVar1);
        iVar11 = iVar24 * 0x81 + iVar18 * 0x42 + 0x80 + iVar4 * 0x19 >> 8;
        iVar13 = iVar11 + 0x10;
        iVar20 = iVar4 * 0x70 + 0x80 + iVar24 * -0x4a + iVar18 * -0x26 >> 8;
        iVar2 = iVar20 + 0x80;
        iVar4 = iVar4 * -0x12 + 0x80 + iVar24 * -0x5e + iVar18 * 0x70 >> 8;
        if ((-0x11 < iVar11) || (uVar21 = 0, 0xff < iVar13)) {
          if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          uVar21 = (undefined1)iVar13;
        }
        iVar13 = iVar4 + 0x80;
        if ((-0x81 < iVar20) || (uVar22 = 0, 0xff < iVar2)) {
          if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          uVar22 = (undefined1)iVar2;
        }
        if ((-0x81 < iVar4) || (uVar3 = 0, 0xff < iVar13)) {
          if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          uVar3 = (undefined1)iVar13;
        }
        *(undefined1 *)(lVar26 + (ulong)(iVar5 * param_4 + (int)param_3)) = uVar21;
        uVar10 = (uint)(param_3 >> 1) & 0x7fffffff;
        *(undefined1 *)(lVar26 + (ulong)((uVar19 >> 1) * (uVar17 >> 1) + iVar12 + uVar10)) = uVar22;
        *(undefined1 *)(lVar26 + (ulong)(uVar10 + iVar12)) = uVar3;
        param_3 = (ulong)((int)param_3 + 1);
        param_1 = param_1 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x58:
    iVar5 = param_2[3];
    iVar12 = param_2[2] * iVar5;
    iVar13 = (param_4 >> 1) * param_2[1];
    if (uVar17 < param_5 + uVar17) {
      lVar26 = *(long *)(param_2 + 4);
      param_1 = param_1 + 2;
      do {
        iVar23 = (int)(long)(*param_1 * fVar1);
        iVar20 = (int)(long)(param_1[-1] * fVar1);
        iVar11 = (int)(long)(param_1[-2] * fVar1);
        iVar24 = iVar20 * 0x81 + iVar23 * 0x42 + 0x80 + iVar11 * 0x19 >> 8;
        iVar4 = iVar24 + 0x10;
        iVar18 = iVar11 * 0x70 + 0x80 + iVar20 * -0x4a + iVar23 * -0x26 >> 8;
        iVar2 = iVar18 + 0x80;
        iVar11 = iVar11 * -0x12 + 0x80 + iVar20 * -0x5e + iVar23 * 0x70 >> 8;
        if ((-0x11 < iVar24) || (uVar21 = 0, 0xff < iVar4)) {
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          uVar21 = (undefined1)iVar4;
        }
        iVar4 = iVar11 + 0x80;
        if ((-0x81 < iVar18) || (uVar22 = 0, 0xff < iVar2)) {
          if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          uVar22 = (undefined1)iVar2;
        }
        uVar17 = (uint)param_3;
        if ((-0x81 < iVar11) || (uVar3 = 0, 0xff < iVar4)) {
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          uVar3 = (undefined1)iVar4;
        }
        *(undefined1 *)(lVar26 + (ulong)(iVar5 * param_4 + uVar17)) = uVar21;
        *(undefined1 *)(lVar26 + (ulong)((uVar17 & 0xfffffffe) + iVar13 + iVar12)) = uVar22;
        *(undefined1 *)(lVar26 + (ulong)((uVar17 & 0xfffffffe) + iVar13 + 1 + iVar12)) = uVar3;
        param_3 = (ulong)(uVar17 + 1);
        param_1 = param_1 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x59:
    iVar5 = param_2[3];
    iVar12 = param_2[2] * iVar5;
    iVar13 = (param_4 >> 1) * param_2[1];
    if (uVar17 < param_5 + uVar17) {
      lVar26 = *(long *)(param_2 + 4);
      param_1 = param_1 + 2;
      do {
        iVar23 = (int)(long)(*param_1 * fVar1);
        iVar20 = (int)(long)(param_1[-1] * fVar1);
        iVar11 = (int)(long)(param_1[-2] * fVar1);
        iVar24 = iVar20 * 0x81 + iVar23 * 0x42 + 0x80 + iVar11 * 0x19 >> 8;
        iVar4 = iVar24 + 0x10;
        iVar18 = iVar11 * 0x70 + 0x80 + iVar20 * -0x4a + iVar23 * -0x26 >> 8;
        iVar2 = iVar18 + 0x80;
        iVar11 = iVar11 * -0x12 + 0x80 + iVar20 * -0x5e + iVar23 * 0x70 >> 8;
        if ((-0x11 < iVar24) || (uVar21 = 0, 0xff < iVar4)) {
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          uVar21 = (undefined1)iVar4;
        }
        iVar4 = iVar11 + 0x80;
        if ((-0x81 < iVar18) || (uVar22 = 0, 0xff < iVar2)) {
          if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          uVar22 = (undefined1)iVar2;
        }
        uVar17 = (uint)param_3;
        if ((-0x81 < iVar11) || (uVar3 = 0, 0xff < iVar4)) {
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          uVar3 = (undefined1)iVar4;
        }
        *(undefined1 *)(lVar26 + (ulong)(iVar5 * param_4 + uVar17)) = uVar21;
        *(undefined1 *)(lVar26 + (ulong)(iVar13 + 1 + iVar12 + (uVar17 & 0xfffffffe))) = uVar22;
        *(undefined1 *)(lVar26 + (ulong)((uVar17 & 0xfffffffe) + iVar13 + iVar12)) = uVar3;
        param_3 = (ulong)(uVar17 + 1);
        param_1 = param_1 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x5b:
    if (param_5 != 0) {
      puVar9 = (undefined1 *)
               ((ulong)(uVar17 << 2) + (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4));
      param_1 = param_1 + 3;
      do {
        iVar11 = (int)(long)(param_1[-1] * fVar1);
        iVar2 = (int)(long)(param_1[-2] * fVar1);
        iVar12 = (int)(long)(param_1[-3] * fVar1);
        iVar4 = iVar2 * 0x81 + iVar11 * 0x42 + 0x80 + iVar12 * 0x19 >> 8;
        iVar5 = iVar4 + 0x10;
        iVar24 = iVar12 * 0x70 + 0x80 + iVar2 * -0x4a + iVar11 * -0x26 >> 8;
        iVar13 = iVar24 + 0x80;
        iVar12 = iVar12 * -0x12 + 0x80 + iVar2 * -0x5e + iVar11 * 0x70 >> 8;
        if ((-0x11 < iVar4) || (uVar21 = 0, 0xff < iVar5)) {
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar21 = (undefined1)iVar5;
        }
        iVar5 = iVar12 + 0x80;
        if ((-0x81 < iVar24) || (uVar22 = 0, 0xff < iVar13)) {
          if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          uVar22 = (undefined1)iVar13;
        }
        if ((-0x81 < iVar12) || (uVar3 = 0, 0xff < iVar5)) {
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar3 = (undefined1)iVar5;
        }
        *puVar9 = (char)(int)(*param_1 * fVar1);
        puVar9[1] = uVar21;
        puVar9[2] = uVar22;
        puVar9[3] = uVar3;
        param_1 = param_1 + 4;
        puVar9 = puVar9 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  return;
}


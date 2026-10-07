
void FUN_1003cad80(undefined4 *param_1,float *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar29 = DAT_100b44ca0;
  fVar4 = DAT_100b39678;
  switch(*param_1) {
  case 0x53:
    lVar26 = *(long *)(param_1 + 4);
    uVar25 = (ulong)(param_4 * param_1[3]);
    uVar19 = param_3 * 2;
    bVar28 = (param_3 & 1) != 0;
    if (bVar28) {
      bVar1 = *(byte *)(lVar26 + (uVar19 - 2) + uVar25);
      bVar2 = *(byte *)(lVar26 + (uVar19 | 1) + uVar25);
      bVar3 = *(byte *)(lVar26 + uVar19 + uVar25);
      param_2[3] = 1.0;
      fVar4 = DAT_100b44ca0;
      param_2[2] = (float)bVar1 / DAT_100b44ca0;
      param_2[1] = (float)bVar2 / fVar4;
      *param_2 = (float)bVar3 / fVar4;
      uVar19 = uVar19 + 2;
      param_5 = param_5 - 1;
    }
    fVar4 = DAT_100b44ca0;
    uVar17 = (ulong)bVar28;
    uVar22 = param_5 >> 1;
    if (uVar22 != 0) {
      pfVar13 = param_2 + uVar17 * 4 + 7;
      uVar20 = 0;
      uVar21 = uVar19;
      do {
        bVar1 = *(byte *)(lVar26 + uVar21 + uVar25);
        bVar2 = *(byte *)(lVar26 + (uVar21 + 1) + uVar25);
        bVar3 = *(byte *)(lVar26 + (uVar21 + 2) + uVar25);
        pfVar13[-4] = 1.0;
        fVar29 = (float)bVar1 / fVar4;
        pfVar13[-5] = fVar29;
        pfVar13[-6] = (float)bVar2 / fVar4;
        fVar30 = (float)bVar3 / fVar4;
        pfVar13[-7] = fVar30;
        bVar1 = *(byte *)(lVar26 + (uVar21 + 3) + uVar25);
        *pfVar13 = 1.0;
        pfVar13[-1] = fVar29;
        pfVar13[-2] = (float)bVar1 / fVar4;
        pfVar13[-3] = fVar30;
        uVar21 = uVar21 + 4;
        uVar20 = uVar20 + 1;
        pfVar13 = pfVar13 + 8;
      } while (uVar20 < uVar22);
      uVar19 = uVar19 + uVar22 * 4;
      uVar17 = (ulong)((uVar22 * 2 - 2 | (uint)bVar28) + 2);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    lVar27 = uVar19 + uVar25;
    lVar7 = (uVar19 + 1) + uVar25;
    uVar19 = uVar19 + 2;
    goto LAB_1003cb088;
  case 0x54:
    lVar26 = *(long *)(param_1 + 4);
    uVar25 = (ulong)(param_4 * param_1[3]);
    uVar19 = param_3 * 2;
    uVar14 = (ulong)uVar19;
    bVar28 = (param_3 & 1) != 0;
    if (bVar28) {
      bVar1 = *(byte *)(lVar26 + (uVar19 - 1) + uVar25);
      bVar2 = *(byte *)(lVar26 + uVar14 + uVar25);
      bVar3 = *(byte *)(lVar26 + (uVar19 | 1) + uVar25);
      param_2[3] = 1.0;
      fVar4 = DAT_100b44ca0;
      param_2[2] = (float)bVar1 / DAT_100b44ca0;
      param_2[1] = (float)bVar2 / fVar4;
      *param_2 = (float)bVar3 / fVar4;
      uVar14 = (ulong)(uVar19 + 2);
      param_5 = param_5 - 1;
    }
    fVar4 = DAT_100b44ca0;
    uVar17 = (ulong)bVar28;
    uVar19 = (uint)uVar14;
    uVar22 = param_5 >> 1;
    if (uVar22 != 0) {
      pfVar13 = param_2 + uVar17 * 4 + 7;
      uVar21 = 0;
      do {
        iVar16 = (int)uVar14;
        bVar1 = *(byte *)(lVar26 + (iVar16 + 1) + uVar25);
        bVar2 = *(byte *)(lVar26 + uVar14 + uVar25);
        bVar3 = *(byte *)(lVar26 + (iVar16 + 3) + uVar25);
        pfVar13[-4] = 1.0;
        fVar29 = (float)bVar1 / fVar4;
        pfVar13[-5] = fVar29;
        pfVar13[-6] = (float)bVar2 / fVar4;
        fVar30 = (float)bVar3 / fVar4;
        pfVar13[-7] = fVar30;
        bVar1 = *(byte *)(lVar26 + (iVar16 + 2) + uVar25);
        *pfVar13 = 1.0;
        pfVar13[-1] = fVar29;
        pfVar13[-2] = (float)bVar1 / fVar4;
        pfVar13[-3] = fVar30;
        uVar14 = (ulong)(iVar16 + 4);
        uVar21 = uVar21 + 1;
        pfVar13 = pfVar13 + 8;
      } while (uVar21 < uVar22);
      uVar19 = uVar19 + uVar22 * 4;
      uVar17 = (ulong)((uVar22 * 2 - 2 | (uint)bVar28) + 2);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    lVar27 = (uVar19 + 1) + uVar25;
    lVar7 = uVar19 + uVar25;
    uVar19 = uVar19 + 3;
LAB_1003cb088:
    bVar1 = *(byte *)(lVar26 + lVar27);
    bVar2 = *(byte *)(lVar26 + lVar7);
    bVar3 = *(byte *)(lVar26 + uVar19 + uVar25);
    param_2[uVar17 * 4 + 3] = 1.0;
    fVar4 = DAT_100b44ca0;
    param_2[uVar17 * 4 + 2] = (float)bVar1 / DAT_100b44ca0;
    param_2[uVar17 * 4 + 1] = (float)bVar2 / fVar4;
    param_2[uVar17 * 4] = (float)bVar3 / fVar4;
    break;
  case 0x55:
    lVar26 = (ulong)(param_4 * param_1[3]) + *(long *)(param_1 + 4);
    uVar10 = 0;
    uVar8 = 2;
    uVar15 = 1;
    uVar18 = 3;
    goto LAB_1003cb12f;
  case 0x56:
    lVar26 = (ulong)(param_4 * param_1[3]) + *(long *)(param_1 + 4);
    uVar10 = 1;
    uVar8 = 3;
    uVar15 = 0;
    uVar18 = 2;
LAB_1003cb12f:
    FUN_1003dbde0(lVar26,param_2,uVar10,uVar8,uVar15,uVar18,param_3,param_5);
    break;
  case 0x57:
    if (param_3 < param_5 + param_3) {
      lVar26 = *(long *)(param_1 + 4);
      iVar16 = param_1[3];
      uVar19 = param_1[1];
      uVar22 = param_1[2];
      iVar9 = (param_4 >> 1) * (uVar19 >> 1) + uVar22 * iVar16;
      param_2 = param_2 + 3;
      iVar5 = 0;
      do {
        iVar6 = *(byte *)(lVar26 + (ulong)((uVar22 >> 1) * (uVar19 >> 1) + iVar9 + (param_3 >> 1)))
                - 0x80;
        iVar23 = *(byte *)(lVar26 + (ulong)((param_3 >> 1) + iVar9)) - 0x80;
        iVar11 = (uint)*(byte *)(lVar26 + (ulong)(iVar16 * param_4 + param_3)) * 0x12a;
        iVar12 = iVar23 * 0x199 + -0x1220 + iVar11 >> 8;
        iVar23 = iVar23 * -0xd0 + iVar11 + -0x1220 + iVar6 * -100 >> 8;
        iVar6 = iVar6 * 0x204 + -0x1220 + iVar11 >> 8;
        if (iVar12 < 0) {
          iVar12 = iVar5;
        }
        if (iVar23 < 0) {
          iVar23 = iVar5;
        }
        if (iVar6 < 0) {
          iVar6 = iVar5;
        }
        fVar30 = fVar4;
        if (iVar12 < 0xff) {
          fVar30 = (float)iVar12 / fVar29;
        }
        fVar31 = fVar4;
        if (iVar23 < 0xff) {
          fVar31 = (float)iVar23 / fVar29;
        }
        *param_2 = 1.0;
        param_2[-1] = fVar30;
        param_2[-2] = fVar31;
        fVar30 = fVar4;
        if (iVar6 < 0xff) {
          fVar30 = (float)iVar6 / fVar29;
        }
        param_2[-3] = fVar30;
        param_3 = param_3 + 1;
        param_2 = param_2 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x58:
    iVar16 = param_1[3];
    iVar5 = param_1[2] * iVar16;
    iVar9 = (param_4 >> 1) * param_1[1];
    if (param_3 < param_5 + param_3) {
      lVar26 = *(long *)(param_1 + 4);
      param_2 = param_2 + 3;
      iVar12 = 0;
      do {
        iVar11 = *(byte *)(lVar26 + (ulong)((param_3 & 0xfffffffe) + iVar9 + iVar5)) - 0x80;
        iVar6 = *(byte *)(lVar26 + (ulong)((param_3 & 0xfffffffe) + iVar9 + 1 + iVar5)) - 0x80;
        iVar24 = (uint)*(byte *)(lVar26 + (ulong)(iVar16 * param_4 + param_3)) * 0x12a;
        iVar23 = iVar6 * 0x199 + -0x1220 + iVar24 >> 8;
        iVar6 = iVar6 * -0xd0 + iVar24 + -0x1220 + iVar11 * -100 >> 8;
        iVar11 = iVar11 * 0x204 + -0x1220 + iVar24 >> 8;
        if (iVar23 < 0) {
          iVar23 = iVar12;
        }
        if (iVar6 < 0) {
          iVar6 = iVar12;
        }
        if (iVar11 < 0) {
          iVar11 = iVar12;
        }
        fVar30 = fVar4;
        if (iVar23 < 0xff) {
          fVar30 = (float)iVar23 / fVar29;
        }
        fVar31 = fVar4;
        if (iVar6 < 0xff) {
          fVar31 = (float)iVar6 / fVar29;
        }
        *param_2 = 1.0;
        param_2[-1] = fVar30;
        param_2[-2] = fVar31;
        fVar30 = fVar4;
        if (iVar11 < 0xff) {
          fVar30 = (float)iVar11 / fVar29;
        }
        param_2[-3] = fVar30;
        param_3 = param_3 + 1;
        param_2 = param_2 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x59:
    iVar16 = param_1[3];
    iVar5 = param_1[2] * iVar16;
    iVar9 = (param_4 >> 1) * param_1[1];
    if (param_3 < param_5 + param_3) {
      lVar26 = *(long *)(param_1 + 4);
      param_2 = param_2 + 3;
      iVar12 = 0;
      do {
        iVar11 = *(byte *)(lVar26 + (ulong)(iVar9 + 1 + iVar5 + (param_3 & 0xfffffffe))) - 0x80;
        iVar6 = *(byte *)(lVar26 + (ulong)((param_3 & 0xfffffffe) + iVar9 + iVar5)) - 0x80;
        iVar24 = (uint)*(byte *)(lVar26 + (ulong)(iVar16 * param_4 + param_3)) * 0x12a;
        iVar23 = iVar6 * 0x199 + -0x1220 + iVar24 >> 8;
        iVar6 = iVar6 * -0xd0 + iVar24 + -0x1220 + iVar11 * -100 >> 8;
        iVar11 = iVar11 * 0x204 + -0x1220 + iVar24 >> 8;
        if (iVar23 < 0) {
          iVar23 = iVar12;
        }
        if (iVar6 < 0) {
          iVar6 = iVar12;
        }
        if (iVar11 < 0) {
          iVar11 = iVar12;
        }
        fVar30 = fVar4;
        if (iVar23 < 0xff) {
          fVar30 = (float)iVar23 / fVar29;
        }
        fVar31 = fVar4;
        if (iVar6 < 0xff) {
          fVar31 = (float)iVar6 / fVar29;
        }
        *param_2 = 1.0;
        param_2[-1] = fVar30;
        param_2[-2] = fVar31;
        fVar30 = fVar4;
        if (iVar11 < 0xff) {
          fVar30 = (float)iVar11 / fVar29;
        }
        param_2[-3] = fVar30;
        param_3 = param_3 + 1;
        param_2 = param_2 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x5b:
    if (param_5 != 0) {
      lVar26 = *(long *)(param_1 + 4);
      lVar27 = (ulong)(param_4 * param_1[3]) + (ulong)(param_3 << 2);
      iVar16 = 0;
      uVar14 = 0;
      do {
        iVar5 = (int)uVar14;
        iVar12 = *(byte *)(lVar26 + (ulong)(iVar5 + 2) + lVar27) - 0x80;
        iVar9 = *(byte *)(lVar26 + (ulong)(iVar5 + 3) + lVar27) - 0x80;
        iVar23 = (uint)*(byte *)(lVar26 + (ulong)(iVar5 + 1) + lVar27) * 0x12a;
        iVar5 = iVar9 * 0x199 + -0x1220 + iVar23 >> 8;
        iVar9 = iVar9 * -0xd0 + iVar23 + -0x1220 + iVar12 * -100 >> 8;
        iVar12 = iVar12 * 0x204 + -0x1220 + iVar23 >> 8;
        if (iVar5 < 0) {
          iVar5 = iVar16;
        }
        if (iVar9 < 0) {
          iVar9 = iVar16;
        }
        if (iVar12 < 0) {
          iVar12 = iVar16;
        }
        fVar30 = fVar4;
        if (iVar5 < 0xff) {
          fVar30 = (float)iVar5 / fVar29;
        }
        fVar31 = fVar4;
        if (iVar9 < 0xff) {
          fVar31 = (float)iVar9 / fVar29;
        }
        param_2[uVar14 + 3] = (float)*(byte *)(lVar26 + (uVar14 & 0xffffffff) + lVar27) / fVar29;
        param_2[uVar14 + 2] = fVar30;
        param_2[uVar14 + 1] = fVar31;
        fVar30 = fVar4;
        if (iVar12 < 0xff) {
          fVar30 = (float)iVar12 / fVar29;
        }
        param_2[uVar14] = fVar30;
        uVar14 = uVar14 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  return;
}


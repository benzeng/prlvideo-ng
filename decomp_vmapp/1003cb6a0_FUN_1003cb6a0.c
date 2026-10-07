
void FUN_1003cb6a0(undefined1 *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  
  switch(*param_2) {
  case 0x53:
    lVar27 = *(long *)(param_2 + 4);
    uVar21 = (ulong)(param_4 * param_2[3]);
    uVar25 = param_3 * 2;
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(lVar27 + (uVar25 | 1) + uVar21) = param_1[1];
      *(undefined1 *)(lVar27 + uVar25 + uVar21) = *param_1;
      uVar25 = uVar25 + 2;
      param_1 = param_1 + 4;
      param_5 = param_5 - 1;
    }
    uVar22 = param_5 >> 1;
    if (uVar22 != 0) {
      lVar12 = 0;
      uVar20 = uVar25;
      do {
        *(undefined1 *)(lVar27 + (uVar20 + 1) + uVar21) = param_1[lVar12 * 8 + 1];
        *(undefined1 *)(lVar27 + uVar20 + uVar21) = param_1[lVar12 * 8 + 2];
        *(undefined1 *)(lVar27 + (uVar20 + 2) + uVar21) = param_1[lVar12 * 8 + 4];
        *(undefined1 *)(lVar27 + (uVar20 + 3) + uVar21) = param_1[lVar12 * 8 + 5];
        uVar20 = uVar20 + 4;
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < uVar22);
      uVar25 = uVar25 + uVar22 * 4;
      param_1 = param_1 + (ulong)(uVar22 - 1) * 8 + 8;
    }
    if ((param_5 & 1) != 0) {
      *(undefined1 *)(lVar27 + (uVar25 + 1) + uVar21) = param_1[1];
      *(undefined1 *)(lVar27 + uVar25 + uVar21) = param_1[2];
    }
    break;
  case 0x54:
    lVar27 = *(long *)(param_2 + 4);
    uVar26 = (ulong)(param_4 * param_2[3]);
    uVar25 = param_3 * 2;
    uVar21 = (ulong)uVar25;
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(lVar27 + uVar21 + uVar26) = param_1[1];
      *(undefined1 *)(lVar27 + (uVar25 | 1) + uVar26) = *param_1;
      uVar21 = (ulong)(uVar25 + 2);
      param_1 = param_1 + 4;
      param_5 = param_5 - 1;
    }
    uVar25 = param_5 >> 1;
    if (uVar25 != 0) {
      lVar12 = 0;
      uVar15 = uVar21;
      do {
        iVar4 = (int)uVar15;
        *(undefined1 *)(lVar27 + uVar15 + uVar26) = param_1[lVar12 * 8 + 1];
        *(undefined1 *)(lVar27 + (iVar4 + 1) + uVar26) = param_1[lVar12 * 8 + 2];
        *(undefined1 *)(lVar27 + (iVar4 + 3) + uVar26) = param_1[lVar12 * 8 + 4];
        *(undefined1 *)(lVar27 + (iVar4 + 2) + uVar26) = param_1[lVar12 * 8 + 5];
        uVar15 = (ulong)(iVar4 + 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < uVar25);
      uVar21 = (ulong)((int)uVar21 + uVar25 * 4);
      param_1 = param_1 + (ulong)(uVar25 - 1) * 8 + 8;
    }
    if ((param_5 & 1) != 0) {
      *(undefined1 *)(lVar27 + uVar21 + uVar26) = param_1[1];
      *(undefined1 *)(lVar27 + ((int)uVar21 + 1) + uVar26) = param_1[2];
    }
    break;
  case 0x55:
    lVar27 = (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4);
    uVar8 = 0;
    uVar7 = 2;
    uVar17 = 1;
    uVar18 = 3;
    goto LAB_1003cb899;
  case 0x56:
    lVar27 = (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4);
    uVar8 = 1;
    uVar7 = 3;
    uVar17 = 0;
    uVar18 = 2;
LAB_1003cb899:
    FUN_1003dc270(param_1,lVar27,uVar8,uVar7,uVar17,uVar18,param_3,param_5);
    break;
  case 0x57:
    if (param_3 < param_5 + param_3) {
      lVar27 = *(long *)(param_2 + 4);
      iVar4 = param_2[3];
      uVar25 = param_2[1];
      uVar22 = param_2[2];
      iVar6 = (param_4 >> 1) * (uVar25 >> 1) + uVar22 * iVar4;
      pbVar16 = param_1 + 2;
      do {
        bVar1 = *pbVar16;
        bVar2 = pbVar16[-1];
        bVar3 = pbVar16[-2];
        iVar10 = (int)((uint)bVar3 * 0x70 + 0x80 + (uint)bVar2 * -0x4a + (uint)bVar1 * -0x26) >> 8;
        iVar11 = iVar10 + 0x80;
        iVar5 = (int)((uint)bVar3 * -0x12 + 0x80 + (uint)bVar2 * -0x5e + (uint)bVar1 * 0x70) >> 8;
        iVar14 = iVar5 + 0x80;
        if ((-0x81 < iVar10) || (uVar23 = 0, 0xff < iVar11)) {
          if (0xff < iVar11) {
            iVar11 = 0xff;
          }
          uVar23 = (undefined1)iVar11;
        }
        uVar20 = ((uint)bVar2 * 0x81 + (uint)bVar1 * 0x42 + 0x80 +
                  ((uint)bVar3 + (uint)bVar3 * 4) * 5 >> 8) + 0x10;
        if ((-0x81 < iVar5) || (uVar24 = 0, 0xff < iVar14)) {
          if (0xff < iVar14) {
            iVar14 = 0xff;
          }
          uVar24 = (undefined1)iVar14;
        }
        uVar19 = 0xff;
        if (uVar20 < 0x100) {
          uVar19 = (undefined1)uVar20;
        }
        *(undefined1 *)(lVar27 + (ulong)(iVar4 * param_4 + param_3)) = uVar19;
        *(undefined1 *)(lVar27 + (ulong)((uVar22 >> 1) * (uVar25 >> 1) + iVar6 + (param_3 >> 1))) =
             uVar23;
        *(undefined1 *)(lVar27 + (ulong)((param_3 >> 1) + iVar6)) = uVar24;
        param_3 = param_3 + 1;
        pbVar16 = pbVar16 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x58:
    iVar4 = param_2[3];
    iVar6 = param_2[2] * iVar4;
    iVar11 = (param_4 >> 1) * param_2[1];
    if (param_3 < param_5 + param_3) {
      lVar27 = *(long *)(param_2 + 4);
      pbVar16 = param_1 + 2;
      do {
        bVar1 = *pbVar16;
        bVar2 = pbVar16[-1];
        bVar3 = pbVar16[-2];
        iVar14 = (int)((uint)bVar3 * 0x70 + 0x80 + (uint)bVar2 * -0x4a + (uint)bVar1 * -0x26) >> 8;
        iVar13 = iVar14 + 0x80;
        iVar10 = (int)((uint)bVar3 * -0x12 + 0x80 + (uint)bVar2 * -0x5e + (uint)bVar1 * 0x70) >> 8;
        iVar5 = iVar10 + 0x80;
        if ((-0x81 < iVar14) || (uVar23 = 0, 0xff < iVar13)) {
          if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          uVar23 = (undefined1)iVar13;
        }
        uVar25 = ((uint)bVar2 * 0x81 + (uint)bVar1 * 0x42 + 0x80 +
                  ((uint)bVar3 + (uint)bVar3 * 4) * 5 >> 8) + 0x10;
        if ((-0x81 < iVar10) || (uVar24 = 0, 0xff < iVar5)) {
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar24 = (undefined1)iVar5;
        }
        uVar19 = 0xff;
        if (uVar25 < 0x100) {
          uVar19 = (undefined1)uVar25;
        }
        *(undefined1 *)(lVar27 + (ulong)(iVar4 * param_4 + param_3)) = uVar19;
        *(undefined1 *)(lVar27 + (ulong)((param_3 & 0xfffffffe) + iVar11 + iVar6)) = uVar23;
        *(undefined1 *)(lVar27 + (ulong)((param_3 & 0xfffffffe) + iVar11 + 1 + iVar6)) = uVar24;
        param_3 = param_3 + 1;
        pbVar16 = pbVar16 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x59:
    iVar4 = param_2[3];
    iVar6 = param_2[2] * iVar4;
    iVar11 = (param_4 >> 1) * param_2[1];
    if (param_3 < param_5 + param_3) {
      lVar27 = *(long *)(param_2 + 4);
      pbVar16 = param_1 + 2;
      do {
        bVar1 = *pbVar16;
        bVar2 = pbVar16[-1];
        bVar3 = pbVar16[-2];
        iVar14 = (int)((uint)bVar3 * 0x70 + 0x80 + (uint)bVar2 * -0x4a + (uint)bVar1 * -0x26) >> 8;
        iVar13 = iVar14 + 0x80;
        iVar10 = (int)((uint)bVar3 * -0x12 + 0x80 + (uint)bVar2 * -0x5e + (uint)bVar1 * 0x70) >> 8;
        iVar5 = iVar10 + 0x80;
        if ((-0x81 < iVar14) || (uVar23 = 0, 0xff < iVar13)) {
          if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          uVar23 = (undefined1)iVar13;
        }
        uVar25 = ((uint)bVar2 * 0x81 + (uint)bVar1 * 0x42 + 0x80 +
                  ((uint)bVar3 + (uint)bVar3 * 4) * 5 >> 8) + 0x10;
        if ((-0x81 < iVar10) || (uVar24 = 0, 0xff < iVar5)) {
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar24 = (undefined1)iVar5;
        }
        uVar19 = 0xff;
        if (uVar25 < 0x100) {
          uVar19 = (undefined1)uVar25;
        }
        *(undefined1 *)(lVar27 + (ulong)(iVar4 * param_4 + param_3)) = uVar19;
        *(undefined1 *)(lVar27 + (ulong)(iVar11 + 1 + iVar6 + (param_3 & 0xfffffffe))) = uVar23;
        *(undefined1 *)(lVar27 + (ulong)((param_3 & 0xfffffffe) + iVar11 + iVar6)) = uVar24;
        param_3 = param_3 + 1;
        pbVar16 = pbVar16 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x5b:
    if (param_5 != 0) {
      puVar9 = (undefined1 *)
               ((ulong)(param_3 << 2) + (ulong)(param_4 * param_2[3]) + *(long *)(param_2 + 4));
      param_1 = param_1 + 3;
      do {
        bVar1 = param_1[-1];
        bVar2 = param_1[-2];
        bVar3 = param_1[-3];
        iVar6 = (int)((uint)bVar3 * 0x70 + 0x80 + (uint)bVar2 * -0x4a + (uint)bVar1 * -0x26) >> 8;
        iVar4 = iVar6 + 0x80;
        iVar14 = (int)((uint)bVar3 * -0x12 + 0x80 + (uint)bVar2 * -0x5e + (uint)bVar1 * 0x70) >> 8;
        iVar11 = iVar14 + 0x80;
        if ((-0x81 < iVar6) || (uVar23 = 0, 0xff < iVar4)) {
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          uVar23 = (undefined1)iVar4;
        }
        uVar25 = ((uint)bVar2 * 0x81 + (uint)bVar1 * 0x42 + 0x80 +
                  ((uint)bVar3 + (uint)bVar3 * 4) * 5 >> 8) + 0x10;
        if ((-0x81 < iVar14) || (uVar24 = 0, 0xff < iVar11)) {
          if (0xff < iVar11) {
            iVar11 = 0xff;
          }
          uVar24 = (undefined1)iVar11;
        }
        *puVar9 = *param_1;
        uVar19 = 0xff;
        if (uVar25 < 0x100) {
          uVar19 = (undefined1)uVar25;
        }
        puVar9[1] = uVar19;
        puVar9[2] = uVar23;
        puVar9[3] = uVar24;
        param_1 = param_1 + 4;
        puVar9 = puVar9 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  return;
}


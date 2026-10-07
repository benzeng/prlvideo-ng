
void FUN_1003ca660(undefined4 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  
  switch(*param_1) {
  case 0x53:
    lVar23 = *(long *)(param_1 + 4);
    uVar22 = (ulong)(param_4 * param_1[3]);
    uVar10 = param_3 * 2;
    bVar25 = (param_3 & 1) != 0;
    if (bVar25) {
      *param_2 = (uint)*(byte *)(lVar23 + (uVar10 | 1) + uVar22) << 8 |
                 (uint)*(byte *)(lVar23 + (uVar10 - 2) + uVar22) << 0x10 |
                 (uint)*(byte *)(lVar23 + uVar10 + uVar22) | 0xff000000;
      uVar10 = uVar10 + 2;
      param_5 = param_5 - 1;
    }
    uVar19 = (ulong)bVar25;
    uVar17 = param_5 >> 1;
    if (uVar17 != 0) {
      lVar24 = 0;
      uVar7 = uVar10;
      do {
        uVar15 = (uint)*(byte *)(lVar23 + uVar7 + uVar22) << 0x10 | 0xff000000;
        uVar8 = (uint)*(byte *)(lVar23 + (uVar7 + 2) + uVar22);
        param_2[uVar19 + lVar24 * 2] =
             (uint)*(byte *)(lVar23 + (uVar7 + 1) + uVar22) << 8 | uVar15 | uVar8;
        param_2[uVar19 + lVar24 * 2 + 1] =
             uVar15 | uVar8 | (uint)*(byte *)(lVar23 + (uVar7 + 3) + uVar22) << 8;
        uVar7 = uVar7 + 4;
        lVar24 = lVar24 + 1;
      } while ((uint)lVar24 < uVar17);
      uVar10 = uVar10 + uVar17 * 4;
      uVar19 = (ulong)((uVar17 * 2 - 2 | (uint)bVar25) + 2);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    bVar1 = *(byte *)(lVar23 + uVar10 + uVar22);
    bVar2 = *(byte *)(lVar23 + (uVar10 + 1) + uVar22);
    uVar10 = uVar10 + 2;
    goto LAB_1003ca899;
  case 0x54:
    lVar23 = *(long *)(param_1 + 4);
    uVar22 = (ulong)(param_4 * param_1[3]);
    uVar10 = param_3 * 2;
    uVar21 = (ulong)uVar10;
    bVar25 = (param_3 & 1) != 0;
    if (bVar25) {
      *param_2 = (uint)*(byte *)(lVar23 + uVar21 + uVar22) << 8 |
                 (uint)*(byte *)(lVar23 + (uVar10 - 1) + uVar22) << 0x10 |
                 (uint)*(byte *)(lVar23 + (uVar10 | 1) + uVar22) | 0xff000000;
      uVar21 = (ulong)(uVar10 + 2);
      param_5 = param_5 - 1;
    }
    uVar19 = (ulong)bVar25;
    uVar10 = (uint)uVar21;
    uVar17 = param_5 >> 1;
    if (uVar17 != 0) {
      lVar24 = 0;
      do {
        iVar6 = (int)uVar21;
        uVar7 = (uint)*(byte *)(lVar23 + (iVar6 + 1) + uVar22) << 0x10 | 0xff000000;
        uVar15 = (uint)*(byte *)(lVar23 + (iVar6 + 3) + uVar22);
        param_2[uVar19 + lVar24 * 2] =
             (uint)*(byte *)(lVar23 + uVar21 + uVar22) << 8 | uVar7 | uVar15;
        param_2[uVar19 + lVar24 * 2 + 1] =
             uVar7 | uVar15 | (uint)*(byte *)(lVar23 + (iVar6 + 2) + uVar22) << 8;
        uVar21 = (ulong)(iVar6 + 4);
        lVar24 = lVar24 + 1;
      } while ((uint)lVar24 < uVar17);
      uVar10 = uVar10 + uVar17 * 4;
      uVar19 = (ulong)((uVar17 * 2 - 2 | (uint)bVar25) + 2);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    bVar1 = *(byte *)(lVar23 + (uVar10 + 1) + uVar22);
    bVar2 = *(byte *)(lVar23 + uVar10 + uVar22);
    uVar10 = uVar10 + 3;
LAB_1003ca899:
    param_2[uVar19] =
         (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)*(byte *)(lVar23 + uVar10 + uVar22) |
         0xff000000;
    break;
  case 0x55:
    lVar23 = (ulong)(param_4 * param_1[3]) + *(long *)(param_1 + 4);
    uVar12 = 0;
    uVar11 = 2;
    uVar18 = 1;
    uVar20 = 3;
    goto LAB_1003ca906;
  case 0x56:
    lVar23 = (ulong)(param_4 * param_1[3]) + *(long *)(param_1 + 4);
    uVar12 = 1;
    uVar11 = 3;
    uVar18 = 0;
    uVar20 = 2;
LAB_1003ca906:
    FUN_1003dba00(lVar23,param_2,uVar12,uVar11,uVar18,uVar20,param_3,param_5);
    break;
  case 0x57:
    if (param_3 < param_5 + param_3) {
      lVar23 = *(long *)(param_1 + 4);
      iVar6 = param_1[3];
      uVar10 = param_1[1];
      uVar17 = param_1[2];
      iVar5 = uVar17 * iVar6 + param_3 + (param_4 >> 1) * (uVar10 >> 1);
      uVar7 = 0;
      do {
        iVar9 = *(byte *)(lVar23 + (ulong)((uVar17 >> 1) * (uVar10 >> 1) + iVar5 + (param_3 >> 1)))
                - 0x80;
        iVar4 = *(byte *)(lVar23 + (ulong)((param_3 >> 1) + iVar5)) - 0x80;
        iVar16 = (uint)*(byte *)(lVar23 + (ulong)(iVar6 * param_4 + param_3)) * 0x12a;
        uVar15 = iVar4 * 0x199 + -0x1220 + iVar16 >> 8;
        uVar8 = iVar4 * -0xd0 + iVar16 + -0x1220 + iVar9 * -100 >> 8;
        uVar3 = iVar9 * 0x204 + -0x1220 + iVar16 >> 8;
        if ((int)uVar15 < 0) {
          uVar15 = uVar7;
        }
        if ((int)uVar8 < 0) {
          uVar8 = uVar7;
        }
        if ((int)uVar3 < 0) {
          uVar3 = uVar7;
        }
        uVar13 = uVar15 << 0x10;
        if (0xfe < (int)uVar15) {
          uVar13 = 0xff0000;
        }
        uVar15 = uVar8 << 8;
        if (0xfe < (int)uVar8) {
          uVar15 = 0xff00;
        }
        uVar8 = uVar3 | 0xff000000;
        if (0xfe < (int)uVar3) {
          uVar8 = 0xff0000ff;
        }
        *param_2 = uVar8 | uVar15 | uVar13;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x58:
    iVar5 = param_1[3];
    iVar9 = (param_4 >> 1) * param_1[1];
    iVar6 = param_1[2] * iVar5 + param_3 * 2;
    if (param_3 < param_5 + param_3) {
      lVar23 = *(long *)(param_1 + 4);
      do {
        iVar4 = *(byte *)(lVar23 + (ulong)((param_3 & 0xfffffffe) + iVar6 + iVar9)) - 0x80;
        iVar16 = *(byte *)(lVar23 + (ulong)((param_3 & 0xfffffffe) + iVar9 + 1 + iVar6)) - 0x80;
        iVar14 = (uint)*(byte *)(lVar23 + (ulong)(iVar5 * param_4 + param_3)) * 0x12a;
        uVar10 = iVar16 * 0x199 + -0x1220 + iVar14 >> 8;
        iVar16 = iVar16 * -0xd0 + iVar14 + -0x1220 + iVar4 * -100 >> 8;
        uVar17 = iVar4 * 0x204 + -0x1220 + iVar14 >> 8;
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        if ((int)uVar17 < 0) {
          uVar17 = 0;
        }
        uVar7 = uVar10 << 0x10;
        if (0xfe < (int)uVar10) {
          uVar7 = 0xff0000;
        }
        uVar10 = iVar16 << 8;
        if (0xfe < iVar16) {
          uVar10 = 0xff00;
        }
        uVar15 = uVar17 | 0xff000000;
        if (0xfe < (int)uVar17) {
          uVar15 = 0xff0000ff;
        }
        *param_2 = uVar15 | uVar10 | uVar7;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x59:
    iVar5 = param_1[3];
    iVar9 = (param_4 >> 1) * param_1[1];
    iVar6 = param_1[2] * iVar5 + param_3 * 2;
    if (param_3 < param_5 + param_3) {
      lVar23 = *(long *)(param_1 + 4);
      do {
        iVar4 = *(byte *)(lVar23 + (ulong)(iVar9 + 1 + iVar6 + (param_3 & 0xfffffffe))) - 0x80;
        iVar16 = *(byte *)(lVar23 + (ulong)((param_3 & 0xfffffffe) + iVar6 + iVar9)) - 0x80;
        iVar14 = (uint)*(byte *)(lVar23 + (ulong)(iVar5 * param_4 + param_3)) * 0x12a;
        uVar10 = iVar16 * 0x199 + -0x1220 + iVar14 >> 8;
        iVar16 = iVar16 * -0xd0 + iVar14 + -0x1220 + iVar4 * -100 >> 8;
        uVar17 = iVar4 * 0x204 + -0x1220 + iVar14 >> 8;
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        if ((int)uVar17 < 0) {
          uVar17 = 0;
        }
        uVar7 = uVar10 << 0x10;
        if (0xfe < (int)uVar10) {
          uVar7 = 0xff0000;
        }
        uVar10 = iVar16 << 8;
        if (0xfe < iVar16) {
          uVar10 = 0xff00;
        }
        uVar15 = uVar17 | 0xff000000;
        if (0xfe < (int)uVar17) {
          uVar15 = 0xff0000ff;
        }
        *param_2 = uVar15 | uVar10 | uVar7;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    break;
  case 0x5b:
    if (param_5 != 0) {
      lVar23 = *(long *)(param_1 + 4);
      lVar24 = (ulong)(param_4 * param_1[3]) + (ulong)(param_3 << 2);
      uVar21 = 0;
      do {
        iVar6 = (int)uVar21;
        iVar9 = *(byte *)(lVar23 + (ulong)(iVar6 + 2) + lVar24) - 0x80;
        iVar5 = *(byte *)(lVar23 + (ulong)(iVar6 + 3) + lVar24) - 0x80;
        iVar16 = (uint)*(byte *)(lVar23 + (ulong)(iVar6 + 1) + lVar24) * 0x12a;
        iVar6 = iVar5 * 0x199 + -0x1220 + iVar16 >> 8;
        iVar5 = iVar5 * -0xd0 + iVar16 + -0x1220 + iVar9 * -100 >> 8;
        uVar10 = iVar9 * 0x204 + -0x1220 + iVar16 >> 8;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        if (0xff < (int)uVar10) {
          uVar10 = 0xff;
        }
        uVar17 = iVar6 << 0x10;
        if (0xfe < iVar6) {
          uVar17 = 0xff0000;
        }
        uVar7 = iVar5 << 8;
        if (0xfe < iVar5) {
          uVar7 = 0xff00;
        }
        *(uint *)((long)param_2 + uVar21) =
             (uint)*(byte *)(lVar23 + (uVar21 & 0xffffffff) + lVar24) << 0x18 | uVar10 | uVar17 |
             uVar7;
        uVar21 = uVar21 + 4;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  return;
}


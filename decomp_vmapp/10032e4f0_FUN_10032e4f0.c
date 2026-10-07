
void * FUN_10032e4f0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  ushort uVar10;
  uint uVar11;
  long *plVar12;
  int *piVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  long *plVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ushort local_48;
  byte local_46;
  undefined8 local_40;
  void *local_38;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 8);
    plVar17 = (long *)(param_1 + 8);
    do {
      while (plVar12 = plVar4, *(ulong *)(param_2 + 8) <= (ulong)plVar12[4]) {
        plVar4 = (long *)*plVar12;
        plVar17 = plVar12;
        if ((long *)*plVar12 == (long *)0x0) goto LAB_10032e550;
      }
      plVar1 = plVar12 + 1;
      plVar12 = plVar17;
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10032e550:
    if ((plVar12 != (long *)(param_1 + 8)) && ((ulong)plVar12[4] <= *(ulong *)(param_2 + 8))) {
      return (void *)plVar12[5];
    }
  }
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0) {
    uVar6 = 0x76;
    uVar8 = 0;
    uVar11 = uVar6;
    if (*(int *)(param_2 + 0x10) != 0) {
      piVar13 = &DAT_100b39d64;
      do {
        if (*piVar13 == *(int *)(param_2 + 0x10)) {
          uVar6 = *(uint *)(&DAT_100b39d60 + uVar8 * 0x24);
          uVar11 = uVar6;
          if ((int)uVar6 < 0x65) {
            if (uVar6 == 0) {
              uVar11 = 1;
            }
            else if (uVar6 == 7) {
              uVar6 = 7;
              uVar11 = 8;
            }
          }
          else if ((int)uVar6 < 0x69) {
            if (uVar6 == 0x65) {
              uVar11 = 0x66;
            }
            else if (uVar6 == 0x67) {
              uVar11 = 0x68;
            }
          }
          else if (uVar6 == 0x69) {
            uVar11 = 0x6a;
          }
          else if (uVar6 == 0x71) {
            uVar11 = 0x72;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        piVar13 = piVar13 + 9;
        uVar6 = 0x8e;
        uVar11 = uVar6;
      } while (uVar8 < 0x3d);
    }
    uVar19 = uVar11;
    if (*(char *)(DAT_1011c8478 + 0x36) == '\0') {
      uVar19 = uVar6;
    }
    if (uVar11 == uVar6) {
      uVar19 = uVar6;
    }
    uVar6 = *(uint *)(param_2 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x24);
    uVar16 = *(uint *)(param_2 + 0x28) & 0xffffff;
    uVar18 = 0;
    uVar15 = 0;
    if ((uVar6 & 0x2000) != 0) {
      uVar15 = ~(ushort)(uVar6 >> 0xd) & 0x10;
    }
    uVar14 = (ushort)(uVar11 >> 0x10);
    if ((uVar6 & 0x800000) != 0) {
      uVar18 = ~(uVar14 >> 3) & 0x80;
    }
    local_48 = (ushort)(uVar6 >> 2) & 0x200 | uVar14 >> 2 & 0x100 | (ushort)((uVar11 & 4) << 8) |
               (ushort)(*(uint *)(param_2 + 0x28) >> 2) & 0x800 | uVar18 |
               (ushort)((uVar6 & 0xffffff) >> 0xb) & 0x40 | (ushort)((uVar6 & 0xffffff) >> 0xc) & 1
               | (ushort)(uVar16 >> 10) & 2 | (ushort)(uVar16 >> 8) & 4 |
               (ushort)((uVar6 & 0x224) != 0) << 3 | uVar15 |
               (ushort)(*(int *)(param_2 + 0x38) == 0x80) << 0xe;
    local_46 = 0;
    uVar16 = 1;
    if ((uVar6 & 0x800000) == 0) {
      iVar20 = 6;
      if ((uVar11 & 0x200) == 0) {
        iVar20 = (uVar11 >> 0x14 & 2) + 3;
      }
    }
    else {
      iVar20 = 1;
    }
    goto switchD_10032e939_caseD_1;
  }
  iVar20 = *(int *)(param_2 + 0x48);
  piVar13 = &DAT_100b3a62c;
  uVar8 = 0;
  do {
    uVar7 = uVar8;
    if ((((piVar13[-9] == iVar20) || (uVar7 = uVar8 + 1, piVar13[-6] == iVar20)) ||
        (uVar7 = uVar8 + 2, piVar13[-3] == iVar20)) || (uVar7 = uVar8 + 3, *piVar13 == iVar20)) {
      uVar19 = *(uint *)(&DAT_100b3a600 + uVar7 * 0xc);
      break;
    }
    uVar8 = uVar8 + 4;
    piVar13 = piVar13 + 0xc;
    uVar19 = 0x8e;
  } while (uVar8 < 0x74);
  uVar6 = *(uint *)(param_2 + 0x3c);
  uVar15 = 1;
  if ((uVar6 & 8) == 0) {
    uVar15 = -(ushort)(iVar2 - 2U < 4) & 1;
  }
  uVar11 = *(uint *)(param_2 + 0x30);
  uVar18 = 0;
  if (1 < uVar11) {
    uVar18 = ((ushort)*(undefined4 *)(param_2 + 0x44) & 1) * 2;
  }
  uVar14 = 0x40;
  if ((uVar6 & 0x40) == 0) {
    uVar16 = 0x28;
    if ((int)uVar19 < 0x7d) {
      if ((int)uVar19 < 0x2f) {
        uVar8 = (ulong)uVar19;
        if (uVar19 < 0x2b) {
          if ((0x280000000U >> (uVar8 & 0x3f) & 1) != 0) goto switchD_10032e729_caseD_7d;
          if ((0x20100000000U >> (uVar8 & 0x3f) & 1) != 0) goto LAB_10032e7ba;
          if ((0x50000000000U >> (uVar8 & 0x3f) & 1) != 0) goto switchD_10032e729_caseD_86;
        }
      }
      else {
        if (uVar19 - 0x2f < 2) goto switchD_10032e729_caseD_7e;
        if (uVar19 - 0x3d < 2) goto switchD_10032e729_caseD_82;
      }
switchD_10032e729_caseD_7f:
      uVar16 = uVar19;
    }
    else {
      switch(uVar19) {
      case 0x7d:
switchD_10032e729_caseD_7d:
        uVar16 = 0x1f;
        break;
      case 0x7e:
switchD_10032e729_caseD_7e:
        uVar16 = 0x2f;
        break;
      default:
        goto switchD_10032e729_caseD_7f;
      case 0x82:
switchD_10032e729_caseD_82:
        uVar16 = 0x3d;
        break;
      case 0x86:
        break;
      }
    }
switchD_10032e729_caseD_86:
    uVar14 = 0;
    if ((uVar19 != uVar16) && (uVar14 = 0, (ulong)uVar19 - 0x78 < 0x16)) {
      uVar14 = (ushort)((~(uVar6 >> 5) & 1) << 6);
    }
  }
LAB_10032e7ba:
  uVar3 = (ushort)(uVar6 << 7);
  iVar20 = *(int *)(param_2 + 0x38);
  local_48 = 0;
  uVar10 = 0;
  if (((*(uint *)(param_2 + 0x14) < 5) && (uVar10 = 0, *(int *)(param_2 + 0x18) == 1)) &&
     ((uVar10 = 0, *(int *)(param_2 + 0x1c) == 1 &&
      ((uVar10 = 0, *(int *)(param_2 + 0x2c) == 1 && (uVar10 = 0, uVar11 == 1)))))) {
    uVar10 = (ushort)(uVar6 == 8) << 0xd;
  }
  if (((*(char *)(DAT_1011c8478 + 0x74) == '\0') && (iVar20 == 3)) && (iVar2 - 2U < 4)) {
    local_48 = (ushort)(0xffffff < *(uint *)(&DAT_100b398f4 + (ulong)uVar19 * 8)) << 0xf;
  }
  local_48 = local_48 |
             (ushort)(iVar20 == 0x80) << 0xe |
             uVar3 & 0x100 |
             uVar3 & 0xff |
             (ushort)((uVar6 & 0xffffff) >> 1) & 0x10 |
             (ushort)((uVar6 & 0xffffff) >> 4) & 8 | (ushort)(1 < uVar11) << 2 | uVar15 | uVar18 |
             (short)uVar6 * 2 & 0x20U | uVar14 | (ushort)(iVar20 == 2) << 10 |
             (ushort)((*(uint *)(param_2 + 0x44) & 2) << 10) | (ushort)((uVar6 & 4) << 10) | uVar10;
  local_46 = 0;
  if ((uVar6 & 4) != 0) {
    local_46 = (byte)*(undefined4 *)(param_2 + 0x50) & 3;
  }
  uVar16 = *(uint *)(param_2 + 0x4c);
  if (*(uint *)(DAT_1011c8478 + 0x80) < *(uint *)(param_2 + 0x4c)) {
    uVar16 = *(uint *)(DAT_1011c8478 + 0x80);
  }
  bVar5 = 1 < *(uint *)(param_2 + 0x2c);
  if (iVar2 == 5) {
    bVar5 = 6 < *(uint *)(param_2 + 0x2c);
  }
  iVar20 = 1;
  switch(iVar2) {
  case 1:
    break;
  case 2:
    iVar20 = (uint)bVar5 * 5 + 2;
    break;
  case 3:
    if (uVar16 < 2) {
      iVar20 = (uint)bVar5 * 5 + 3;
    }
    else {
      iVar20 = (uint)bVar5 * 5 + 4;
    }
    break;
  default:
    iVar20 = (uint)(iVar2 == 4) + (uint)(iVar2 == 4) * 4;
    break;
  case 5:
    iVar20 = (uint)bVar5 * 4 + 6;
  }
switchD_10032e939_caseD_1:
  pvVar9 = operator_new(0xd8);
  FUN_10032f040(pvVar9,*(undefined8 *)(param_2 + 8),uVar19,*(undefined4 *)(param_2 + 0x14),
                *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),uVar16,iVar20,
                &local_48);
  local_40 = *(undefined8 *)(param_2 + 8);
  local_38 = pvVar9;
  FUN_10032f970(param_1,&local_40);
  return pvVar9;
}


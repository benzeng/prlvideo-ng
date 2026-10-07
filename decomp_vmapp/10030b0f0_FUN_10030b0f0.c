
undefined1 FUN_10030b0f0(undefined8 *param_1,long param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  iVar10 = *(int *)((long)param_1 + 0x5c) - *(int *)((long)param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0xb);
  uVar5 = 0;
  iVar11 = *(int *)(param_1 + 1);
  iVar12 = *(int *)((long)param_1 + 0x14);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  while ((uVar7 = uVar4, param_2 != 0 && ((int)uVar5 < param_3))) {
    uVar15 = (ulong)uVar5;
    uVar5 = uVar5 + 1;
    uVar1 = *(ushort *)(param_2 + uVar15 * 2);
    uVar8 = (uint)uVar1;
    uVar4 = uVar7;
    if (uVar1 < 0x8191) {
      if (uVar1 == 0) break;
      if (uVar1 == 0xde1) {
        uVar4 = uVar8;
      }
    }
    else if (uVar1 < 0x8db9) {
      if (uVar1 < 0x8513) {
        if (uVar1 == 0x8191) {
          iVar12 = 1;
        }
        else if (uVar1 == 0x84f5) {
          uVar4 = uVar8;
        }
      }
      else {
        uVar4 = uVar8;
        if ((uVar1 != 0x8513) && (uVar4 = uVar7, uVar1 == 0x8814)) {
          iVar11 = 0x8814;
        }
      }
    }
    else if (uVar1 == 0x8db9) {
      iVar11 = 0x8c43;
    }
  }
  iVar9 = 0x8515;
  if (uVar7 != 0x8513) {
    iVar9 = *(int *)(param_1 + 2);
  }
  lVar6 = param_1[4];
  if (((((param_2 != 0) && (lVar6 != 0)) && (uVar7 == *(uint *)((long)param_1 + 0xc))) &&
      ((iVar12 == *(int *)((long)param_1 + 0x14) && (iVar9 == *(int *)(param_1 + 2))))) &&
     (iVar11 == *(int *)(param_1 + 1))) {
    return 1;
  }
  *(uint *)((long)param_1 + 0xc) = uVar7;
  *(int *)((long)param_1 + 0x14) = iVar12;
  *(int *)(param_1 + 2) = iVar9;
  *(int *)(param_1 + 1) = iVar11;
  if (lVar6 != 0) {
    uVar15 = (ulong)DAT_1011c8100;
    uVar13 = 0;
    if (DAT_1011c8100 != 0) {
      do {
        puVar14 = *(undefined8 **)(DAT_1011c80f8 + uVar13 * 8);
        if ((puVar14 != (undefined8 *)0x0) && ((undefined8 *)puVar14[4] == param_1)) {
          if ((param_1 == (undefined8 *)0x0) || (puVar14[2] == 0)) {
            puVar14[4] = 0;
          }
          else {
            lVar6 = FUN_1002adb30(*puVar14);
            FUN_1002fab50(*puVar14,puVar14 + 0x14cd,1);
            puVar14[4] = 0;
            if (lVar6 != puVar14[2]) {
              FUN_1002adb30(*puVar14,lVar6);
            }
          }
          uVar15 = (ulong)DAT_1011c8100;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar15);
      lVar6 = param_1[4];
      if (lVar6 == 0) goto LAB_10030b2f3;
    }
    FUN_1002fa3f0(*param_1,lVar6);
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_10030b2f3:
  puVar14 = param_1 + 10;
  if (param_1[5] != 0) {
    FUN_1002fa3f0(*param_1);
    param_1[5] = 0;
    *(undefined1 *)puVar14 = 0;
  }
  if (param_1[6] != 0) {
    FUN_1002fa3f0(*param_1);
    param_1[6] = 0;
    *(undefined1 *)puVar14 = 0;
  }
  if (param_1[7] != 0) {
    FUN_1002fa3f0(*param_1);
    param_1[7] = 0;
    *(undefined1 *)puVar14 = 0;
  }
  if (param_1[8] != 0) {
    FUN_1002fa3f0(*param_1);
    param_1[8] = 0;
    *(undefined1 *)puVar14 = 0;
  }
  if (param_1[9] != 0) {
    FUN_1002fa3f0(*param_1);
    param_1[9] = 0;
    *(undefined1 *)puVar14 = 0;
  }
  if ((0 < iVar10) && (0 < iVar2 - iVar3)) {
    uVar15 = 1;
    if (*(int *)((long)param_1 + 0xc) == 0x8513) {
      uVar15 = 6;
    }
    uVar13 = 0;
    do {
      lVar6 = FUN_1002fa390(*param_1,iVar10,iVar2 - iVar3,0x84f5,*(undefined4 *)(param_1 + 1));
      param_1[uVar13 + 4] = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar15);
  }
  return 1;
}



undefined8 FUN_10034a9f0(long param_1,ushort *param_2)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  undefined1 local_8110 [32840];
  undefined1 local_c8 [48];
  undefined1 local_98 [96];
  long *local_38;
  
  uVar12 = *(uint *)(param_2 + 2);
  if ((ulong)uVar12 < 0x10) {
    return 9;
  }
  uVar5 = *(uint *)(param_2 + 6);
  uVar15 = (ulong)uVar5;
  if ((ulong)uVar12 - 0x10 >> 2 < uVar15) {
    return 9;
  }
  if (uVar5 != 0) {
    if (uVar5 < 2) {
      return 4;
    }
    if (uVar5 != *(uint *)(param_2 + 10)) {
      return 4;
    }
  }
  uVar4 = *param_2;
  puVar18 = (uint *)0x0;
  if (uVar4 < 0x4a) {
    puVar18 = (uint *)0x0;
    if (uVar4 - 0x24 < 4) {
LAB_10034aa6e:
      uVar12 = (uVar12 - 0x10) + uVar5 * -4;
      if (uVar12 < 4) {
        return 9;
      }
      uVar17 = (ulong)*(uint *)(param_2 + uVar15 * 2 + 8);
      if (((ulong)uVar12 - 4) / 0xc < uVar17) {
        return 9;
      }
      uVar12 = (uVar12 - 4) + *(uint *)(param_2 + uVar15 * 2 + 8) * -0xc;
      if (uVar12 < 4) {
        return 9;
      }
      puVar18 = (uint *)(param_2 + uVar15 * 2 + uVar17 * 6 + 10);
      uVar5 = *puVar18;
      if (((ulong)uVar12 - 4) / 0xc < (ulong)uVar5) {
        return 9;
      }
      if ((ushort)(uVar4 - 0x4b) < 2) {
        uVar12 = (uVar12 - 4) + uVar5 * -0xc;
        if (uVar12 < 4) {
          return 9;
        }
        puVar18 = (uint *)(param_2 + uVar15 * 2 + uVar17 * 6 + (ulong)uVar5 * 6 + 0xc);
        if (((ulong)uVar12 - 4) / 0xc < (ulong)*puVar18) {
          return 9;
        }
      }
    }
  }
  else {
    uVar7 = uVar4 - 0x4a;
    if (uVar7 < 0x21) {
      if ((0x18e000000U >> ((ulong)uVar7 & 0x3f) & 1) == 0) {
        if ((7UL >> ((ulong)uVar7 & 0x3f) & 1) != 0) goto LAB_10034aa6e;
      }
      else {
        uVar12 = (uVar12 - 0x10) + uVar5 * -4;
        if (uVar12 < 4) {
          return 9;
        }
        uVar17 = (ulong)*(uint *)(param_2 + uVar15 * 2 + 8);
        if (((ulong)uVar12 - 4) / 0x14 < uVar17) {
          return 9;
        }
        uVar12 = (uVar12 - 4) + *(uint *)(param_2 + uVar15 * 2 + 8) * -0x14;
        if (uVar12 < 4) {
          return 9;
        }
        uVar5 = *(uint *)(param_2 + uVar15 * 2 + uVar17 * 10 + 10);
        if (((ulong)uVar12 - 4) / 0x14 < (ulong)uVar5) {
          return 9;
        }
        puVar18 = (uint *)0x0;
        if ((ushort)(uVar4 - 0x69) < 2) {
          uVar12 = (uVar12 - 4) + uVar5 * -0x14;
          if (uVar12 < 4) {
            return 9;
          }
          puVar18 = (uint *)0x0;
          if (((ulong)uVar12 - 4) / 0x14 <
              (ulong)*(uint *)(param_2 + uVar15 * 2 + uVar17 * 10 + (ulong)uVar5 * 10 + 0xc)) {
            return 9;
          }
        }
      }
    }
  }
  puVar1 = (uint *)(param_2 + 4);
  if (uVar4 == 0x4a) {
    uVar15 = (ulong)*puVar18;
    uVar12 = (uVar12 - 4) + *puVar18 * -0xc;
    if (uVar12 < 8) {
      return 9;
    }
    uVar5 = puVar18[uVar15 * 3 + 1];
    uVar17 = (ulong)uVar5;
    if ((ulong)uVar12 - 8 >> 4 < uVar17) {
      return 9;
    }
    uVar12 = uVar12 - (uVar5 << 4 | 8);
    if (uVar12 < 4) {
      return 9;
    }
    puVar3 = puVar18 + uVar15 * 3 + uVar17 * 4 + 3;
    if ((ulong)uVar12 - 4 >> 2 < (ulong)*puVar3) {
      return 9;
    }
    uVar12 = *puVar1;
    if (*(long **)(param_1 + 0x12858) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x12858);
      plVar16 = (long *)(param_1 + 0x12858);
      do {
        while (plVar13 = plVar11, *(uint *)(plVar13 + 4) < uVar12) {
          plVar2 = plVar13 + 1;
          plVar13 = plVar16;
          plVar11 = (long *)*plVar2;
          if ((long *)*plVar2 == (long *)0x0) goto LAB_10034ae79;
        }
        plVar11 = (long *)*plVar13;
        plVar16 = plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
LAB_10034ae79:
      if ((plVar13 != (long *)(param_1 + 0x12858)) && (*(uint *)(plVar13 + 4) <= uVar12)) {
        return 7;
      }
    }
    puVar9 = operator_new(0x38);
    *puVar9 = uVar12;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[0xc] = 0xffffffff;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    if (((puVar18[uVar15 * 3 + 1] == 0) || (3 < *puVar3 - 1)) || (4 < puVar18[uVar15 * 3 + 2] + 1))
    {
LAB_10034af48:
      operator_delete(puVar9);
      return 4;
    }
    puVar9[0xc] = puVar18[uVar15 * 3 + 2];
    iVar8 = FUN_10034f8c0(puVar9);
    if (iVar8 != 0) {
      if (*(long *)(puVar9 + 2) != 0) {
        operator_delete__((void *)(*(long *)(puVar9 + 2) + -8));
      }
      goto LAB_10034af48;
    }
    if (*puVar3 != 0) {
      uVar14 = 0;
      do {
        uVar12 = puVar18[uVar17 * 4 + uVar15 * 3 + uVar14 + 4];
        puVar9[uVar14 + 8] = uVar12 - puVar9[uVar14 + 4];
        puVar9[uVar14 + 4] = uVar12;
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar3);
    }
    puVar10 = (undefined8 *)FUN_10034fd50(param_1 + 0x12850,puVar1);
    *puVar10 = puVar9;
  }
  else if (uVar4 == 0x27) {
    uVar5 = *puVar18;
    uVar12 = (uVar12 - 4) + uVar5 * -0xc;
    if (uVar12 < 8) {
      return 9;
    }
    if (((ulong)uVar12 - 8) / 0xc < (ulong)puVar18[(ulong)uVar5 * 3 + 1]) {
      return 9;
    }
    uVar12 = *puVar1;
    if (*(long **)(param_1 + 0x12858) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x12858);
      plVar16 = (long *)(param_1 + 0x12858);
      do {
        while (plVar13 = plVar11, *(uint *)(plVar13 + 4) < uVar12) {
          plVar2 = plVar13 + 1;
          plVar13 = plVar16;
          plVar11 = (long *)*plVar2;
          if ((long *)*plVar2 == (long *)0x0) goto LAB_10034addd;
        }
        plVar11 = (long *)*plVar13;
        plVar16 = plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
LAB_10034addd:
      if ((plVar13 != (long *)(param_1 + 0x12858)) && (*(uint *)(plVar13 + 4) <= uVar12)) {
        return 7;
      }
    }
    puVar9 = operator_new(0x38);
    *puVar9 = uVar12;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[0xc] = 0xffffffff;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    if (puVar18[(ulong)uVar5 * 3 + 1] == 0) goto LAB_10034af48;
    iVar8 = FUN_10034f7b0(puVar9);
    if (iVar8 != 0) {
      if (*(long *)(puVar9 + 2) != 0) {
        operator_delete__((void *)(*(long *)(puVar9 + 2) + -8));
      }
      goto LAB_10034af48;
    }
    uVar12 = puVar18[(ulong)uVar5 * 3 + 2];
    if (uVar12 != 0) {
      puVar9[8] = uVar12 - puVar9[4];
      puVar9[4] = uVar12;
    }
    puVar10 = (undefined8 *)FUN_10034fd50(param_1 + 0x12850,puVar1);
    *puVar10 = puVar9;
  }
  if (*(int *)(param_2 + 6) == 0) {
    return 0;
  }
  uVar12 = *puVar1;
  for (puVar18 = *(uint **)(param_1 + 0x2810 +
                           (ulong)((uVar12 >> 0xc ^ uVar12) & 0xfff ^ uVar12 >> 0x18) * 8);
      puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 4)) {
    if (*puVar18 == uVar12) {
      if (*(long *)(puVar18 + 2) != 0) {
        return 7;
      }
      break;
    }
  }
  local_38 = (long *)0x0;
  uVar4 = *param_2;
  if (uVar4 < 0x4a) {
    if (1 < uVar4 - 0x26) {
      if (uVar4 == 0x24) {
switchD_10034b0ca_caseD_63:
        plVar11 = operator_new(0x1d0);
        FUN_1003ac9e0(plVar11,uVar12);
        local_38 = plVar11;
        goto switchD_10034b08c_default;
      }
      if (uVar4 != 0x25) goto switchD_10034b08c_default;
switchD_10034b0ca_caseD_64:
      plVar11 = operator_new(0x1f8);
      FUN_1003acd20(plVar11,uVar12);
      local_38 = plVar11;
      goto switchD_10034b08c_default;
    }
switchD_10034b08c_caseD_4a:
    plVar11 = operator_new(0x1e8);
    FUN_1003ad120(plVar11,uVar12);
    local_38 = plVar11;
  }
  else {
    if (0x62 < uVar4) {
      switch(uVar4) {
      case 99:
        goto switchD_10034b0ca_caseD_63;
      case 100:
        goto switchD_10034b0ca_caseD_64;
      case 0x65:
        goto switchD_10034b08c_caseD_4a;
      default:
        goto switchD_10034b08c_default;
      case 0x69:
        goto switchD_10034b08c_caseD_4b;
      case 0x6a:
        goto switchD_10034b08c_caseD_4c;
      }
    }
    switch(uVar4) {
    case 0x4a:
      goto switchD_10034b08c_caseD_4a;
    case 0x4b:
switchD_10034b08c_caseD_4b:
      plVar11 = operator_new(0x208);
      FUN_1003ad500(plVar11,uVar12);
      local_38 = plVar11;
      break;
    case 0x4c:
switchD_10034b08c_caseD_4c:
      plVar11 = operator_new(0x1f8);
      FUN_1003ad9d0(plVar11,uVar12);
      local_38 = plVar11;
      break;
    case 0x4d:
      plVar11 = operator_new(0x1c0);
      FUN_1003ade30(plVar11,uVar12);
      local_38 = plVar11;
    }
  }
switchD_10034b08c_default:
  plVar11 = local_38;
  FUN_1003ae3d0(local_98);
  iVar8 = FUN_1003ae510(local_98,plVar11,param_2 + 8);
  if (iVar8 == 0) {
    FUN_1003b10a0(local_c8);
    iVar8 = FUN_1003b11a0(local_c8,plVar11);
    if (iVar8 == 0) {
      FUN_1003b5250(local_8110);
      iVar8 = FUN_1003b5310(local_8110,plVar11);
      if (iVar8 == 0) {
        bVar6 = false;
        FUN_10034fe50(param_1 + 0x2800,*puVar1,&local_38);
      }
      else {
        bVar6 = true;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      FUN_1003b5300(local_8110);
    }
    else {
      bVar6 = true;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
    FUN_1003b1190(local_c8);
  }
  else {
    bVar6 = true;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  FUN_1003ae480(local_98);
  if (!bVar6) {
    return 0;
  }
  return 2;
}


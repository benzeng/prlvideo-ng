
void FUN_10036f1f0(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  long *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  undefined4 *local_58;
  uint local_4c;
  uint local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar13 = *(undefined4 **)(param_1 + 0x1130);
  puVar4 = *(undefined4 **)(param_1 + 0x1138);
  if (puVar4 != puVar13) {
    puVar13 = (undefined4 *)
              ((~((long)puVar4 + (-4 - (long)puVar13)) & 0xfffffffffffffffcU) + (long)puVar4);
    *(undefined4 **)(param_1 + 0x1138) = puVar13;
  }
  puVar20 = *(undefined4 **)(param_1 + 0x1070);
  puVar4 = *(undefined4 **)(param_1 + 0x1078);
  if (puVar4 != puVar20) {
    puVar20 = (undefined4 *)
              ((~((long)puVar4 + (-4 - (long)puVar20)) & 0xfffffffffffffffcU) + (long)puVar4);
    *(undefined4 **)(param_1 + 0x1078) = puVar20;
  }
  lVar19 = param_1 + 0x1070;
  lVar1 = param_1 + 0x1130;
  lVar22 = param_2[3];
  if ((int)param_2[0x1a] != 0) {
    local_4c = 0x8000005f;
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
      puVar20 = *(undefined4 **)(param_1 + 0x1078);
    }
    else {
      *puVar13 = 0x8000005f;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
    local_4c = 0x8000005f;
    if (puVar20 == *(undefined4 **)(param_1 + 0x1080)) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar20 = 0x8000005f;
      *(undefined4 **)(param_1 + 0x1078) = puVar20 + 1;
    }
  }
  if (*(int *)((long)param_2 + 0x8c) != 0) {
    local_4c = 0x80000046;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000046;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
    local_4c = 0x80000046;
    puVar13 = *(undefined4 **)(param_1 + 0x1078);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1080)) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar13 = 0x80000046;
      *(undefined4 **)(param_1 + 0x1078) = puVar13 + 1;
    }
  }
  if ((int)param_2[0x12] != 0) {
    local_4c = 0x80000052;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000052;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
    local_4c = 0x80000052;
    puVar13 = *(undefined4 **)(param_1 + 0x1078);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1080)) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar13 = 0x80000052;
      *(undefined4 **)(param_1 + 0x1078) = puVar13 + 1;
    }
  }
  if (((*(char *)(DAT_1011c8478 + 0x37) == '\0') && (*(int *)((long)param_2 + 0xbc) != 0)) &&
     ((*(int *)((long)param_2 + 0x94) != 0 || ((int)param_2[6] == 0)))) {
    local_4c = 1;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 1;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
    local_4c = *(uint *)((long)param_2 + 0xbc);
    puVar9 = *(uint **)(param_1 + 0x1078);
    puVar8 = *(uint **)(param_1 + 0x1080);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1078);
      puVar8 = *(uint **)(param_1 + 0x1080);
    }
    else {
      *puVar9 = local_4c;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1078) = puVar9;
    }
    local_4c = 0x8000002d;
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar9 = 0x8000002d;
      *(uint **)(param_1 + 0x1078) = puVar9 + 1;
    }
  }
  if (*(int *)((long)param_2 + 0x94) != 0) {
    local_4c = 0x80000056;
    puVar8 = *(uint **)(param_1 + 0x1138);
    puVar9 = *(uint **)(param_1 + 0x1140);
    if (puVar8 == puVar9) {
      FUN_10027f110(lVar1,&local_4c);
      puVar8 = *(uint **)(param_1 + 0x1138);
      puVar9 = *(uint **)(param_1 + 0x1140);
    }
    else {
      *puVar8 = 0x80000056;
      puVar8 = puVar8 + 1;
      *(uint **)(param_1 + 0x1138) = puVar8;
    }
    local_4c = *(uint *)((long)param_2 + 0x94);
    if (puVar8 == puVar9) {
      FUN_10027f110(lVar1,&local_4c);
      puVar8 = *(uint **)(param_1 + 0x1138);
      puVar9 = *(uint **)(param_1 + 0x1140);
    }
    else {
      *puVar8 = local_4c;
      puVar8 = puVar8 + 1;
      *(uint **)(param_1 + 0x1138) = puVar8;
    }
    local_4c = 0x80000066;
    if (puVar8 == puVar9) {
      FUN_10027f110(lVar1,&local_4c);
      puVar8 = *(uint **)(param_1 + 0x1138);
      puVar9 = *(uint **)(param_1 + 0x1140);
    }
    else {
      *puVar8 = 0x80000066;
      puVar8 = puVar8 + 1;
      *(uint **)(param_1 + 0x1138) = puVar8;
    }
    local_4c = *(uint *)((long)param_2 + 0x9c);
    if (puVar8 == puVar9) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar8 = local_4c;
      *(uint **)(param_1 + 0x1138) = puVar8 + 1;
    }
    uVar18 = (ulong)*(uint *)(*param_2 + 0xf0);
    if (*(uint *)(*param_2 + 0xf0) != 0) {
      local_4c = 0x80000054;
      puVar13 = *(undefined4 **)(param_1 + 0x1138);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar13 = 0x80000054;
        *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
      }
      iVar16 = 0x10;
      do {
        if ((uVar18 & 1) != 0) {
          local_4c = FUN_100399a60(*(undefined8 *)(param_1 + 0x538),iVar16,0,0);
          puVar8 = *(uint **)(param_1 + 0x1138);
          if (puVar8 == *(uint **)(param_1 + 0x1140)) {
            FUN_10027f110(lVar1,&local_4c);
          }
          else {
            *puVar8 = local_4c;
            *(uint **)(param_1 + 0x1138) = puVar8 + 1;
          }
        }
        if (3 < iVar16 - 0xfU) break;
        uVar18 = uVar18 >> 1;
        iVar16 = iVar16 + 1;
      } while ((int)uVar18 != 0);
    }
    goto LAB_10036fe88;
  }
  local_4c = *(uint *)(param_2 + 6);
  puVar8 = *(uint **)(param_1 + 0x1138);
  if (puVar8 == *(uint **)(param_1 + 0x1140)) {
    FUN_10027f110(lVar1,&local_4c);
  }
  else {
    *puVar8 = local_4c;
    *(uint **)(param_1 + 0x1138) = puVar8 + 1;
  }
  if (*(int *)((long)param_2 + 0x34) != 0) {
    local_4c = 0x80000064;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000064;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
  }
  if ((int)param_2[7] != 0) {
    local_4c = 0x80000073;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000073;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
  }
  if ((int)param_2[0xd] != 0) {
    local_4c = 0x80000053;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000053;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
  }
  if ((int)param_2[6] == 0) {
    if (*(int *)((long)param_2 + 0x3c) != 0) {
      local_4c = 0x8000006e;
      puVar13 = *(undefined4 **)(param_1 + 0x1138);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar13 = 0x8000006e;
        *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
      }
    }
    if (*(int *)((long)param_2 + 0xcc) != 2) {
      local_4c = 0x80000068;
      puVar9 = *(uint **)(param_1 + 0x1138);
      puVar8 = *(uint **)(param_1 + 0x1140);
      if (puVar9 == puVar8) {
        FUN_10027f110(lVar1,&local_4c);
        puVar9 = *(uint **)(param_1 + 0x1138);
        puVar8 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar9 = 0x80000068;
        puVar9 = puVar9 + 1;
        *(uint **)(param_1 + 0x1138) = puVar9;
      }
      local_4c = *(uint *)((long)param_2 + 0xcc);
      if (puVar9 == puVar8) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar9 = local_4c;
        *(uint **)(param_1 + 0x1138) = puVar9 + 1;
      }
    }
    if (*(int *)((long)param_2 + 0x84) != 0) {
      local_4c = 0x80000056;
      puVar13 = *(undefined4 **)(param_1 + 0x1138);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar13 = 0x80000056;
        *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
      }
    }
    if ((int)param_2[0x17] != 0) {
      local_4c = 0x80000062;
      puVar9 = *(uint **)(param_1 + 0x1138);
      puVar8 = *(uint **)(param_1 + 0x1140);
      if (puVar9 == puVar8) {
        FUN_10027f110(lVar1,&local_4c);
        puVar9 = *(uint **)(param_1 + 0x1138);
        puVar8 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar9 = 0x80000062;
        puVar9 = puVar9 + 1;
        *(uint **)(param_1 + 0x1138) = puVar9;
      }
      local_4c = *(uint *)(param_2 + 0x17);
      if (puVar9 == puVar8) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar9 = local_4c;
        *(uint **)(param_1 + 0x1138) = puVar9 + 1;
      }
    }
    if (*(int *)((long)param_2 + 0x6c) != 0) {
      local_4c = 0x80000043;
      puVar8 = *(uint **)(param_1 + 0x1138);
      puVar9 = *(uint **)(param_1 + 0x1140);
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = 0x80000043;
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = *(uint *)(param_2 + 0xe);
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = local_4c;
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = *(uint *)((long)param_2 + 0x74);
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = local_4c;
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = *(uint *)(param_2 + 0xf);
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = local_4c;
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = *(uint *)((long)param_2 + 0x7c);
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar8 = local_4c;
        *(uint **)(param_1 + 0x1138) = puVar8 + 1;
      }
    }
    if (*(int *)((long)param_2 + 100) != 0) {
      local_4c = 0x8000004c;
      puVar13 = *(undefined4 **)(param_1 + 0x1138);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
        FUN_10027f110(lVar1,&local_4c);
      }
      else {
        *puVar13 = 0x8000004c;
        *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
      }
      if ((int)param_2[0x10] != 0) {
        local_4c = 0x8000004e;
        puVar13 = *(undefined4 **)(param_1 + 0x1138);
        if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
          FUN_10027f110(lVar1,&local_4c);
        }
        else {
          *puVar13 = 0x8000004e;
          *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
        }
      }
      local_48[2] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      plVar14 = *(long **)(param_2[3] + 0x1f8);
      plVar11 = (long *)(param_2[3] + 0x200);
      uVar17 = 0;
      if (plVar14 != plVar11) {
        do {
          if (*(char *)(plVar14[5] + 0x74) != '\0') {
            local_48[*(uint *)(plVar14[5] + 0x70)] = local_48[*(uint *)(plVar14[5] + 0x70)] + 1;
            uVar17 = uVar17 + 1;
          }
          plVar21 = plVar14;
          plVar7 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar21[2];
              bVar24 = (long *)*plVar14 != plVar21;
              plVar21 = plVar14;
            } while (bVar24);
          }
          else {
            do {
              plVar14 = plVar7;
              plVar7 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        } while ((plVar14 != plVar11) && (uVar17 < 8));
      }
      puVar8 = *(uint **)(param_1 + 0x1138);
      puVar9 = *(uint **)(param_1 + 0x1140);
      if (puVar8 == puVar9) {
        local_4c = local_48[2];
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = local_48[2];
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = local_48[1];
      if (puVar8 == puVar9) {
        FUN_10027f110(lVar1,&local_4c);
        puVar8 = *(uint **)(param_1 + 0x1138);
        puVar9 = *(uint **)(param_1 + 0x1140);
      }
      else {
        *puVar8 = local_48[1];
        puVar8 = puVar8 + 1;
        *(uint **)(param_1 + 0x1138) = puVar8;
      }
      local_4c = local_48[0];
      if (puVar8 == puVar9) goto LAB_10036fc61;
      *puVar8 = local_48[0];
      *(uint **)(param_1 + 0x1138) = puVar8 + 1;
    }
  }
  else if ((int)param_2[0x11] != 0) {
    local_4c = 0x8000005a;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
LAB_10036fc61:
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x8000005a;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
  }
  if ((int)param_2[0x15] != 0) {
    local_4c = 0x80000054;
    puVar9 = *(uint **)(param_1 + 0x1138);
    puVar8 = *(uint **)(param_1 + 0x1140);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar1,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1138);
      puVar8 = *(uint **)(param_1 + 0x1140);
    }
    else {
      *puVar9 = 0x80000054;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1138) = puVar9;
    }
    local_4c = *(uint *)(param_2 + 0x15);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar9 = local_4c;
      *(uint **)(param_1 + 0x1138) = puVar9 + 1;
    }
    puVar8 = (uint *)(lVar22 + 0x869c);
    lVar23 = 0;
    do {
      if ((*(uint *)(param_2 + 0x15) >> ((uint)lVar23 & 0x1f) & 1) != 0) {
        uVar17 = *puVar8;
        uVar3 = puVar8[0xd];
        puVar9 = *(uint **)(param_1 + 0x1138);
        puVar12 = *(uint **)(param_1 + 0x1140);
        if (puVar9 == puVar12) {
          local_4c = uVar17;
          FUN_10027f110(lVar1,&local_4c);
          puVar9 = *(uint **)(param_1 + 0x1138);
          puVar12 = *(uint **)(param_1 + 0x1140);
        }
        else {
          *puVar9 = uVar17;
          puVar9 = puVar9 + 1;
          *(uint **)(param_1 + 0x1138) = puVar9;
        }
        local_4c = *(uint *)((long)param_2 + (ulong)((uVar17 & 0xffff) + 5) * 4 + 0x30);
        if (puVar9 == puVar12) {
          FUN_10027f110(lVar1,&local_4c);
          puVar9 = *(uint **)(param_1 + 0x1138);
          puVar12 = *(uint **)(param_1 + 0x1140);
        }
        else {
          *puVar9 = local_4c;
          puVar9 = puVar9 + 1;
          *(uint **)(param_1 + 0x1138) = puVar9;
        }
        local_4c = 0x80000074;
        if (puVar9 == puVar12) {
          FUN_10027f110(lVar1,&local_4c);
        }
        else {
          *puVar9 = 0x80000074;
          *(uint **)(param_1 + 0x1138) = puVar9 + 1;
        }
        if (uVar3 != 0) {
          puVar9 = *(uint **)(param_1 + 0x1138);
          local_4c = uVar3;
          if (puVar9 == *(uint **)(param_1 + 0x1140)) {
            FUN_10027f110(lVar1,&local_4c);
          }
          else {
            *puVar9 = uVar3;
            *(uint **)(param_1 + 0x1138) = puVar9 + 1;
          }
        }
      }
      lVar23 = lVar23 + 1;
      puVar8 = puVar8 + 0x40;
    } while (lVar23 != 8);
  }
  if ((int)param_2[8] != 0) {
    local_4c = 0x80000070;
    puVar13 = *(undefined4 **)(param_1 + 0x1138);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar13 = 0x80000070;
      *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
    }
  }
LAB_10036fe88:
  uVar17 = *(uint *)(param_2 + 0x18);
  if (uVar17 != 0) {
    puVar8 = *(uint **)(param_1 + 0x1138);
    local_4c = uVar17;
    if (puVar8 == *(uint **)(param_1 + 0x1140)) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar8 = uVar17;
      *(uint **)(param_1 + 0x1138) = puVar8 + 1;
    }
  }
  uVar17 = *(uint *)(param_2 + 0x1c);
  if (uVar17 != 1) {
    puVar8 = *(uint **)(param_1 + 0x1078);
    local_4c = uVar17;
    if (puVar8 == *(uint **)(param_1 + 0x1080)) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar8 = uVar17;
      *(uint **)(param_1 + 0x1078) = puVar8 + 1;
    }
  }
  if (param_2[1] == 0) {
    if (0 < *(int *)((long)param_2 + 0xa4)) {
      uVar17 = 0;
      iVar16 = 0x11b;
      do {
        FUN_100370cc0();
        FUN_100370cc0();
        if ((*(uint *)(param_2 + 0x15) >> (uVar17 & 0x1f) & 1) != 0) {
          local_4c = FUN_100399a60(*(undefined8 *)(param_1 + 0x538),uVar17,0,
                                   *(undefined4 *)(lVar22 + 0x8270 + (ulong)(iVar16 - 3) * 4));
          puVar8 = *(uint **)(param_1 + 0x1078);
          if (puVar8 == *(uint **)(param_1 + 0x1080)) {
            FUN_10027f110(lVar19,&local_4c);
          }
          else {
            *puVar8 = local_4c;
            *(uint **)(param_1 + 0x1078) = puVar8 + 1;
          }
        }
        uVar17 = uVar17 + 1;
        iVar16 = iVar16 + 0x40;
      } while ((int)uVar17 < *(int *)((long)param_2 + 0xa4));
    }
  }
  else {
    local_4c = 0x80000050;
    puVar9 = *(uint **)(param_1 + 0x1078);
    puVar8 = *(uint **)(param_1 + 0x1080);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1078);
      puVar8 = *(uint **)(param_1 + 0x1080);
    }
    else {
      *puVar9 = 0x80000050;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1078) = puVar9;
    }
    local_4c = *(uint *)(param_2 + 0x14);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar9 = local_4c;
      *(uint **)(param_1 + 0x1078) = puVar9 + 1;
    }
    uVar17 = *(uint *)((undefined8 *)param_2[1] + 0x1c);
    if (uVar17 != 0) {
      uVar3 = **(uint **)param_2[1];
      local_4c = 0x80000054;
      puVar13 = *(undefined4 **)(param_1 + 0x1078);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1080)) {
        FUN_10027f110(lVar19,&local_4c);
      }
      else {
        *puVar13 = 0x80000054;
        *(undefined4 **)(param_1 + 0x1078) = puVar13 + 1;
      }
      local_58 = (undefined4 *)(lVar22 + 0x86d0);
      uVar18 = 0;
      do {
        if ((uVar17 & 1) != 0) {
          uVar10 = 0;
          if (uVar3 < 0xffff0200) {
            uVar10 = *local_58;
          }
          local_4c = FUN_100399a60(*(undefined8 *)(param_1 + 0x538),uVar18 & 0xffffffff,
                                   *(undefined1 *)(param_2[1] + 0xbc),uVar10);
          puVar8 = *(uint **)(param_1 + 0x1078);
          if (puVar8 == *(uint **)(param_1 + 0x1080)) {
            FUN_10027f110(lVar19,&local_4c);
          }
          else {
            *puVar8 = local_4c;
            *(uint **)(param_1 + 0x1078) = puVar8 + 1;
          }
        }
        uVar18 = uVar18 + 1;
        if (0xf < uVar18) break;
        local_58 = local_58 + 0x40;
        uVar6 = uVar17 >> 1;
        uVar17 = uVar17 >> 1;
      } while (uVar6 != 0);
    }
  }
  if (*(int *)((long)param_2 + 0xc4) != 0) {
    local_4c = 0x80000047;
    puVar9 = *(uint **)(param_1 + 0x1078);
    puVar8 = *(uint **)(param_1 + 0x1080);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1078);
      puVar8 = *(uint **)(param_1 + 0x1080);
    }
    else {
      *puVar9 = 0x80000047;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1078) = puVar9;
    }
    local_4c = *(uint *)((long)param_2 + 0xc4);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar9 = local_4c;
      *(uint **)(param_1 + 0x1078) = puVar9 + 1;
    }
  }
  if (*(int *)((long)param_2 + 0xd4) != 0) {
    local_4c = 0x80000058;
    puVar13 = *(undefined4 **)(param_1 + 0x1078);
    if (puVar13 == *(undefined4 **)(param_1 + 0x1080)) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar13 = 0x80000058;
      *(undefined4 **)(param_1 + 0x1078) = puVar13 + 1;
    }
  }
  if ((0x13f < *(uint *)(DAT_1011c8478 + 4)) && (*(int *)((long)param_2 + 0xe4) != 0)) {
    local_4c = 0x80000041;
    puVar9 = *(uint **)(param_1 + 0x1078);
    puVar8 = *(uint **)(param_1 + 0x1080);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1078);
      puVar8 = *(uint **)(param_1 + 0x1080);
    }
    else {
      *puVar9 = 0x80000041;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1078) = puVar9;
    }
    local_4c = *(uint *)((long)param_2 + 0xe4);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar19,&local_4c);
    }
    else {
      *puVar9 = local_4c;
      *(uint **)(param_1 + 0x1078) = puVar9 + 1;
    }
  }
  uVar17 = (int)param_2[0x1d] << 8 | *(uint *)((long)param_2 + 0xec);
  if (uVar17 != 0) {
    local_4c = 0x80000044;
    puVar9 = *(uint **)(param_1 + 0x1138);
    puVar8 = *(uint **)(param_1 + 0x1140);
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar1,&local_4c);
      puVar9 = *(uint **)(param_1 + 0x1138);
      puVar8 = *(uint **)(param_1 + 0x1140);
    }
    else {
      *puVar9 = 0x80000044;
      puVar9 = puVar9 + 1;
      *(uint **)(param_1 + 0x1138) = puVar9;
    }
    local_4c = uVar17;
    if (puVar9 == puVar8) {
      FUN_10027f110(lVar1,&local_4c);
    }
    else {
      *puVar9 = uVar17;
      *(uint **)(param_1 + 0x1138) = puVar9 + 1;
    }
  }
  if ((*(char *)(DAT_1011c8478 + 0x2d) != '\0') || (*(char *)(DAT_1011c8478 + 0x49) != '\0')) {
    plVar14 = *(long **)(*(long *)(param_1 + 0x540) + 0x20);
    lVar19 = *plVar14;
    lVar22 = plVar14[1];
    if (lVar19 != lVar22) {
      bVar24 = false;
      do {
        cVar2 = *(char *)(lVar19 + 4);
        if (((cVar2 == '\x04') && (*(char *)(DAT_1011c8478 + 0x49) != '\0')) ||
           (((byte)(cVar2 - 0xfU) < 2 && (*(char *)(DAT_1011c8478 + 0x2d) != '\0')))) {
          lVar23 = *param_2;
          if (lVar23 == 0) {
LAB_100370469:
            if (!bVar24) {
              local_4c = 0x8000004d;
              puVar13 = *(undefined4 **)(param_1 + 0x1138);
              if (puVar13 == *(undefined4 **)(param_1 + 0x1140)) {
                FUN_10027f110(lVar1,&local_4c);
              }
              else {
                *puVar13 = 0x8000004d;
                *(undefined4 **)(param_1 + 0x1138) = puVar13 + 1;
              }
              cVar2 = *(char *)(lVar19 + 4);
              bVar24 = true;
            }
            local_4c = (uint)CONCAT12(cVar2,*(undefined2 *)(lVar19 + 6));
            puVar8 = *(uint **)(param_1 + 0x1138);
            if (puVar8 == *(uint **)(param_1 + 0x1140)) {
              FUN_10027f110(lVar1,&local_4c);
            }
            else {
              *puVar8 = local_4c;
              *(uint **)(param_1 + 0x1138) = puVar8 + 1;
            }
            lVar22 = plVar14[1];
          }
          else {
            pcVar15 = *(char **)(lVar23 + 0xc0);
            pcVar5 = *(char **)(lVar23 + 200);
            if (pcVar15 == pcVar5) {
LAB_100370460:
              if (pcVar15 != pcVar5) goto LAB_100370469;
            }
            else {
              do {
                if ((*pcVar15 == *(char *)(lVar19 + 6)) && (pcVar15[1] == *(char *)(lVar19 + 7)))
                goto LAB_100370460;
                pcVar15 = pcVar15 + 3;
              } while (pcVar5 != pcVar15);
            }
          }
        }
        lVar19 = lVar19 + 8;
      } while (lVar19 != lVar22);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


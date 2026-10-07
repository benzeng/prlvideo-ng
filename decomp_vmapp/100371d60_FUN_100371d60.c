
/* WARNING: Type propagation algorithm not settling */

void FUN_100371d60(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                  long param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  long *plVar17;
  uint uVar18;
  bool bVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d4;
  undefined1 local_d0 [64];
  long local_90;
  void *local_88;
  long alStack_80 [2];
  void *pvStack_70;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long local_38;
  
  uVar22 = (undefined4)((ulong)param_2 >> 0x20);
  uVar21 = (undefined4)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *param_3;
  if (*(uint **)(lVar4 + 0x270) != *(uint **)(lVar4 + 0x278)) {
    uVar11 = **(uint **)(lVar4 + 0x270);
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    alStack_80[1] = 0;
    pvStack_70 = (void *)0x0;
    local_88 = (void *)0x0;
    alStack_80[0] = 0;
    local_48 = 0;
    if (uVar11 != 0) {
      uVar18 = 0;
      plVar9 = *(long **)(param_5 + 0x1f8);
      do {
        if (plVar9 == (long *)(param_5 + 0x200)) break;
        lVar14 = plVar9[5];
        if (*(char *)(lVar14 + 0x74) != '\0') {
          uVar12 = (ulong)*(uint *)(lVar14 + 0x70);
          local_90 = lVar14;
          if ((long *)alStack_80[uVar12 * 3] == (long *)alStack_80[uVar12 * 3 + 1]) {
            FUN_100374940(&local_88 + uVar12 * 3,&local_90);
          }
          else {
            *(long *)alStack_80[uVar12 * 3] = lVar14;
            alStack_80[uVar12 * 3] = alStack_80[uVar12 * 3] + 8;
          }
          uVar18 = uVar18 + 1;
        }
        plVar15 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar17 = (long *)plVar9[2];
            bVar19 = (long *)*plVar17 != plVar9;
            plVar9 = plVar17;
          } while (bVar19);
        }
        else {
          do {
            plVar17 = plVar15;
            plVar15 = (long *)*plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
        plVar9 = plVar17;
      } while (uVar18 < uVar11);
    }
    FUN_10038dac0(local_d0);
    lVar14 = param_5 + 0x2f0;
    FUN_10038dc10(lVar14,local_d0,3);
    local_d4 = *(undefined4 *)(param_5 + 0x849c);
    FUN_10038e060(param_3 + 0xb1,&local_d4);
    plVar9 = param_3 + 0x113;
    if ((void *)alStack_80[0] != local_88) {
      uVar12 = 0;
      uVar13 = 1;
      do {
        plVar15 = plVar9;
        puVar5 = *(undefined4 **)((long)local_88 + uVar12 * 8);
        *(undefined4 *)plVar15 = *puVar5;
        *(undefined4 *)((long)plVar15 + 4) = puVar5[1];
        *(undefined4 *)(plVar15 + 1) = puVar5[2];
        *(undefined4 *)((long)plVar15 + 0xc) = puVar5[3];
        *(undefined4 *)(plVar15 + 2) = puVar5[4];
        *(undefined4 *)((long)plVar15 + 0x14) = puVar5[5];
        *(undefined4 *)(plVar15 + 3) = puVar5[6];
        *(undefined4 *)((long)plVar15 + 0x1c) = puVar5[7];
        *(undefined4 *)(plVar15 + 4) = puVar5[8];
        *(undefined4 *)((long)plVar15 + 0x24) = puVar5[9];
        *(undefined4 *)(plVar15 + 5) = puVar5[10];
        *(undefined4 *)((long)plVar15 + 0x2c) = puVar5[0xb];
        *(undefined4 *)(plVar15 + 6) = puVar5[0xc];
        *(undefined4 *)((long)plVar15 + 0x34) = puVar5[0xd];
        *(undefined4 *)(plVar15 + 7) = puVar5[0xe];
        *(undefined4 *)((long)plVar15 + 0x3c) = puVar5[0xf];
        *(undefined4 *)(plVar15 + 8) = puVar5[0x10];
        *(undefined4 *)((long)plVar15 + 0x44) = puVar5[0x11];
        *(undefined4 *)(plVar15 + 9) = puVar5[0x12];
        *(undefined4 *)((long)plVar15 + 0x4c) = puVar5[0x13];
        *(undefined4 *)(plVar15 + 10) = puVar5[0x14];
        *(undefined4 *)((long)plVar15 + 0x54) = puVar5[0x15];
        *(undefined4 *)(plVar15 + 0xb) = puVar5[0x16];
        *(undefined4 *)((long)plVar15 + 0x5c) = puVar5[0x17];
        *(undefined4 *)(plVar15 + 0xc) = puVar5[0x18];
        *(undefined4 *)((long)plVar15 + 100) = puVar5[0x19];
        *(undefined4 *)(plVar15 + 0xd) = puVar5[0x1a];
        *(undefined4 *)((long)plVar15 + 0x6c) = puVar5[0x1b];
        lVar20 = FUN_10038ded0(lVar14,plVar15);
        *plVar15 = lVar20;
        plVar15[1] = CONCAT44(uVar22,uVar21);
        lVar20 = FUN_10038ded0(local_d0,plVar15 + 2);
        plVar15[2] = lVar20;
        plVar15[3] = CONCAT44(uVar22,uVar21);
        bVar19 = uVar13 < (ulong)(alStack_80[0] - (long)local_88 >> 3);
        uVar12 = uVar13;
        plVar9 = plVar15 + 0xe;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (bVar19);
      plVar9 = plVar15 + 0xe;
    }
    if (local_68 != pvStack_70) {
      uVar12 = 0;
      uVar13 = 1;
      do {
        plVar15 = plVar9;
        puVar5 = *(undefined4 **)((long)pvStack_70 + uVar12 * 8);
        *(undefined4 *)plVar15 = *puVar5;
        *(undefined4 *)((long)plVar15 + 4) = puVar5[1];
        *(undefined4 *)(plVar15 + 1) = puVar5[2];
        *(undefined4 *)((long)plVar15 + 0xc) = puVar5[3];
        *(undefined4 *)(plVar15 + 2) = puVar5[4];
        *(undefined4 *)((long)plVar15 + 0x14) = puVar5[5];
        *(undefined4 *)(plVar15 + 3) = puVar5[6];
        *(undefined4 *)((long)plVar15 + 0x1c) = puVar5[7];
        *(undefined4 *)(plVar15 + 4) = puVar5[8];
        *(undefined4 *)((long)plVar15 + 0x24) = puVar5[9];
        *(undefined4 *)(plVar15 + 5) = puVar5[10];
        *(undefined4 *)((long)plVar15 + 0x2c) = puVar5[0xb];
        *(undefined4 *)(plVar15 + 6) = puVar5[0xc];
        *(undefined4 *)((long)plVar15 + 0x34) = puVar5[0xd];
        *(undefined4 *)(plVar15 + 7) = puVar5[0xe];
        *(undefined4 *)((long)plVar15 + 0x3c) = puVar5[0xf];
        *(undefined4 *)(plVar15 + 8) = puVar5[0x10];
        *(undefined4 *)((long)plVar15 + 0x44) = puVar5[0x11];
        *(undefined4 *)(plVar15 + 9) = puVar5[0x12];
        *(undefined4 *)((long)plVar15 + 0x4c) = puVar5[0x13];
        *(undefined4 *)(plVar15 + 10) = puVar5[0x14];
        *(undefined4 *)((long)plVar15 + 0x54) = puVar5[0x15];
        *(undefined4 *)(plVar15 + 0xb) = puVar5[0x16];
        *(undefined4 *)((long)plVar15 + 0x5c) = puVar5[0x17];
        *(undefined4 *)(plVar15 + 0xc) = puVar5[0x18];
        *(undefined4 *)((long)plVar15 + 100) = puVar5[0x19];
        *(undefined4 *)(plVar15 + 0xd) = puVar5[0x1a];
        *(undefined4 *)((long)plVar15 + 0x6c) = puVar5[0x1b];
        lVar20 = FUN_10038ded0(lVar14,plVar15);
        *plVar15 = lVar20;
        plVar15[1] = CONCAT44(uVar22,uVar21);
        lVar20 = FUN_10038ded0(local_d0,plVar15 + 2);
        plVar15[2] = lVar20;
        plVar15[3] = CONCAT44(uVar22,uVar21);
        bVar19 = uVar13 < (ulong)((long)local_68 - (long)pvStack_70 >> 3);
        uVar12 = uVar13;
        plVar9 = plVar15 + 0xe;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (bVar19);
      plVar9 = plVar15 + 0xe;
    }
    pvVar16 = pvStack_50;
    if (pvStack_50 != local_58) {
      uVar12 = 0;
      uVar13 = 1;
      do {
        puVar5 = *(undefined4 **)((long)local_58 + uVar12 * 8);
        *(undefined4 *)plVar9 = *puVar5;
        *(undefined4 *)((long)plVar9 + 4) = puVar5[1];
        *(undefined4 *)(plVar9 + 1) = puVar5[2];
        *(undefined4 *)((long)plVar9 + 0xc) = puVar5[3];
        *(undefined4 *)(plVar9 + 2) = puVar5[4];
        *(undefined4 *)((long)plVar9 + 0x14) = puVar5[5];
        *(undefined4 *)(plVar9 + 3) = puVar5[6];
        *(undefined4 *)((long)plVar9 + 0x1c) = puVar5[7];
        *(undefined4 *)(plVar9 + 4) = puVar5[8];
        *(undefined4 *)((long)plVar9 + 0x24) = puVar5[9];
        *(undefined4 *)(plVar9 + 5) = puVar5[10];
        *(undefined4 *)((long)plVar9 + 0x2c) = puVar5[0xb];
        *(undefined4 *)(plVar9 + 6) = puVar5[0xc];
        *(undefined4 *)((long)plVar9 + 0x34) = puVar5[0xd];
        *(undefined4 *)(plVar9 + 7) = puVar5[0xe];
        *(undefined4 *)((long)plVar9 + 0x3c) = puVar5[0xf];
        fVar2 = (float)puVar5[0x10];
        *(float *)(plVar9 + 8) = fVar2;
        *(undefined4 *)((long)plVar9 + 0x44) = puVar5[0x11];
        *(undefined4 *)(plVar9 + 9) = puVar5[0x12];
        *(undefined4 *)((long)plVar9 + 0x4c) = puVar5[0x13];
        *(undefined4 *)(plVar9 + 10) = puVar5[0x14];
        *(undefined4 *)((long)plVar9 + 0x54) = puVar5[0x15];
        *(undefined4 *)(plVar9 + 0xb) = puVar5[0x16];
        *(undefined4 *)((long)plVar9 + 0x5c) = puVar5[0x17];
        *(undefined4 *)(plVar9 + 0xc) = puVar5[0x18];
        *(undefined4 *)((long)plVar9 + 100) = puVar5[0x19];
        *(undefined4 *)(plVar9 + 0xd) = puVar5[0x1a];
        *(undefined4 *)((long)plVar9 + 0x6c) = puVar5[0x1b];
        *(float *)(param_3 + 0xb1) = fVar2 + *(float *)(param_3 + 0xb1);
        *(float *)((long)param_3 + 0x58c) =
             *(float *)((long)plVar9 + 0x44) + *(float *)((long)param_3 + 0x58c);
        *(float *)(param_3 + 0xb2) = *(float *)(plVar9 + 9) + *(float *)(param_3 + 0xb2);
        *(float *)((long)param_3 + 0x594) =
             *(float *)((long)plVar9 + 0x4c) + *(float *)((long)param_3 + 0x594);
        lVar20 = FUN_10038ded0(lVar14,plVar9);
        *plVar9 = lVar20;
        plVar9[1] = CONCAT44(uVar22,uVar21);
        lVar20 = FUN_10038ded0(local_d0,plVar9 + 2);
        plVar9[2] = lVar20;
        plVar9[3] = CONCAT44(uVar22,uVar21);
        plVar9 = plVar9 + 0xe;
        bVar19 = uVar13 < (ulong)((long)pvStack_50 - (long)local_58 >> 3);
        uVar12 = uVar13;
        pvVar16 = local_58;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (bVar19);
    }
    if (pvVar16 != (void *)0x0) {
      if (pvStack_50 != pvVar16) {
        pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)pvVar16)) & 0xfffffffffffffff8U) +
                             (long)pvStack_50);
      }
      operator_delete(pvVar16);
    }
    if (pvStack_70 != (void *)0x0) {
      if (local_68 != pvStack_70) {
        local_68 = (void *)((~((long)local_68 + (-8 - (long)pvStack_70)) & 0xfffffffffffffff8U) +
                           (long)local_68);
      }
      operator_delete(pvStack_70);
    }
    if (local_88 != (void *)0x0) {
      if ((void *)alStack_80[0] != local_88) {
        alStack_80[0] =
             (~(alStack_80[0] + (-8 - (long)local_88)) & 0xfffffffffffffff8U) + alStack_80[0];
      }
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar4 + 0x288) != *(long *)(lVar4 + 0x290)) {
    *(undefined4 *)(param_3 + 0xa9) = *(undefined4 *)(param_5 + 0x1b8);
    *(undefined4 *)((long)param_3 + 0x54c) = *(undefined4 *)(param_5 + 0x1bc);
    *(undefined4 *)(param_3 + 0xaa) = *(undefined4 *)(param_5 + 0x1c0);
    *(undefined4 *)((long)param_3 + 0x554) = *(undefined4 *)(param_5 + 0x1c4);
    *(undefined4 *)(param_3 + 0xab) = *(undefined4 *)(param_5 + 0x1c8);
    *(undefined4 *)((long)param_3 + 0x55c) = *(undefined4 *)(param_5 + 0x1cc);
    *(undefined4 *)(param_3 + 0xac) = *(undefined4 *)(param_5 + 0x1d0);
    *(undefined4 *)((long)param_3 + 0x564) = *(undefined4 *)(param_5 + 0x1d4);
    *(undefined4 *)(param_3 + 0xad) = *(undefined4 *)(param_5 + 0x1d8);
    *(undefined4 *)((long)param_3 + 0x56c) = *(undefined4 *)(param_5 + 0x1dc);
    *(undefined4 *)(param_3 + 0xae) = *(undefined4 *)(param_5 + 0x1e0);
    *(undefined4 *)((long)param_3 + 0x574) = *(undefined4 *)(param_5 + 0x1e4);
    *(undefined4 *)(param_3 + 0xaf) = *(undefined4 *)(param_5 + 0x1e8);
    *(undefined4 *)((long)param_3 + 0x57c) = *(undefined4 *)(param_5 + 0x1ec);
    *(undefined4 *)(param_3 + 0xb0) = *(undefined4 *)(param_5 + 0x1f0);
    *(undefined4 *)((long)param_3 + 0x584) = *(undefined4 *)(param_5 + 500);
  }
  bVar19 = true;
  if (*(long *)(lVar4 + 0x2b8) == *(long *)(lVar4 + 0x2c0)) {
    bVar19 = *(long *)(lVar4 + 0x2a0) != *(long *)(lVar4 + 0x2a8);
  }
  lVar14 = *(long *)(lVar4 + 0x2d0);
  lVar20 = *(long *)(lVar4 + 0x2d8);
  lVar6 = *(long *)(lVar4 + 0x300);
  lVar7 = *(long *)(lVar4 + 0x308);
  if (((bVar19) || (lVar14 != lVar20)) || (lVar6 != lVar7)) {
    FUN_10038de10(&local_118,param_5 + 0x2f0,param_5 + 0x4270);
    param_3[0xb3] = local_118;
    param_3[0xb4] = lStack_110;
    param_3[0xb5] = local_108;
    param_3[0xb6] = lStack_100;
    param_3[0xb7] = local_f8;
    param_3[0xb8] = lStack_f0;
    param_3[0xb9] = local_e8;
    param_3[0xba] = lStack_e0;
    if (lVar14 != lVar20) {
      FUN_10038dc10(param_3 + 0xb3,param_3 + 0xbb,3);
    }
    if ((lVar6 != lVar7) && (iVar3 = **(int **)(lVar4 + 0x300), iVar3 != 0)) {
      plVar9 = param_3 + 0x187;
      iVar8 = 0;
      do {
        iVar1 = iVar8 + 1;
        FUN_10038de10(&local_158,param_5 + 0x2f0,param_5 + 0x270 + (ulong)(iVar8 + 0x101) * 0x40);
        *plVar9 = local_158;
        plVar9[1] = lStack_150;
        plVar9[2] = local_148;
        plVar9[3] = lStack_140;
        plVar9[4] = local_138;
        plVar9[5] = lStack_130;
        plVar9[6] = local_128;
        plVar9[7] = lStack_120;
        FUN_10038dc10(plVar9,plVar9 + 8,3);
        plVar9 = plVar9 + 0x10;
        iVar8 = iVar1;
      } while (iVar3 != iVar1);
    }
  }
  if (*(long *)(lVar4 + 0x2e8) != *(long *)(lVar4 + 0x2f0)) {
    if (*(char *)(*param_3 + 0x404) == '\0') {
      *(undefined4 *)(param_3 + 0xcb) = *(undefined4 *)(param_5 + 0x330);
      *(undefined4 *)((long)param_3 + 0x65c) = *(undefined4 *)(param_5 + 0x334);
      *(undefined4 *)(param_3 + 0xcc) = *(undefined4 *)(param_5 + 0x338);
      *(undefined4 *)((long)param_3 + 0x664) = *(undefined4 *)(param_5 + 0x33c);
      *(undefined4 *)(param_3 + 0xcd) = *(undefined4 *)(param_5 + 0x340);
      *(undefined4 *)((long)param_3 + 0x66c) = *(undefined4 *)(param_5 + 0x344);
      *(undefined4 *)(param_3 + 0xce) = *(undefined4 *)(param_5 + 0x348);
      *(undefined4 *)((long)param_3 + 0x674) = *(undefined4 *)(param_5 + 0x34c);
      *(undefined4 *)(param_3 + 0xcf) = *(undefined4 *)(param_5 + 0x350);
      *(undefined4 *)((long)param_3 + 0x67c) = *(undefined4 *)(param_5 + 0x354);
      *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_5 + 0x358);
      *(undefined4 *)((long)param_3 + 0x684) = *(undefined4 *)(param_5 + 0x35c);
      *(undefined4 *)(param_3 + 0xd1) = *(undefined4 *)(param_5 + 0x360);
      *(undefined4 *)((long)param_3 + 0x68c) = *(undefined4 *)(param_5 + 0x364);
      *(undefined4 *)(param_3 + 0xd2) = *(undefined4 *)(param_5 + 0x368);
      *(undefined4 *)((long)param_3 + 0x694) = *(undefined4 *)(param_5 + 0x36c);
    }
    else {
      local_168 = *(undefined8 *)(param_5 + 0x198);
      local_160 = *(undefined8 *)(param_5 + 0x1a0);
      FUN_10038db60(param_3 + 0xcb,&local_168);
    }
  }
  if (*(long *)(lVar4 + 0x2a0) != *(long *)(lVar4 + 0x2a8)) {
    FUN_10038de10(&local_1a8,param_5 + 0x330,param_3 + 0xb3);
    param_3[0xc3] = local_1a8;
    param_3[0xc4] = lStack_1a0;
    param_3[0xc5] = local_198;
    param_3[0xc6] = lStack_190;
    param_3[199] = local_188;
    param_3[200] = lStack_180;
    param_3[0xc9] = local_178;
    param_3[0xca] = lStack_170;
  }
  puVar10 = *(uint **)(lVar4 + 0x318);
  uVar12 = (ulong)(*(long *)(lVar4 + 800) - (long)puVar10) >> 2;
  uVar11 = (uint)uVar12;
  while (uVar11 != 0) {
    uVar13 = (ulong)*puVar10;
    lVar14 = uVar13 * 0x40;
    lVar20 = (ulong)(*puVar10 + 0x10) * 0x40;
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd3) = *(undefined4 *)(param_5 + 0x270 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x69c) = *(undefined4 *)(param_5 + 0x274 + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd4) = *(undefined4 *)(param_5 + 0x278 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6a4) = *(undefined4 *)(param_5 + 0x27c + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd5) = *(undefined4 *)(param_5 + 0x280 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6ac) = *(undefined4 *)(param_5 + 0x284 + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd6) = *(undefined4 *)(param_5 + 0x288 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6b4) = *(undefined4 *)(param_5 + 0x28c + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd7) = *(undefined4 *)(param_5 + 0x290 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6bc) = *(undefined4 *)(param_5 + 0x294 + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd8) = *(undefined4 *)(param_5 + 0x298 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6c4) = *(undefined4 *)(param_5 + 0x29c + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xd9) = *(undefined4 *)(param_5 + 0x2a0 + lVar20);
    *(undefined4 *)((long)param_3 + lVar14 + 0x6cc) = *(undefined4 *)(param_5 + 0x2a4 + lVar20);
    *(undefined4 *)(param_3 + uVar13 * 8 + 0xda) = *(undefined4 *)(param_5 + 0x2a8 + lVar20);
    puVar10 = puVar10 + 1;
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar11;
    *(undefined4 *)((long)param_3 + lVar14 + 0x6d4) = *(undefined4 *)(param_5 + 0x2ac + lVar20);
  }
  if (*(long *)(lVar4 + 0x330) != *(long *)(lVar4 + 0x338)) {
    fVar2 = *(float *)(param_5 + 0x8304);
    *(undefined4 *)(param_3 + 0x185) = *(undefined4 *)(param_5 + 0x8308);
    *(float *)((long)param_3 + 0xc2c) = fVar2;
    *(float *)(param_3 + 0x186) = DAT_100b39678 / (fVar2 - *(float *)(param_5 + 0x8300));
  }
  (*DAT_1011c6e18)(param_4,*(undefined4 *)(*param_3 + 0x414),
                   (long)param_3 + (ulong)*(uint *)(*param_3 + 0x40c) * 4 + 0x548);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



void FUN_10033b320(long param_1,uint param_2,uint param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  void *pvVar12;
  undefined4 *puVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  bool bVar23;
  byte bVar24;
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  void *local_130;
  undefined4 local_128;
  undefined4 local_124;
  void *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  
  bVar24 = 0;
  local_34 = param_2;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar10 = *(long **)(param_1 + 0x18);
    plVar16 = (long *)(param_1 + 0x18);
    do {
      while (plVar17 = plVar10, param_2 <= *(uint *)(plVar17 + 4)) {
        plVar10 = (long *)*plVar17;
        plVar16 = plVar17;
        if ((long *)*plVar17 == (long *)0x0) goto LAB_10033b380;
      }
      plVar1 = plVar17 + 1;
      plVar10 = (long *)*plVar1;
      plVar17 = plVar16;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033b380:
    if ((plVar17 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar17 + 4) <= param_2)) {
      puVar7 = (undefined8 *)plVar17[5];
      FUN_10033d850(puVar7);
      goto LAB_10033b3cb;
    }
  }
  puVar7 = operator_new(0xe8);
  ___bzero(puVar7,0xe8);
  puVar8 = (undefined8 *)FUN_10033f8c0(param_1 + 0x10,&local_34);
  *puVar8 = puVar7;
LAB_10033b3cb:
  if (param_3 != 0) {
    if (param_3 == 1) {
      puVar9 = operator_new(0x10);
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar8 = (undefined8 *)*puVar7;
      if ((puVar8 != puVar9) && (puVar8 != (undefined8 *)0x0)) {
        operator_delete(puVar8);
      }
      *puVar7 = puVar9;
      uVar3 = *(undefined8 *)(param_4 + 0x1a0);
      *puVar9 = *(undefined8 *)(param_4 + 0x198);
      puVar9[1] = uVar3;
      puVar9 = operator_new(8);
      *puVar9 = 0;
      puVar8 = (undefined8 *)puVar7[1];
      if ((puVar8 != puVar9) && (puVar8 != (undefined8 *)0x0)) {
        operator_delete(puVar8);
      }
      puVar7[1] = puVar9;
      *(undefined4 *)puVar9 = *(undefined4 *)(param_4 + 0x1a8);
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(param_4 + 0x1ac);
      puVar9 = operator_new(0x10);
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar8 = (undefined8 *)puVar7[2];
      if ((puVar8 != puVar9) && (puVar8 != (undefined8 *)0x0)) {
        operator_delete(puVar8);
      }
      puVar7[2] = puVar9;
      uVar3 = *(undefined8 *)(param_4 + 0xbb50);
      puVar9[1] = *(undefined8 *)(param_4 + 0xbb58);
      *puVar9 = uVar3;
      puVar9 = operator_new(0x40);
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar8 = (undefined8 *)puVar7[3];
      if ((puVar8 != puVar9) && (puVar8 != (undefined8 *)0x0)) {
        operator_delete(puVar8);
      }
      puVar7[3] = puVar9;
      uVar3 = *(undefined8 *)(param_4 + 0x1c0);
      *puVar9 = *(undefined8 *)(param_4 + 0x1b8);
      puVar9[1] = uVar3;
      uVar3 = *(undefined8 *)(param_4 + 0x1d0);
      puVar9[2] = *(undefined8 *)(param_4 + 0x1c8);
      puVar9[3] = uVar3;
      uVar3 = *(undefined8 *)(param_4 + 0x1e0);
      puVar9[4] = *(undefined8 *)(param_4 + 0x1d8);
      puVar9[5] = uVar3;
      uVar2 = *(undefined4 *)(param_4 + 0x1ec);
      uVar4 = *(undefined4 *)(param_4 + 0x1f0);
      uVar5 = *(undefined4 *)(param_4 + 500);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_4 + 0x1e8);
      *(undefined4 *)((long)puVar9 + 0x34) = uVar2;
      *(undefined4 *)(puVar9 + 7) = uVar4;
      *(undefined4 *)((long)puVar9 + 0x3c) = uVar5;
      puVar8 = puVar7 + 10;
      local_48 = 0;
      lVar21 = *(long *)(param_4 + 0x210);
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 0x218);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x218) >> 0x20);
      uStack_44 = (undefined4)lVar21;
      uStack_40 = (undefined4)((ulong)lVar21 >> 0x20);
      plVar10 = (long *)puVar7[0xb];
      if (plVar10 == (long *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
        puVar9 = (undefined8 *)puVar7[0xb];
      }
      else {
        *(undefined4 *)(plVar10 + 2) = uStack_38;
        plVar10[1] = CONCAT44(uStack_3c,uStack_40);
        *plVar10 = lVar21 << 0x20;
        puVar9 = (undefined8 *)(puVar7[0xb] + 0x14);
        puVar7[0xb] = puVar9;
      }
      local_48 = 1;
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 0x228);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x228) >> 0x20);
      uStack_44 = (undefined4)*(undefined8 *)(param_4 + 0x220);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x220) >> 0x20);
      if (puVar9 == (undefined8 *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
        puVar9 = (undefined8 *)puVar7[0xb];
      }
      else {
        *(undefined4 *)(puVar9 + 2) = uStack_38;
        puVar9[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar9 = CONCAT44(uStack_44,1);
        puVar9 = (undefined8 *)(puVar7[0xb] + 0x14);
        puVar7[0xb] = puVar9;
      }
      local_48 = 2;
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 0x238);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x238) >> 0x20);
      uStack_44 = (undefined4)*(undefined8 *)(param_4 + 0x230);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x230) >> 0x20);
      if (puVar9 == (undefined8 *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
        puVar9 = (undefined8 *)puVar7[0xb];
      }
      else {
        *(undefined4 *)(puVar9 + 2) = uStack_38;
        puVar9[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar9 = CONCAT44(uStack_44,2);
        puVar9 = (undefined8 *)(puVar7[0xb] + 0x14);
        puVar7[0xb] = puVar9;
      }
      local_48 = 3;
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 0x248);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x248) >> 0x20);
      uStack_44 = (undefined4)*(undefined8 *)(param_4 + 0x240);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x240) >> 0x20);
      if (puVar9 == (undefined8 *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
        puVar9 = (undefined8 *)puVar7[0xb];
      }
      else {
        *(undefined4 *)(puVar9 + 2) = uStack_38;
        puVar9[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar9 = CONCAT44(uStack_44,3);
        puVar9 = (undefined8 *)(puVar7[0xb] + 0x14);
        puVar7[0xb] = puVar9;
      }
      local_48 = 4;
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 600);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 600) >> 0x20);
      uStack_44 = (undefined4)*(undefined8 *)(param_4 + 0x250);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x250) >> 0x20);
      if (puVar9 == (undefined8 *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
        puVar9 = (undefined8 *)puVar7[0xb];
      }
      else {
        *(undefined4 *)(puVar9 + 2) = uStack_38;
        puVar9[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar9 = CONCAT44(uStack_44,4);
        puVar9 = (undefined8 *)(puVar7[0xb] + 0x14);
        puVar7[0xb] = puVar9;
      }
      local_48 = 5;
      uStack_3c = (undefined4)*(undefined8 *)(param_4 + 0x268);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x268) >> 0x20);
      uStack_44 = (undefined4)*(undefined8 *)(param_4 + 0x260);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x260) >> 0x20);
      if (puVar9 == (undefined8 *)puVar7[0xc]) {
        FUN_100340600(puVar8,&local_48);
      }
      else {
        *(undefined4 *)(puVar9 + 2) = uStack_38;
        puVar9[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar9 = CONCAT44(uStack_44,5);
        puVar7[0xb] = puVar7[0xb] + 0x14;
      }
      puVar8 = (undefined8 *)(param_4 + 0x270);
      lVar21 = 0;
      do {
        local_90 = (int)lVar21;
        local_54 = puVar8[7];
        local_5c = puVar8[6];
        local_64 = puVar8[5];
        local_6c = puVar8[4];
        local_74 = puVar8[3];
        local_7c = puVar8[2];
        local_84 = puVar8[1];
        local_8c = *puVar8;
        if ((undefined4 *)puVar7[0xe] == (undefined4 *)puVar7[0xf]) {
          FUN_100340790(puVar7 + 0xd,&local_90);
        }
        else {
          puVar19 = &local_90;
          puVar13 = (undefined4 *)puVar7[0xe];
          for (lVar15 = 0x11; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar13 = *puVar19;
            puVar19 = puVar19 + (ulong)bVar24 * -2 + 1;
            puVar13 = puVar13 + (ulong)bVar24 * -2 + 1;
          }
          puVar7[0xe] = puVar7[0xe] + 0x44;
        }
        lVar21 = lVar21 + 1;
        puVar8 = puVar8 + 8;
      } while (lVar21 != 0x200);
    }
    if ((param_3 & 0xfffffffd) == 1) {
      if (*(long **)(param_4 + 0x1f8) != (long *)(param_4 + 0x200)) {
        plVar10 = *(long **)(param_4 + 0x1f8);
        do {
          puVar19 = (undefined4 *)plVar10[5];
          local_98 = (undefined4)plVar10[4];
          uStack_94 = CONCAT31(uStack_94._1_3_,*(undefined1 *)(puVar19 + 0x1d));
          if ((undefined8 *)puVar7[5] == (undefined8 *)puVar7[6]) {
            FUN_100340910(puVar7 + 4,&local_98);
          }
          else {
            *(undefined8 *)puVar7[5] = CONCAT44(uStack_94,local_98);
            puVar7[5] = puVar7[5] + 8;
          }
          local_118 = (undefined4)plVar10[4];
          FUN_100350ad0(&local_114);
          local_114 = *puVar19;
          local_110 = puVar19[1];
          local_10c = puVar19[2];
          local_108 = puVar19[3];
          local_104 = puVar19[4];
          local_100 = puVar19[5];
          local_fc = puVar19[6];
          local_f8 = puVar19[7];
          local_f4 = puVar19[8];
          local_f0 = puVar19[9];
          local_ec = puVar19[10];
          local_e8 = puVar19[0xb];
          local_e4 = puVar19[0xc];
          local_e0 = puVar19[0xd];
          local_dc = puVar19[0xe];
          local_d8 = puVar19[0xf];
          local_d4 = puVar19[0x10];
          local_d0 = puVar19[0x11];
          local_cc = puVar19[0x12];
          local_c8 = puVar19[0x13];
          local_c4 = puVar19[0x14];
          local_c0 = puVar19[0x15];
          local_bc = puVar19[0x16];
          local_b8 = puVar19[0x17];
          local_b4 = puVar19[0x18];
          local_b0 = puVar19[0x19];
          local_ac = puVar19[0x1a];
          local_a8 = puVar19[0x1b];
          local_a0 = *(undefined1 *)(puVar19 + 0x1d);
          local_a4 = puVar19[0x1c];
          if ((undefined4 *)puVar7[8] == (undefined4 *)puVar7[9]) {
            FUN_100340a40(puVar7 + 7,&local_118);
          }
          else {
            puVar19 = &local_118;
            puVar13 = (undefined4 *)puVar7[8];
            for (lVar21 = 0x1f; lVar21 != 0; lVar21 = lVar21 + -1) {
              *puVar13 = *puVar19;
              puVar19 = puVar19 + (ulong)bVar24 * -2 + 1;
              puVar13 = puVar13 + (ulong)bVar24 * -2 + 1;
            }
            puVar7[8] = puVar7[8] + 0x7c;
          }
          plVar16 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) {
            do {
              plVar17 = (long *)plVar10[2];
              bVar23 = (long *)*plVar17 != plVar10;
              plVar10 = plVar17;
            } while (bVar23);
          }
          else {
            do {
              plVar17 = plVar16;
              plVar16 = (long *)*plVar17;
            } while ((long *)*plVar17 != (long *)0x0);
          }
          plVar10 = plVar17;
        } while (plVar17 != (long *)(param_4 + 0x200));
      }
      local_128 = 0;
      local_124 = 0x400;
      pvVar11 = operator_new__(0x1000);
      local_120 = pvVar11;
      _memcpy(pvVar11,(void *)(param_4 + 0x9a70),0x1000);
      puVar8 = (undefined8 *)puVar7[0x14];
      if (puVar8 == (undefined8 *)puVar7[0x15]) {
        FUN_100340bc0(puVar7 + 0x13,&local_128);
      }
      else {
        *puVar8 = 0x40000000000;
        pvVar12 = operator_new__(0x1000);
        puVar8[1] = pvVar12;
        lVar21 = 0;
        do {
          *(undefined8 *)((long)pvVar12 + lVar21 * 4) = *(undefined8 *)((long)pvVar11 + lVar21 * 4);
          *(undefined8 *)((long)pvVar12 + lVar21 * 4 + 8) =
               *(undefined8 *)((long)pvVar11 + lVar21 * 4 + 8);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x400);
        puVar7[0x14] = puVar8 + 2;
      }
      puVar13 = operator_new(4);
      *puVar13 = 0;
      puVar19 = (undefined4 *)puVar7[0x19];
      if ((puVar19 != puVar13) && (puVar19 != (undefined4 *)0x0)) {
        operator_delete(puVar19);
      }
      puVar7[0x19] = puVar13;
      *puVar13 = *(undefined4 *)(param_4 + 0xc);
      puVar14 = operator_new(0x44);
      *puVar14 = 0;
      puVar22 = (uint *)puVar7[0x1c];
      uVar6 = 0xffff;
      if ((puVar22 != puVar14) && (puVar22 != (uint *)0x0)) {
        operator_delete(puVar22);
        uVar6 = *puVar14 | 0xffff;
      }
      puVar7[0x1c] = puVar14;
      puVar14[1] = *(uint *)(param_4 + 0x28);
      puVar14[2] = *(uint *)(param_4 + 0x3c);
      puVar14[3] = *(uint *)(param_4 + 0x50);
      puVar14[4] = *(uint *)(param_4 + 100);
      puVar14[5] = *(uint *)(param_4 + 0x78);
      puVar14[6] = *(uint *)(param_4 + 0x8c);
      puVar14[7] = *(uint *)(param_4 + 0xa0);
      puVar14[8] = *(uint *)(param_4 + 0xb4);
      puVar14[9] = *(uint *)(param_4 + 200);
      puVar14[10] = *(uint *)(param_4 + 0xdc);
      puVar14[0xb] = *(uint *)(param_4 + 0xf0);
      puVar14[0xc] = *(uint *)(param_4 + 0x104);
      puVar14[0xd] = *(uint *)(param_4 + 0x118);
      puVar14[0xe] = *(uint *)(param_4 + 300);
      puVar14[0xf] = *(uint *)(param_4 + 0x140);
      puVar14[0x10] = *(uint *)(param_4 + 0x154);
      *puVar14 = uVar6;
      if (*(int *)(param_4 + 0x160) == 0x80000) {
        puVar13 = operator_new(4);
        *puVar13 = 0;
        puVar19 = (undefined4 *)puVar7[0x1a];
        if ((puVar19 != puVar13) && (puVar19 != (undefined4 *)0x0)) {
          operator_delete(puVar19);
        }
        puVar7[0x1a] = puVar13;
        *puVar13 = *(undefined4 *)(param_4 + 0x10);
      }
      operator_delete__(pvVar11);
    }
    if (param_3 - 1 < 2) {
      local_138 = 0;
      local_134 = 0x380;
      pvVar11 = operator_new__(0xe00);
      local_130 = pvVar11;
      _memcpy(pvVar11,(void *)(param_4 + 0xabc0),0xe00);
      puVar8 = (undefined8 *)puVar7[0x17];
      if (puVar8 == (undefined8 *)puVar7[0x18]) {
        FUN_100340e10(puVar7 + 0x16,&local_138);
      }
      else {
        *puVar8 = 0x38000000000;
        pvVar12 = operator_new__(0xe00);
        puVar8[1] = pvVar12;
        lVar21 = 3;
        do {
          *(undefined8 *)((long)pvVar12 + lVar21 * 4 + -0xc) =
               *(undefined8 *)((long)pvVar11 + lVar21 * 4 + -0xc);
          uVar2 = *(undefined4 *)((long)pvVar11 + lVar21 * 4);
          *(undefined4 *)((long)pvVar12 + lVar21 * 4 + -4) =
               *(undefined4 *)((long)pvVar11 + lVar21 * 4 + -4);
          *(undefined4 *)((long)pvVar12 + lVar21 * 4) = uVar2;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 899);
        puVar7[0x17] = puVar8 + 2;
      }
      puVar13 = operator_new(4);
      *puVar13 = 0;
      puVar19 = (undefined4 *)puVar7[0x1b];
      if ((puVar19 != puVar13) && (puVar19 != (undefined4 *)0x0)) {
        operator_delete(puVar19);
      }
      puVar7[0x1b] = puVar13;
      *puVar13 = *(undefined4 *)(param_4 + 8);
      operator_delete__(pvVar11);
    }
    puVar22 = &DAT_1011c8130;
    lVar21 = 0;
    do {
      if (((param_3 == 1) || (*puVar22 == param_3)) || (*puVar22 == 1)) {
        uStack_13c = *(undefined4 *)(param_4 + 0x8270 + lVar21 * 4);
        local_140 = (undefined4)lVar21;
        if ((undefined8 *)puVar7[0x11] == (undefined8 *)puVar7[0x12]) {
          FUN_100341060(puVar7 + 0x10,&local_140);
        }
        else {
          *(undefined8 *)puVar7[0x11] = CONCAT44(uStack_13c,local_140);
          puVar7[0x11] = puVar7[0x11] + 8;
        }
      }
      lVar21 = lVar21 + 1;
      puVar22 = puVar22 + 1;
    } while (lVar21 != 0xd2);
    lVar21 = 0;
    lVar15 = 0x219c;
    do {
      lVar20 = 0;
      lVar18 = lVar15;
      do {
        if ((param_3 - 1 < 2) || ((param_3 == 3 && (((int)lVar20 == 0xb || ((int)lVar20 == 0x18)))))
           ) {
          uStack_144 = *(undefined4 *)(param_4 + lVar18 * 4);
          local_148 = (int)lVar18 + -0x209c;
          if ((undefined8 *)puVar7[0x11] == (undefined8 *)puVar7[0x12]) {
            FUN_100341060(puVar7 + 0x10,&local_148);
          }
          else {
            *(undefined8 *)puVar7[0x11] = CONCAT44(uStack_144,local_148);
            puVar7[0x11] = puVar7[0x11] + 8;
          }
        }
        lVar20 = lVar20 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar20 != 0x23);
      lVar21 = lVar21 + 1;
      lVar15 = lVar15 + 0x40;
    } while (lVar21 != 0x14);
  }
  return;
}


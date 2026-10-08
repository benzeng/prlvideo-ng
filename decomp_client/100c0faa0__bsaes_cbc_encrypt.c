
ulong _bsaes_cbc_encrypt(ulong *param_1,ulong *param_2,ulong param_3,AES_KEY *param_4,ulong *param_5
                        ,int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong in_RAX;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  uint uVar20;
  long lVar21;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar22;
  ulong unaff_RBP;
  undefined1 *puVar23;
  int *piVar24;
  uint *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  AES_KEY *pAVar31;
  byte bVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong extraout_XMM1_Qb_01;
  ulong extraout_XMM1_Qb_02;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM6_Qb;
  ulong uVar44;
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [244];
  uint uStack_7c;
  undefined8 local_78;
  ulong auStack_70 [4];
  ulong uStack_50;
  
  if ((param_6 == 0) && (0x7f < param_3)) {
    uVar22 = param_4->rounds;
    param_3 = param_3 >> 4;
    lVar29 = -((ulong)uVar22 * 0x80 + -0x60);
    pauVar18 = (undefined1 (*) [16])((long)&local_78 + lVar29);
    *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fb00;
    puVar17 = (undefined8 *)FUN_100c0f940(param_1,param_2,uVar22,param_4);
    uVar28 = *(ulong *)((long)&local_78 + lVar29);
    uVar27 = *(ulong *)((long)auStack_70 + lVar29);
    *puVar17 = in_XMM6_Qa;
    puVar17[1] = in_XMM6_Qb;
    *(ulong *)((long)&local_78 + lVar29) = in_XMM7_Qa ^ uVar28;
    *(ulong *)((long)auStack_70 + lVar29) = in_XMM7_Qb ^ uVar27;
    uVar28 = *param_5;
    uVar27 = param_5[1];
    do {
      puVar30 = param_2;
      puVar26 = param_1;
      param_3 = param_3 - 8;
      uVar45 = *puVar26;
      uVar47 = puVar26[1];
      uVar46 = puVar26[2];
      uVar48 = puVar26[4];
      uVar36 = puVar26[6];
      uVar37 = puVar26[7];
      uVar35 = puVar26[8];
      uVar38 = puVar26[9];
      uVar34 = puVar26[10];
      uVar39 = puVar26[0xb];
      uVar40 = puVar26[0xc];
      uVar42 = puVar26[0xd];
      uVar33 = puVar26[0xe];
      uVar44 = puVar26[0xf];
      auStack_70[3] = uVar28;
      uStack_50 = uVar27;
      *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fb5f;
      auVar50 = FUN_100c0f040(uVar46,uVar48);
      uVar41 = *puVar26;
      uVar43 = puVar26[1];
      uVar40 = uVar40 ^ puVar26[2];
      uVar42 = uVar42 ^ puVar26[3];
      uVar10 = puVar26[6];
      uVar11 = puVar26[7];
      uVar35 = uVar35 ^ puVar26[4];
      uVar38 = uVar38 ^ puVar26[5];
      uVar46 = puVar26[10];
      uVar48 = puVar26[0xb];
      uVar33 = uVar33 ^ puVar26[8];
      uVar44 = uVar44 ^ puVar26[9];
      uVar8 = puVar26[0xc];
      uVar9 = puVar26[0xd];
      uVar28 = puVar26[0xe];
      uVar27 = puVar26[0xf];
      *puVar30 = uVar45 ^ auStack_70[3];
      puVar30[1] = uVar47 ^ uStack_50;
      param_1 = puVar26 + 0x10;
      puVar30[2] = auVar50._0_8_ ^ uVar41;
      puVar30[3] = extraout_XMM0_Qb ^ uVar43;
      puVar30[4] = uVar40;
      puVar30[5] = uVar42;
      puVar30[6] = uVar35;
      puVar30[7] = uVar38;
      puVar30[8] = auVar50._8_8_ ^ uVar10;
      puVar30[9] = extraout_XMM1_Qb ^ uVar11;
      puVar30[10] = uVar33;
      puVar30[0xb] = uVar44;
      puVar30[0xc] = uVar36 ^ uVar46;
      puVar30[0xd] = uVar37 ^ uVar48;
      puVar30[0xe] = uVar34 ^ uVar8;
      puVar30[0xf] = uVar39 ^ uVar9;
      param_2 = puVar30 + 0x10;
    } while (7 < param_3);
    if (param_3 != 0) {
      uVar46 = *param_1;
      uVar48 = puVar26[0x11];
      if (param_3 < 2) {
        *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fef0;
        uVar36 = uVar28;
        uVar37 = uVar27;
        _AES_decrypt((uchar *)param_1,(uchar *)(auStack_70 + 3),param_4);
        uVar27 = uVar48;
        uVar28 = uVar46;
        *param_2 = uVar36 ^ auStack_70[3];
        puVar30[0x11] = uVar37 ^ uStack_50;
      }
      else {
        uVar36 = puVar26[0x12];
        auStack_70[3] = uVar28;
        uStack_50 = uVar27;
        if (param_3 == 2) {
          *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0febb;
          uVar35 = FUN_100c0f040(uVar36);
          uVar36 = *param_1;
          uVar37 = puVar26[0x11];
          uVar28 = puVar26[0x12];
          uVar27 = puVar26[0x13];
          *param_2 = uVar46 ^ auStack_70[3];
          puVar30[0x11] = uVar48 ^ uStack_50;
          puVar30[0x12] = uVar35 ^ uVar36;
          puVar30[0x13] = extraout_XMM0_Qb_05 ^ uVar37;
        }
        else {
          uVar28 = puVar26[0x14];
          if (param_3 < 4) {
            *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fe6b;
            uVar34 = FUN_100c0f040(uVar36,uVar28);
            uVar35 = *param_1;
            uVar38 = puVar26[0x11];
            uVar36 = puVar26[0x12];
            uVar37 = puVar26[0x13];
            uVar28 = puVar26[0x14];
            uVar27 = puVar26[0x15];
            *param_2 = uVar46 ^ auStack_70[3];
            puVar30[0x11] = uVar48 ^ uStack_50;
            puVar30[0x12] = uVar34 ^ uVar35;
            puVar30[0x13] = extraout_XMM0_Qb_04 ^ uVar38;
            puVar30[0x14] = uVar40 ^ uVar36;
            puVar30[0x15] = uVar42 ^ uVar37;
          }
          else {
            uVar37 = puVar26[0x16];
            uVar34 = puVar26[0x17];
            if (param_3 == 4) {
              *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fe0b;
              uVar33 = FUN_100c0f040(uVar36,uVar28);
              uVar8 = *param_1;
              uVar9 = puVar26[0x11];
              uVar34 = puVar26[0x12];
              uVar39 = puVar26[0x13];
              uVar36 = puVar26[0x14];
              uVar37 = puVar26[0x15];
              uVar28 = puVar26[0x16];
              uVar27 = puVar26[0x17];
              *param_2 = uVar46 ^ auStack_70[3];
              puVar30[0x11] = uVar48 ^ uStack_50;
              puVar30[0x12] = uVar33 ^ uVar8;
              puVar30[0x13] = extraout_XMM0_Qb_03 ^ uVar9;
              puVar30[0x14] = uVar40 ^ uVar34;
              puVar30[0x15] = uVar42 ^ uVar39;
              puVar30[0x16] = uVar35 ^ uVar36;
              puVar30[0x17] = uVar38 ^ uVar37;
            }
            else {
              uVar35 = puVar26[0x18];
              uVar38 = puVar26[0x19];
              if (param_3 < 6) {
                *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fd9b;
                auVar50 = FUN_100c0f040(uVar36,uVar28);
                uVar8 = *param_1;
                uVar9 = puVar26[0x11];
                uVar36 = puVar26[0x12];
                uVar37 = puVar26[0x13];
                uVar34 = puVar26[0x14];
                uVar39 = puVar26[0x15];
                uVar33 = puVar26[0x16];
                uVar44 = puVar26[0x17];
                uVar28 = puVar26[0x18];
                uVar27 = puVar26[0x19];
                *param_2 = uVar46 ^ auStack_70[3];
                puVar30[0x11] = uVar48 ^ uStack_50;
                puVar30[0x12] = auVar50._0_8_ ^ uVar8;
                puVar30[0x13] = extraout_XMM0_Qb_02 ^ uVar9;
                puVar30[0x14] = uVar40 ^ uVar36;
                puVar30[0x15] = uVar42 ^ uVar37;
                puVar30[0x16] = uVar35 ^ uVar34;
                puVar30[0x17] = uVar38 ^ uVar39;
                puVar30[0x18] = auVar50._8_8_ ^ uVar33;
                puVar30[0x19] = extraout_XMM1_Qb_02 ^ uVar44;
              }
              else {
                uVar27 = puVar26[0x1a];
                if (param_3 == 6) {
                  *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fd1b;
                  auVar50 = FUN_100c0f040(uVar36,uVar28,uVar37,uVar35,uVar27);
                  uVar41 = *param_1;
                  uVar43 = puVar26[0x11];
                  uVar36 = puVar26[0x12];
                  uVar37 = puVar26[0x13];
                  uVar8 = puVar26[0x14];
                  uVar9 = puVar26[0x15];
                  uVar10 = puVar26[0x16];
                  uVar11 = puVar26[0x17];
                  uVar34 = puVar26[0x18];
                  uVar39 = puVar26[0x19];
                  uVar28 = puVar26[0x1a];
                  uVar27 = puVar26[0x1b];
                  *param_2 = uVar46 ^ auStack_70[3];
                  puVar30[0x11] = uVar48 ^ uStack_50;
                  puVar30[0x12] = auVar50._0_8_ ^ uVar41;
                  puVar30[0x13] = extraout_XMM0_Qb_01 ^ uVar43;
                  puVar30[0x14] = uVar40 ^ uVar36;
                  puVar30[0x15] = uVar42 ^ uVar37;
                  puVar30[0x16] = uVar35 ^ uVar8;
                  puVar30[0x17] = uVar38 ^ uVar9;
                  puVar30[0x18] = auVar50._8_8_ ^ uVar10;
                  puVar30[0x19] = extraout_XMM1_Qb_01 ^ uVar11;
                  puVar30[0x1a] = uVar33 ^ uVar34;
                  puVar30[0x1b] = uVar44 ^ uVar39;
                }
                else {
                  uVar41 = puVar26[0x1c];
                  uVar43 = puVar26[0x1d];
                  *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = 0x100c0fc82;
                  auVar50 = FUN_100c0f040(uVar36,uVar28,uVar37,uVar35,uVar27);
                  uVar45 = *param_1;
                  uVar47 = puVar26[0x11];
                  uVar10 = puVar26[0x12];
                  uVar11 = puVar26[0x13];
                  uVar40 = puVar26[0x14];
                  uVar42 = puVar26[0x15];
                  uVar12 = puVar26[0x16];
                  uVar13 = puVar26[0x17];
                  uVar36 = puVar26[0x18];
                  uVar39 = puVar26[0x19];
                  uVar8 = puVar26[0x1a];
                  uVar9 = puVar26[0x1b];
                  uVar28 = puVar26[0x1c];
                  uVar27 = puVar26[0x1d];
                  *param_2 = uVar46 ^ auStack_70[3];
                  puVar30[0x11] = uVar48 ^ uStack_50;
                  puVar30[0x12] = auVar50._0_8_ ^ uVar45;
                  puVar30[0x13] = extraout_XMM0_Qb_00 ^ uVar47;
                  puVar30[0x14] = uVar41 ^ uVar10;
                  puVar30[0x15] = uVar43 ^ uVar11;
                  puVar30[0x16] = uVar35 ^ uVar40;
                  puVar30[0x17] = uVar38 ^ uVar42;
                  puVar30[0x18] = auVar50._8_8_ ^ uVar12;
                  puVar30[0x19] = extraout_XMM1_Qb_00 ^ uVar13;
                  puVar30[0x1a] = uVar33 ^ uVar36;
                  puVar30[0x1b] = uVar44 ^ uVar39;
                  puVar30[0x1c] = uVar37 ^ uVar8;
                  puVar30[0x1d] = uVar34 ^ uVar9;
                }
              }
            }
          }
        }
      }
    }
    *param_5 = uVar28;
    param_5[1] = uVar27;
    do {
      *pauVar18 = (undefined1  [16])0x0;
      pauVar18[1] = (undefined1  [16])0x0;
      pauVar18 = pauVar18 + 2;
    } while (pauVar18 < (undefined1 (*) [16])&local_78);
    return unaff_RBP;
  }
  if (param_3 != 0) {
    bVar32 = 0;
    puVar17 = (undefined8 *)&DAT_100c0c340;
    if (param_6 == 0) {
      puVar17 = &DAT_100c0cf80;
    }
    if (((param_3 < 0x200) || ((param_3 & 0xf) != 0)) || ((DAT_102311d58 >> 0x1c & 1) != 0)) {
      lVar29 = -(-((long)param_4 + (-0x97 - (long)(auStack_170 + 0xb0))) & 0x3c0U);
      *(undefined1 **)(auStack_170 + lVar29 + 0xc0) = &stack0xffffffffffffffc8;
      *(ulong **)(auStack_170 + lVar29 + 0xe8) = param_5;
      iVar19 = param_4->rounds;
      *(AES_KEY **)(auStack_170 + 0xb0 + lVar29) = param_4;
      *(ulong *)(auStack_170 + lVar29 + 0xb8) = (long)param_4->rd_key + (ulong)(uint)(iVar19 << 4);
      if (param_6 == 0) {
        uVar28 = param_5[1];
        *(ulong *)(auStack_170 + lVar29 + 0xf0) = *param_5;
        *(ulong *)((long)&local_78 + lVar29) = uVar28;
        while( true ) {
          uVar22 = *(uint *)((long)param_1 + 4);
          uVar20 = (uint)param_1[1];
          *(ulong **)(auStack_170 + lVar29 + 200) = param_1;
          *(ulong **)(auStack_170 + lVar29 + 0xd0) = param_2;
          *(ulong *)(auStack_170 + lVar29 + 0xd8) = param_3;
          *(undefined8 *)(auStack_170 + lVar29 + 0xa8) = 0x100c0c253;
          uVar16 = FUN_100c0b500();
          puVar17 = *(undefined8 **)(auStack_170 + lVar29 + 200);
          puVar25 = *(uint **)(auStack_170 + lVar29 + 0xd0);
          uVar28 = *(ulong *)(auStack_170 + lVar29 + 0xd8);
          uVar16 = uVar16 ^ *(uint *)(auStack_170 + lVar29 + 0xf0);
          in_RAX = (ulong)uVar16;
          uVar22 = uVar22 ^ *(uint *)((long)&uStack_7c + lVar29);
          uVar20 = uVar20 ^ *(uint *)((long)&local_78 + lVar29);
          uVar15 = extraout_EDX_01 ^ *(uint *)((long)auStack_70 + lVar29 + -4);
          uVar6 = *puVar17;
          uVar7 = puVar17[1];
          param_3 = uVar28 - 0x10;
          if (uVar28 < 0x10) break;
          if (param_3 == 0) {
            puVar17 = *(undefined8 **)(auStack_170 + lVar29 + 0xe8);
            *puVar17 = uVar6;
            puVar17[1] = uVar7;
            *puVar25 = uVar16;
            puVar25[1] = uVar22;
            puVar25[2] = uVar20;
            puVar25[3] = uVar15;
            return in_RAX;
          }
          *(undefined8 *)(auStack_170 + lVar29 + 0xf0) = uVar6;
          *(undefined8 *)((long)&local_78 + lVar29) = uVar7;
          *puVar25 = uVar16;
          puVar25[1] = uVar22;
          puVar25[2] = uVar20;
          puVar25[3] = uVar15;
          param_1 = puVar17 + 2;
          param_2 = (ulong *)(puVar25 + 4);
        }
        puVar17 = *(undefined8 **)(auStack_170 + lVar29 + 0xe8);
        *puVar17 = uVar6;
        puVar17[1] = uVar7;
        *(uint *)(auStack_170 + lVar29 + 0xf0) = uVar16;
        *(uint *)((long)&uStack_7c + lVar29) = uVar22;
        *(uint *)((long)&local_78 + lVar29) = uVar20;
        *(uint *)((long)auStack_70 + lVar29 + -4) = uVar15;
        puVar23 = auStack_170 + lVar29 + 0xf0;
        for (; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)puVar25 = *puVar23;
          puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
          puVar25 = (uint *)((long)puVar25 + (ulong)bVar32 * -2 + 1);
        }
      }
      else {
        uVar22 = *(uint *)((long)param_5 + 4);
        uVar27 = (ulong)(uint)param_5[1];
        puVar26 = param_1;
        uVar28 = param_3;
        puVar30 = param_2;
        if ((param_3 & 0xfffffffffffffff0) == 0) goto code_r0x000100c0c1df;
        while( true ) {
          do {
            uVar22 = uVar22 ^ *(uint *)((long)puVar26 + 4);
            uVar27 = (ulong)((uint)uVar27 ^ (uint)puVar26[1]);
            *(ulong **)(auStack_170 + lVar29 + 200) = puVar26;
            *(ulong **)(auStack_170 + lVar29 + 0xd0) = param_2;
            *(ulong *)(auStack_170 + lVar29 + 0xd8) = param_3;
            *(undefined8 *)(auStack_170 + lVar29 + 0xa8) = 0x100c0c17b;
            auVar49 = FUN_100c0aff0();
            in_RAX = auVar49._0_8_;
            lVar21 = *(long *)(auStack_170 + lVar29 + 200);
            puVar4 = *(undefined4 **)(auStack_170 + lVar29 + 0xd0);
            lVar3 = *(long *)(auStack_170 + lVar29 + 0xd8);
            *puVar4 = auVar49._0_4_;
            puVar4[1] = uVar22;
            puVar4[2] = (int)uVar27;
            puVar4[3] = auVar49._8_4_;
            param_1 = (ulong *)(lVar21 + 0x10);
            param_2 = (ulong *)(puVar4 + 4);
            param_3 = lVar3 - 0x10;
            puVar26 = param_1;
          } while ((param_3 & 0xfffffffffffffff0) != 0);
          uVar28 = param_3;
          puVar30 = param_2;
          if ((param_3 & 0xf) == 0) break;
code_r0x000100c0c1df:
          for (; puVar26 = puVar30, param_3 != 0; param_3 = param_3 - 1) {
            *(uchar *)param_2 = (uchar)*param_1;
            param_1 = (ulong *)((long)param_1 + (ulong)bVar32 * -2 + 1);
            param_2 = (ulong *)((long)param_2 + (ulong)bVar32 * -2 + 1);
            puVar30 = puVar26;
          }
          for (lVar21 = 0x10 - uVar28; lVar21 != 0; lVar21 = lVar21 + -1) {
            *(uchar *)param_2 = '\0';
            param_2 = (ulong *)((long)param_2 + (ulong)bVar32 * -2 + 1);
          }
          param_3 = 0x10;
          param_2 = puVar26;
        }
        puVar4 = *(undefined4 **)(auStack_170 + lVar29 + 0xe8);
        *puVar4 = auVar49._0_4_;
        puVar4[1] = uVar22;
        puVar4[2] = (int)uVar27;
        puVar4[3] = auVar49._8_4_;
      }
    }
    else {
      uVar28 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar28 < ((ulong)(puVar17 + 0x120) & 0xfff)) {
        lVar29 = (uVar28 - ((ulong)puVar17 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar29 = uVar28 - ((ulong)(puVar17 + 0x120) & 0xfff);
      }
      lVar29 = -lVar29;
      *(undefined1 **)(auStack_1b0 + lVar29) = &stack0xffffffffffffffc8;
      *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
      *(ulong **)((long)alStack_1a8 + lVar29 + 8) = param_2;
      *(ulong *)((long)alStack_1a8 + lVar29 + 0x10) = param_3;
      *(AES_KEY **)((long)alStack_1a8 + lVar29 + 0x18) = param_4;
      *(ulong **)((long)alStack_1a8 + lVar29 + 0x20) = param_5;
      *(undefined4 *)(auStack_170 + lVar29 + 0xf0) = 0;
      iVar19 = param_4->rounds;
      uVar28 = (long)param_4 - (long)puVar17 & 0xfff;
      if ((uVar28 < 0x900) || (pAVar31 = param_4, 0xf07 < uVar28)) {
        pAVar31 = (AES_KEY *)(auStack_170 + lVar29);
        piVar24 = (int *)(auStack_170 + lVar29);
        for (lVar21 = 0x1e; lVar21 != 0; lVar21 = lVar21 + -1) {
          *(undefined8 *)piVar24 = *(undefined8 *)param_4->rd_key;
          param_4 = (AES_KEY *)(param_4->rd_key + 2);
          piVar24 = piVar24 + 2;
        }
        *piVar24 = iVar19;
      }
      *(AES_KEY **)((long)alStack_1c8 + lVar29 + 8) = pAVar31;
      iVar19 = 0x12;
      do {
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      if (param_6 == 0) {
        if (param_2 == param_1) {
          uVar28 = param_5[1];
          *(ulong *)((long)&uStack_180 + lVar29) = *param_5;
          *(ulong *)((long)&uStack_178 + lVar29) = uVar28;
          while( true ) {
            uVar22 = *(uint *)((long)param_1 + 4);
            uVar20 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x100c0c031;
            uVar15 = FUN_100c0b320();
            puVar17 = *(undefined8 **)((long)alStack_1a8 + lVar29);
            uVar15 = uVar15 ^ *(uint *)((long)&uStack_180 + lVar29);
            in_RAX = (ulong)uVar15;
            uVar22 = uVar22 ^ *(uint *)((long)&uStack_180 + lVar29 + 4);
            uVar20 = uVar20 ^ *(uint *)((long)&uStack_178 + lVar29);
            uVar16 = *(uint *)(auStack_170 + lVar29 + -4);
            uVar6 = puVar17[1];
            lVar21 = *(long *)((long)alStack_1a8 + lVar29 + 0x10) + -0x10;
            if (lVar21 == 0) break;
            *(undefined8 *)((long)&uStack_180 + lVar29) = *puVar17;
            *(undefined8 *)((long)&uStack_178 + lVar29) = uVar6;
            *(uint *)param_2 = uVar15;
            *(uint *)((long)param_2 + 4) = uVar22;
            *(uint *)(param_2 + 1) = uVar20;
            *(uint *)((long)param_2 + 0xc) = extraout_EDX_00 ^ uVar16;
            param_1 = puVar17 + 2;
            param_2 = param_2 + 2;
            *(long *)((long)alStack_1a8 + lVar29 + 0x10) = lVar21;
          }
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar29 + 0x20);
          *puVar5 = *puVar17;
          puVar5[1] = uVar6;
          *(uint *)param_2 = uVar15;
          *(uint *)((long)param_2 + 4) = uVar22;
          *(uint *)(param_2 + 1) = uVar20;
          *(uint *)((long)param_2 + 0xc) = extraout_EDX_00 ^ uVar16;
        }
        else {
          *(ulong **)((long)&uStack_180 + lVar29) = param_5;
          do {
            uVar22 = *(uint *)((long)param_1 + 4);
            uVar20 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x100c0bf9d;
            uVar14 = FUN_100c0b320();
            puVar25 = *(uint **)((long)&uStack_180 + lVar29);
            puVar17 = *(undefined8 **)((long)alStack_1a8 + lVar29);
            uVar16 = *puVar25;
            in_RAX = (ulong)(uVar14 ^ uVar16);
            uVar15 = puVar25[1];
            uVar1 = puVar25[2];
            uVar2 = puVar25[3];
            lVar21 = *(long *)((long)alStack_1a8 + lVar29 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar29 + 0x10) = lVar21;
            *(undefined8 **)((long)&uStack_180 + lVar29) = puVar17;
            *(uint *)param_2 = uVar14 ^ uVar16;
            *(uint *)((long)param_2 + 4) = uVar22 ^ uVar15;
            *(uint *)(param_2 + 1) = uVar20 ^ uVar1;
            *(uint *)((long)param_2 + 0xc) = extraout_EDX ^ uVar2;
            param_1 = puVar17 + 2;
            param_2 = param_2 + 2;
          } while (lVar21 != 0);
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar29 + 0x20);
          uVar6 = puVar17[1];
          *puVar5 = *puVar17;
          puVar5[1] = uVar6;
        }
      }
      else {
        uVar22 = *(uint *)((long)param_5 + 4);
        uVar28 = (ulong)(uint)param_5[1];
        do {
          uVar22 = uVar22 ^ *(uint *)((long)param_1 + 4);
          uVar28 = (ulong)((uint)uVar28 ^ (uint)param_1[1]);
          *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
          *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x100c0bf21;
          auVar49 = FUN_100c0ae00();
          in_RAX = auVar49._0_8_;
          lVar21 = *(long *)((long)alStack_1a8 + lVar29);
          lVar3 = *(long *)((long)alStack_1a8 + lVar29 + 0x10);
          *(int *)param_2 = auVar49._0_4_;
          *(uint *)((long)param_2 + 4) = uVar22;
          *(int *)(param_2 + 1) = (int)uVar28;
          *(int *)((long)param_2 + 0xc) = auVar49._8_4_;
          param_1 = (ulong *)(lVar21 + 0x10);
          param_2 = param_2 + 2;
          uVar27 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar29 + 0x10) = uVar27;
        } while ((uVar27 & 0xfffffffffffffff0) != 0);
        puVar4 = *(undefined4 **)((long)alStack_1a8 + lVar29 + 0x20);
        *puVar4 = auVar49._0_4_;
        puVar4[1] = uVar22;
        puVar4[2] = (int)uVar28;
        puVar4[3] = auVar49._8_4_;
      }
      if (*(int *)(auStack_170 + lVar29 + 0xf0) != 0) {
        in_RAX = 0;
        puVar17 = (undefined8 *)(auStack_170 + lVar29);
        for (lVar21 = 0x1e; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + (ulong)bVar32 * -2 + 1;
        }
      }
    }
  }
  return in_RAX;
}



/* WARNING: Removing unreachable block (ram,0x000100410dfa) */
/* WARNING: Removing unreachable block (ram,0x000100411181) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100410c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined1 *param_11,uint param_12,
                   undefined8 param_13,undefined4 param_14,undefined8 param_15)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char in_AL;
  int iVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  long lVar54;
  undefined1 auVar31 [16];
  undefined1 auVar38 [16];
  undefined1 auVar46 [16];
  undefined1 auVar55 [16];
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar50 [16];
  undefined1 auVar35 [16];
  undefined1 auVar43 [16];
  undefined1 auVar51 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  undefined1 auVar52 [16];
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  cVar1 = *(char *)(param_9 + 2);
  uVar30 = (uint)CONCAT11(*(undefined1 *)(param_9 + 3),*(undefined1 *)(param_9 + 4));
  uVar7 = uVar30;
  if (param_12 < uVar30) {
    uVar7 = param_12;
  }
  local_38 = lVar6;
  if (cVar1 == '\0') {
    if (uVar7 < 4) {
code_r0x0001004111cc:
      uVar22 = FUN_1004103f0(0x52400,param_13,param_14,0);
      return uVar22;
    }
    *param_11 = 0;
    param_11[1] = 0;
    *(undefined2 *)(param_11 + 2) = 0x500;
    uVar22 = 4;
    if (uVar7 != 4) {
      uVar30 = ~uVar30;
      param_12 = ~param_12;
      uVar8 = param_12;
      if (param_12 < uVar30) {
        uVar8 = uVar30;
      }
      uVar23 = -uVar8 - 6;
      if (uVar23 < 5) {
        uVar23 = 4;
      }
      uVar20 = (ulong)((-2 - uVar8) - uVar23);
      uVar28 = uVar20 + 1 & 0x1fffffff0;
      uVar22 = 0;
      if ((uVar28 != 0) &&
         ((&DAT_101119ce0 + uVar20 * 0x10 < param_11 + 4 ||
          (uVar22 = 0, param_11 + uVar20 + 4 < &DAT_101119ce0)))) {
        uVar8 = param_12;
        if (param_12 < uVar30) {
          uVar8 = uVar30;
        }
        uVar23 = 4;
        if (4 < -uVar8 - 6) {
          uVar23 = -uVar8 - 6;
        }
        uVar25 = 0;
        puVar21 = (undefined4 *)&DAT_101119ce0;
        do {
          auVar55._8_4_ = (int)uVar25;
          auVar55._0_8_ = uVar25;
          auVar55._12_4_ = (int)(uVar25 >> 0x20);
          lVar54 = auVar55._8_8_;
          uVar2 = *(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b40fd0) * 0x10);
          uVar3 = *(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b4aff0) * 0x10);
          uVar4 = *(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b40ff0) * 0x10);
          uVar58 = (undefined1)*(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b40fc0) * 0x10);
          uVar57 = (undefined1)((uint)uVar2 >> 8);
          uVar5 = *puVar21;
          bVar56 = (byte)((uint)uVar4 >> 0x18);
          auVar46[0] = (undefined1)uVar5;
          auVar37._0_14_ = ZEXT114(bVar56) << 0x38;
          auVar37[0xe] = bVar56;
          auVar37[0xf] = (char)((uint)uVar2 >> 0x18);
          auVar36._14_2_ = auVar37._14_2_;
          auVar36._0_13_ = ZEXT113(bVar56) << 0x38;
          auVar36[0xd] = (char)((uint)uVar3 >> 0x18);
          auVar35._13_3_ = auVar36._13_3_;
          auVar35._0_12_ = ZEXT112(bVar56) << 0x38;
          auVar35[0xc] = (char)((uint)uVar5 >> 0x18);
          auVar34._12_4_ = auVar35._12_4_;
          auVar34._0_11_ = ZEXT111(bVar56) << 0x38;
          auVar34[0xb] = (char)((uint)uVar2 >> 0x10);
          auVar33._11_5_ = auVar34._11_5_;
          auVar33._0_10_ = (unkuint10)bVar56 << 0x38;
          auVar33[10] = (char)((uint)uVar4 >> 0x10);
          auVar32._10_6_ = auVar33._10_6_;
          auVar32._0_9_ = (unkuint9)bVar56 << 0x38;
          auVar32[9] = (char)((uint)uVar3 >> 0x10);
          auVar13._1_8_ =
               (long)(CONCAT72(auVar32._9_7_,CONCAT11((char)((uint)uVar5 >> 0x10),bVar56)) >> 8);
          auVar13[0] = uVar57;
          auVar13._9_7_ = 0;
          auVar12._10_6_ = 0;
          auVar12._0_10_ = SUB1610(auVar13 << 0x38,6);
          auVar11._11_5_ = 0;
          auVar11._0_11_ = SUB1611(auVar12 << 0x30,5);
          auVar10._12_4_ = 0;
          auVar10._0_12_ = SUB1612(auVar11 << 0x28,4);
          auVar9._13_3_ = 0;
          auVar9._0_13_ = SUB1613(auVar10 << 0x20,3);
          auVar31._14_2_ = 0;
          auVar31._0_14_ = SUB1614(auVar9 << 0x18,2);
          auVar31 = auVar31 << 0x10;
          auVar45._0_14_ = auVar31._0_14_;
          auVar45[0xe] = uVar57;
          auVar45[0xf] = (char)((uint)*(undefined4 *)
                                       (&DAT_101119ce0 + (uVar25 + _DAT_100b40fc0) * 0x10) >> 8);
          auVar44._14_2_ = auVar45._14_2_;
          auVar44._0_13_ = auVar31._0_13_;
          auVar44[0xd] = (char)((uint)*(undefined4 *)
                                       (&DAT_101119ce0 + (uVar25 + _DAT_100b40fe0) * 0x10) >> 8);
          auVar43._13_3_ = auVar44._13_3_;
          auVar43._0_12_ = auVar31._0_12_;
          auVar43[0xc] = (char)((uint)uVar4 >> 8);
          auVar42._12_4_ = auVar43._12_4_;
          auVar42._0_11_ = auVar31._0_11_;
          auVar42[0xb] = (char)((uint)*(undefined4 *)
                                       (&DAT_101119ce0 + (uVar25 + _DAT_100b4afe0) * 0x10) >> 8);
          auVar41._11_5_ = auVar42._11_5_;
          auVar41._0_10_ = auVar31._0_10_;
          auVar41[10] = (char)((uint)uVar3 >> 8);
          auVar40._10_6_ = auVar41._10_6_;
          auVar40._0_9_ = auVar31._0_9_;
          auVar40[9] = (char)((uint)*(undefined4 *)
                                     (&DAT_101119ce0 + (uVar25 + _DAT_100b4afd0) * 0x10) >> 8);
          auVar39._9_7_ = auVar40._9_7_;
          auVar39._0_8_ = auVar31._0_8_;
          auVar39[8] = (char)((uint)uVar5 >> 8);
          auVar18._1_8_ = auVar39._8_8_;
          auVar18[0] = uVar58;
          auVar18._9_7_ = 0;
          auVar17._10_6_ = 0;
          auVar17._0_10_ = SUB1610(auVar18 << 0x38,6);
          auVar16._11_5_ = 0;
          auVar16._0_11_ = SUB1611(auVar17 << 0x30,5);
          auVar15._12_4_ = 0;
          auVar15._0_12_ = SUB1612(auVar16 << 0x28,4);
          auVar14._13_3_ = 0;
          auVar14._0_13_ = SUB1613(auVar15 << 0x20,3);
          auVar38._14_2_ = 0;
          auVar38._0_14_ = SUB1614(auVar14 << 0x18,2);
          auVar38 = auVar38 << 0x10;
          auVar53._0_14_ = auVar38._0_14_;
          auVar53[0xe] = uVar58;
          auVar53[0xf] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b40fc8) * 0x10);
          auVar52._14_2_ = auVar53._14_2_;
          auVar52._0_13_ = auVar38._0_13_;
          auVar52[0xd] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b40fd8) * 0x10);
          auVar51._13_3_ = auVar52._13_3_;
          auVar51._0_12_ = auVar38._0_12_;
          auVar51[0xc] = (char)uVar2;
          auVar50._12_4_ = auVar51._12_4_;
          auVar50._0_11_ = auVar38._0_11_;
          auVar50[0xb] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b40fe8) * 0x10);
          auVar49._11_5_ = auVar50._11_5_;
          auVar49._0_10_ = auVar38._0_10_;
          auVar49[10] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b40fe0) * 0x10);
          auVar48._10_6_ = auVar49._10_6_;
          auVar48._0_9_ = auVar38._0_9_;
          auVar48[9] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b40ff8) * 0x10);
          auVar47._9_7_ = auVar48._9_7_;
          auVar47._0_8_ = auVar38._0_8_;
          auVar47[8] = (char)uVar4;
          auVar46._8_8_ = auVar47._8_8_;
          auVar46[7] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b4afe8) * 0x10);
          auVar46[6] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b4afe0) * 0x10);
          auVar46[5] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b4aff8) * 0x10);
          auVar46[4] = (char)uVar3;
          auVar46[3] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + _UNK_100b4afd8) * 0x10);
          auVar46[2] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar25 + _DAT_100b4afd0) * 0x10);
          auVar46[1] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar54 + 1) * 0x10);
          *(undefined1 (*) [16])(param_11 + uVar25 + 4) = auVar46;
          uVar25 = uVar25 + 0x10;
          puVar21 = puVar21 + 0x40;
          uVar22 = uVar28;
        } while (((ulong)((-2 - uVar8) - uVar23) + 1 & 0xfffffffffffffff0) != uVar25);
      }
      if (uVar20 + 1 != uVar22) {
        uVar8 = param_12;
        if (param_12 < uVar30) {
          uVar8 = uVar30;
        }
        uVar23 = -uVar8 - 6;
        if (uVar23 < 5) {
          uVar23 = 4;
        }
        iVar19 = (int)uVar22;
        if ((~uVar8 - uVar23 & 3) != 0) {
          uVar26 = param_12;
          if (param_12 < uVar30) {
            uVar26 = uVar30;
          }
          uVar29 = 0;
          if (4 < -uVar26 - 6) {
            uVar29 = -uVar26 - 6;
          }
          puVar24 = &DAT_101119ce0 + uVar22 * 0x10;
          iVar27 = -(~uVar26 - uVar29 & 3);
          do {
            param_11[uVar22 + 4] = *puVar24;
            uVar22 = uVar22 + 1;
            puVar24 = puVar24 + 0x10;
            iVar27 = iVar27 + 1;
          } while (iVar27 != 0);
        }
        if (2 < ((-2 - uVar8) - uVar23) - iVar19) {
          if (param_12 < uVar30) {
            param_12 = uVar30;
          }
          uVar30 = 4;
          if (4 < -param_12 - 6) {
            uVar30 = -param_12 - 6;
          }
          iVar19 = ((2 - param_12) - uVar30) - (int)(uVar22 + 3);
          param_11 = param_11 + uVar22 + 7;
          puVar24 = &DAT_101119ce0 + (uVar22 + 3) * 0x10;
          do {
            param_11[-3] = puVar24[-0x30];
            param_11[-2] = puVar24[-0x20];
            param_11[-1] = puVar24[-0x10];
            *param_11 = *puVar24;
            param_11 = param_11 + 4;
            puVar24 = puVar24 + 0x40;
            iVar19 = iVar19 + -4;
          } while (iVar19 != 0);
        }
      }
      uVar22 = 9;
      if (0xfffffffb < 4 - uVar7) {
        uVar22 = (ulong)uVar7;
      }
    }
  }
  else {
    if (DAT_101119ce0 == cVar1) {
      puVar24 = &DAT_101119ce0;
    }
    else if (DAT_101119cf0 == cVar1) {
      puVar24 = &DAT_101119cf0;
    }
    else if (DAT_101119d00 == cVar1) {
      puVar24 = &DAT_101119d00;
    }
    else if (DAT_101119d10 == cVar1) {
      puVar24 = &DAT_101119d10;
    }
    else {
      if (DAT_101119d20 != cVar1) goto code_r0x0001004111cc;
      puVar24 = &DAT_101119d20;
    }
    local_48 = local_108;
    local_54 = 0x30;
    local_50 = &stack0x00000010;
    local_58 = 0x30;
    uVar22 = (**(code **)(puVar24 + 8))(param_11,uVar7,param_13,param_14,param_15);
  }
  if (lVar6 == local_38) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


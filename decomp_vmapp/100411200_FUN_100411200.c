
/* WARNING: Removing unreachable block (ram,0x0001004112eb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100411200(undefined1 *param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar50;
  undefined1 auVar27 [16];
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar51 [16];
  byte bVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 auVar35 [16];
  undefined1 auVar43 [16];
  undefined1 auVar28 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  undefined1 auVar29 [16];
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  undefined1 auVar46 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  
  if (param_2 < 4) {
    uVar17 = FUN_1004103f0(0x52400,param_3,param_4,0);
    return uVar17;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x500;
  uVar17 = 4;
  if (param_2 != 4) {
    uVar1 = param_2 - 5;
    uVar16 = 4;
    if (0xfffffffb < 4 - param_2) {
      uVar16 = uVar1;
    }
    uVar18 = 4;
    if (4 < uVar1) {
      uVar18 = uVar1;
    }
    uVar26 = (ulong)((param_2 - 1) - uVar18);
    uVar25 = uVar26 + 1 & 0x1fffffff0;
    uVar17 = 0;
    if ((uVar25 != 0) &&
       ((&DAT_101119ce0 + uVar26 * 0x10 < param_1 + 4 ||
        (uVar17 = 0, param_1 + uVar26 + 4 < &DAT_101119ce0)))) {
      uVar18 = 4;
      if (4 < uVar1) {
        uVar18 = uVar1;
      }
      uVar19 = 0;
      puVar21 = (undefined4 *)&DAT_101119ce0;
      do {
        auVar51._8_4_ = (int)uVar19;
        auVar51._0_8_ = uVar19;
        auVar51._12_4_ = (int)(uVar19 >> 0x20);
        lVar50 = auVar51._8_8_;
        uVar2 = *(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b40fd0) * 0x10);
        uVar3 = *(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b4aff0) * 0x10);
        uVar4 = *(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b40ff0) * 0x10);
        uVar54 = (undefined1)*(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b40fc0) * 0x10);
        uVar53 = (undefined1)((uint)uVar2 >> 8);
        uVar5 = *puVar21;
        bVar52 = (byte)((uint)uVar4 >> 0x18);
        auVar42[0] = (undefined1)uVar5;
        auVar33._0_14_ = ZEXT114(bVar52) << 0x38;
        auVar33[0xe] = bVar52;
        auVar33[0xf] = (char)((uint)uVar2 >> 0x18);
        auVar32._14_2_ = auVar33._14_2_;
        auVar32._0_13_ = ZEXT113(bVar52) << 0x38;
        auVar32[0xd] = (char)((uint)uVar3 >> 0x18);
        auVar31._13_3_ = auVar32._13_3_;
        auVar31._0_12_ = ZEXT112(bVar52) << 0x38;
        auVar31[0xc] = (char)((uint)uVar5 >> 0x18);
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._0_11_ = ZEXT111(bVar52) << 0x38;
        auVar30[0xb] = (char)((uint)uVar2 >> 0x10);
        auVar29._11_5_ = auVar30._11_5_;
        auVar29._0_10_ = (unkuint10)bVar52 << 0x38;
        auVar29[10] = (char)((uint)uVar4 >> 0x10);
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._0_9_ = (unkuint9)bVar52 << 0x38;
        auVar28[9] = (char)((uint)uVar3 >> 0x10);
        auVar10._1_8_ =
             (long)(CONCAT72(auVar28._9_7_,CONCAT11((char)((uint)uVar5 >> 0x10),bVar52)) >> 8);
        auVar10[0] = uVar53;
        auVar10._9_7_ = 0;
        auVar9._10_6_ = 0;
        auVar9._0_10_ = SUB1610(auVar10 << 0x38,6);
        auVar8._11_5_ = 0;
        auVar8._0_11_ = SUB1611(auVar9 << 0x30,5);
        auVar7._12_4_ = 0;
        auVar7._0_12_ = SUB1612(auVar8 << 0x28,4);
        auVar6._13_3_ = 0;
        auVar6._0_13_ = SUB1613(auVar7 << 0x20,3);
        auVar27._14_2_ = 0;
        auVar27._0_14_ = SUB1614(auVar6 << 0x18,2);
        auVar27 = auVar27 << 0x10;
        auVar41._0_14_ = auVar27._0_14_;
        auVar41[0xe] = uVar53;
        auVar41[0xf] = (char)((uint)*(undefined4 *)
                                     (&DAT_101119ce0 + (uVar19 + _DAT_100b40fc0) * 0x10) >> 8);
        auVar40._14_2_ = auVar41._14_2_;
        auVar40._0_13_ = auVar27._0_13_;
        auVar40[0xd] = (char)((uint)*(undefined4 *)
                                     (&DAT_101119ce0 + (uVar19 + _DAT_100b40fe0) * 0x10) >> 8);
        auVar39._13_3_ = auVar40._13_3_;
        auVar39._0_12_ = auVar27._0_12_;
        auVar39[0xc] = (char)((uint)uVar4 >> 8);
        auVar38._12_4_ = auVar39._12_4_;
        auVar38._0_11_ = auVar27._0_11_;
        auVar38[0xb] = (char)((uint)*(undefined4 *)
                                     (&DAT_101119ce0 + (uVar19 + _DAT_100b4afe0) * 0x10) >> 8);
        auVar37._11_5_ = auVar38._11_5_;
        auVar37._0_10_ = auVar27._0_10_;
        auVar37[10] = (char)((uint)uVar3 >> 8);
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._0_9_ = auVar27._0_9_;
        auVar36[9] = (char)((uint)*(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b4afd0) * 0x10)
                           >> 8);
        auVar35._9_7_ = auVar36._9_7_;
        auVar35._0_8_ = auVar27._0_8_;
        auVar35[8] = (char)((uint)uVar5 >> 8);
        auVar15._1_8_ = auVar35._8_8_;
        auVar15[0] = uVar54;
        auVar15._9_7_ = 0;
        auVar14._10_6_ = 0;
        auVar14._0_10_ = SUB1610(auVar15 << 0x38,6);
        auVar13._11_5_ = 0;
        auVar13._0_11_ = SUB1611(auVar14 << 0x30,5);
        auVar12._12_4_ = 0;
        auVar12._0_12_ = SUB1612(auVar13 << 0x28,4);
        auVar11._13_3_ = 0;
        auVar11._0_13_ = SUB1613(auVar12 << 0x20,3);
        auVar34._14_2_ = 0;
        auVar34._0_14_ = SUB1614(auVar11 << 0x18,2);
        auVar34 = auVar34 << 0x10;
        auVar49._0_14_ = auVar34._0_14_;
        auVar49[0xe] = uVar54;
        auVar49[0xf] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b40fc8) * 0x10);
        auVar48._14_2_ = auVar49._14_2_;
        auVar48._0_13_ = auVar34._0_13_;
        auVar48[0xd] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b40fd8) * 0x10);
        auVar47._13_3_ = auVar48._13_3_;
        auVar47._0_12_ = auVar34._0_12_;
        auVar47[0xc] = (char)uVar2;
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_11_ = auVar34._0_11_;
        auVar46[0xb] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b40fe8) * 0x10);
        auVar45._11_5_ = auVar46._11_5_;
        auVar45._0_10_ = auVar34._0_10_;
        auVar45[10] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b40fe0) * 0x10);
        auVar44._10_6_ = auVar45._10_6_;
        auVar44._0_9_ = auVar34._0_9_;
        auVar44[9] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b40ff8) * 0x10);
        auVar43._9_7_ = auVar44._9_7_;
        auVar43._0_8_ = auVar34._0_8_;
        auVar43[8] = (char)uVar4;
        auVar42._8_8_ = auVar43._8_8_;
        auVar42[7] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b4afe8) * 0x10);
        auVar42[6] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b4afe0) * 0x10);
        auVar42[5] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b4aff8) * 0x10);
        auVar42[4] = (char)uVar3;
        auVar42[3] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + _UNK_100b4afd8) * 0x10);
        auVar42[2] = (char)*(undefined4 *)(&DAT_101119ce0 + (uVar19 + _DAT_100b4afd0) * 0x10);
        auVar42[1] = (char)*(undefined4 *)(&DAT_101119ce0 + (lVar50 + 1) * 0x10);
        *(undefined1 (*) [16])(param_1 + uVar19 + 4) = auVar42;
        uVar19 = uVar19 + 0x10;
        puVar21 = puVar21 + 0x40;
        uVar17 = uVar25;
      } while (((ulong)((param_2 - 1) - uVar18) + 1 & 0xfffffffffffffff0) != uVar19);
    }
    if (uVar26 + 1 != uVar17) {
      uVar18 = 4;
      if (4 < uVar1) {
        uVar18 = uVar1;
      }
      iVar23 = (int)uVar17;
      if ((param_2 - uVar18 & 3) != 0) {
        uVar24 = 0;
        if (4 < uVar1) {
          uVar24 = uVar1;
        }
        puVar22 = &DAT_101119ce0 + uVar17 * 0x10;
        iVar20 = -(param_2 - uVar24 & 3);
        do {
          param_1[uVar17 + 4] = *puVar22;
          uVar17 = uVar17 + 1;
          puVar22 = puVar22 + 0x10;
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0);
      }
      if (2 < ((param_2 - 1) - uVar18) - iVar23) {
        param_1 = param_1 + uVar17 + 7;
        puVar22 = &DAT_101119ce0 + (uVar17 + 3) * 0x10;
        uVar18 = 4;
        if (4 < uVar1) {
          uVar18 = uVar1;
        }
        iVar23 = ((param_2 + 3) - uVar18) - (int)(uVar17 + 3);
        do {
          param_1[-3] = puVar22[-0x30];
          param_1[-2] = puVar22[-0x20];
          param_1[-1] = puVar22[-0x10];
          *param_1 = *puVar22;
          param_1 = param_1 + 4;
          puVar22 = puVar22 + 0x40;
          iVar23 = iVar23 + -4;
        } while (iVar23 != 0);
      }
    }
    uVar17 = (ulong)(uVar16 + 5);
  }
  return uVar17;
}


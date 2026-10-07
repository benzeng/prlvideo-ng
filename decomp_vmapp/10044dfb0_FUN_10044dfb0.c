
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044dfb0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [14];
  unkbyte10 Var3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar37 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  auVar5 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar6 = (ulong)(param_3 - 1);
    uVar14 = uVar6 + 1 & 0x1fffffff8;
    puVar9 = param_2;
    puVar11 = param_1;
    uVar12 = 0;
    if ((uVar14 != 0) &&
       (((uint *)((long)param_2 + uVar6) < param_1 || (uVar12 = 0, param_1 + uVar6 < param_2)))) {
      param_3 = param_3 - (int)uVar14;
      puVar11 = param_1 + uVar14;
      pauVar10 = (undefined1 (*) [16])(param_1 + 4);
      puVar9 = (uint *)((long)param_2 + uVar14);
      param_2 = param_2 + 1;
      uVar7 = uVar6 + 1 & 0xfffffffffffffff8;
      do {
        uVar1 = param_2[-1];
        auVar23._0_15_ = ZEXT415(uVar1);
        auVar23[0xf] = auVar5[7];
        auVar22._14_2_ = auVar23._14_2_;
        auVar22._0_13_ = ZEXT413(uVar1);
        auVar22[0xd] = auVar5[6];
        auVar21._13_3_ = auVar22._13_3_;
        auVar21._0_13_ = ZEXT413(uVar1);
        auVar20._12_4_ = auVar21._12_4_;
        auVar20._4_7_ = 0;
        auVar20._0_4_ = uVar1;
        auVar20[0xb] = auVar5[5];
        auVar19._11_5_ = auVar20._11_5_;
        auVar19._4_7_ = 0;
        auVar19._0_4_ = uVar1;
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._4_5_ = 0;
        auVar18._0_4_ = uVar1;
        auVar18[9] = auVar5[4];
        auVar17._9_7_ = auVar18._9_7_;
        auVar17._4_5_ = 0;
        auVar17._0_4_ = uVar1;
        Var3 = CONCAT91(CONCAT81(auVar17._8_8_,auVar5[3]),(char)(uVar1 >> 0x18));
        auVar16._6_10_ = Var3;
        auVar16[5] = auVar5[2];
        auVar16[4] = (char)(uVar1 >> 0x10);
        auVar16._0_4_ = uVar1;
        auVar2._2_12_ = auVar16._4_12_;
        auVar2[1] = auVar5[1];
        auVar2[0] = (char)(uVar1 >> 8);
        auVar15._0_2_ = CONCAT11(auVar5[0],(char)uVar1);
        auVar15._2_14_ = auVar2;
        auVar27._0_12_ = auVar15._0_12_;
        auVar27._12_2_ = (short)Var3;
        auVar27._14_2_ = auVar5._6_2_;
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._0_10_ = auVar15._0_10_;
        auVar26._10_2_ = auVar5._4_2_;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._0_8_ = auVar15._0_8_;
        auVar25._8_2_ = auVar16._4_2_;
        auVar24._8_8_ = auVar25._8_8_;
        auVar24._6_2_ = auVar5._2_2_;
        auVar24._4_2_ = auVar2._0_2_;
        auVar24._2_2_ = auVar5._0_2_;
        auVar24._0_2_ = auVar15._0_2_;
        uVar1 = *param_2;
        auVar36._0_15_ = ZEXT415(uVar1);
        auVar36[0xf] = auVar5[7];
        auVar35._14_2_ = auVar36._14_2_;
        auVar35._0_13_ = ZEXT413(uVar1);
        auVar35[0xd] = auVar5[6];
        auVar34._13_3_ = auVar35._13_3_;
        auVar34._0_13_ = ZEXT413(uVar1);
        auVar33._12_4_ = auVar34._12_4_;
        auVar33._4_7_ = 0;
        auVar33._0_4_ = uVar1;
        auVar33[0xb] = auVar5[5];
        auVar32._11_5_ = auVar33._11_5_;
        auVar32._4_7_ = 0;
        auVar32._0_4_ = uVar1;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._4_5_ = 0;
        auVar31._0_4_ = uVar1;
        auVar31[9] = auVar5[4];
        auVar30._9_7_ = auVar31._9_7_;
        auVar30._4_5_ = 0;
        auVar30._0_4_ = uVar1;
        Var3 = CONCAT91(CONCAT81(auVar30._8_8_,auVar5[3]),(char)(uVar1 >> 0x18));
        auVar29._6_10_ = Var3;
        auVar29[5] = auVar5[2];
        auVar29[4] = (char)(uVar1 >> 0x10);
        auVar29._0_4_ = uVar1;
        auVar4._2_12_ = auVar29._4_12_;
        auVar4[1] = auVar5[1];
        auVar4[0] = (char)(uVar1 >> 8);
        auVar28._0_2_ = CONCAT11(auVar5[0],(char)uVar1);
        auVar28._2_14_ = auVar4;
        auVar40._0_12_ = auVar28._0_12_;
        auVar40._12_2_ = (short)Var3;
        auVar40._14_2_ = auVar5._6_2_;
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._0_10_ = auVar28._0_10_;
        auVar39._10_2_ = auVar5._4_2_;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._0_8_ = auVar28._0_8_;
        auVar38._8_2_ = auVar29._4_2_;
        auVar37._8_8_ = auVar38._8_8_;
        auVar37._6_2_ = auVar5._2_2_;
        auVar37._4_2_ = auVar4._0_2_;
        auVar37._2_2_ = auVar5._0_2_;
        auVar37._0_2_ = auVar28._0_2_;
        pauVar10[-1] = auVar24 & auVar5;
        *pauVar10 = auVar37 & auVar5;
        pauVar10 = pauVar10 + 2;
        param_2 = param_2 + 2;
        uVar7 = uVar7 - 8;
        uVar12 = uVar14;
      } while (uVar7 != 0);
    }
    if (uVar6 + 1 != uVar12) {
      uVar1 = param_3 - 1;
      if ((param_3 & 3) != 0) {
        lVar13 = 0;
        lVar8 = 0;
        do {
          puVar11[lVar8] = (uint)*(byte *)((long)puVar9 + lVar8);
          lVar8 = lVar8 + 1;
          lVar13 = lVar13 + -4;
        } while ((param_3 & 3) != (uint)lVar8);
        puVar9 = (uint *)((long)puVar9 + lVar8);
        param_3 = param_3 - (uint)lVar8;
        puVar11 = (uint *)((long)puVar11 - lVar13);
      }
      if (2 < uVar1) {
        do {
          *puVar11 = (uint)(byte)*puVar9;
          puVar11[1] = (uint)*(byte *)((long)puVar9 + 1);
          puVar11[2] = (uint)*(byte *)((long)puVar9 + 2);
          puVar11[3] = (uint)*(byte *)((long)puVar9 + 3);
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 4;
          param_3 = param_3 - 4;
        } while (param_3 != 0);
      }
    }
  }
  return;
}


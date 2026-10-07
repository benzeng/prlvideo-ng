
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100694220(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined6 uVar4;
  undefined1 auVar5 [14];
  unkbyte10 Var6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 uVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar39;
  int iVar40;
  undefined1 auVar26 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  int iVar41;
  undefined1 auVar16 [16];
  undefined2 uVar19;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar7 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar8 = uVar2 & 0x1fffffff8;
    iVar14 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar25 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    uVar12 = 0;
    if (uVar8 != 0) {
      puVar11 = (uint *)(param_1 + 4);
      uVar9 = (ulong)uVar1 + 1 & 0xfffffffffffffff8;
      iVar14 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar25 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      do {
        uVar7 = puVar11[-1];
        uVar13 = (undefined1)(uVar7 >> 0x18);
        uVar19 = CONCAT11(uVar13,uVar13);
        uVar13 = (undefined1)(uVar7 >> 0x10);
        uVar3 = CONCAT35(CONCAT21(uVar19,uVar13),CONCAT14(uVar13,uVar7));
        uVar18 = (undefined1)(uVar7 >> 8);
        uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar3 >> 0x20),uVar18),uVar18);
        uVar13 = (undefined1)uVar7;
        auVar17._0_2_ = CONCAT11(uVar13,uVar13);
        uVar12 = CONCAT62(uVar4,auVar17._0_2_);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar12;
        auVar16._12_2_ = uVar19;
        auVar16._14_2_ = uVar19;
        uVar19 = (undefined2)((ulong)uVar3 >> 0x20);
        auVar15._12_4_ = auVar16._12_4_;
        auVar15._8_2_ = 0;
        auVar15._0_8_ = uVar12;
        auVar15._10_2_ = uVar19;
        auVar24._10_6_ = auVar15._10_6_;
        auVar24._8_2_ = uVar19;
        auVar24._0_8_ = uVar12;
        uVar19 = (undefined2)uVar4;
        auVar17._8_8_ = auVar24._8_8_;
        auVar17._6_2_ = uVar19;
        auVar17._4_2_ = uVar19;
        auVar17._2_2_ = auVar17._0_2_;
        uVar7 = *puVar11;
        auVar34._0_15_ = ZEXT415(uVar7);
        auVar34[0xf] = uVar18;
        auVar33._14_2_ = auVar34._14_2_;
        auVar33._0_13_ = ZEXT413(uVar7);
        auVar33[0xd] = uVar18;
        auVar32._13_3_ = auVar33._13_3_;
        auVar32._0_13_ = ZEXT413(uVar7);
        auVar31._12_4_ = auVar32._12_4_;
        auVar31._4_7_ = 0;
        auVar31._0_4_ = uVar7;
        auVar31[0xb] = uVar18;
        auVar30._11_5_ = auVar31._11_5_;
        auVar30._4_7_ = 0;
        auVar30._0_4_ = uVar7;
        auVar29._10_6_ = auVar30._10_6_;
        auVar29._4_5_ = 0;
        auVar29._0_4_ = uVar7;
        auVar29[9] = uVar18;
        auVar28._9_7_ = auVar29._9_7_;
        auVar28._4_5_ = 0;
        auVar28._0_4_ = uVar7;
        Var6 = CONCAT91(CONCAT81(auVar28._8_8_,uVar13),(char)(uVar7 >> 0x18));
        auVar27._6_10_ = Var6;
        auVar27[5] = uVar13;
        auVar27[4] = (char)(uVar7 >> 0x10);
        auVar27._0_4_ = uVar7;
        auVar5._2_12_ = auVar27._4_12_;
        auVar5[1] = uVar13;
        auVar5[0] = (char)(uVar7 >> 8);
        auVar26._0_2_ = CONCAT11(uVar13,(char)uVar7);
        auVar26._2_14_ = auVar5;
        auVar37._0_12_ = auVar26._0_12_;
        auVar37._12_2_ = (short)Var6;
        auVar37._14_2_ = uVar19;
        auVar36._12_4_ = auVar37._12_4_;
        auVar36._0_10_ = auVar26._0_10_;
        auVar36._10_2_ = uVar19;
        auVar35._10_6_ = auVar36._10_6_;
        auVar35._0_8_ = auVar26._0_8_;
        auVar35._8_2_ = auVar27._4_2_;
        auVar38._8_8_ = auVar35._8_8_;
        auVar38._6_2_ = auVar17._0_2_;
        auVar38._4_2_ = auVar5._0_2_;
        auVar38._2_2_ = auVar17._0_2_;
        auVar38._0_2_ = auVar26._0_2_;
        auVar17 = auVar17 & _DAT_100b2ea40;
        auVar38 = auVar38 & _DAT_100b2ea40;
        iVar14 = auVar17._0_4_ + iVar14;
        iVar20 = auVar17._4_4_ + iVar20;
        iVar21 = auVar17._8_4_ + iVar21;
        iVar22 = auVar17._12_4_ + iVar22;
        iVar25 = auVar38._0_4_ + iVar25;
        iVar39 = auVar38._4_4_ + iVar39;
        iVar40 = auVar38._8_4_ + iVar40;
        iVar41 = auVar38._12_4_ + iVar41;
        puVar11 = puVar11 + 2;
        uVar9 = uVar9 - 8;
        uVar12 = uVar8;
      } while (uVar9 != 0);
    }
    auVar23._0_4_ = iVar21 + iVar40 + iVar14 + iVar25;
    auVar23._4_4_ = iVar22 + iVar41 + iVar20 + iVar39;
    auVar23._8_4_ = iVar14 + iVar25 + iVar21 + iVar40;
    auVar23._12_4_ = iVar20 + iVar39 + iVar22 + iVar41;
    auVar24 = phaddd(auVar23,auVar23);
    uVar7 = auVar24._0_4_;
    if (uVar2 != uVar12) {
      iVar14 = (int)uVar12;
      if ((param_2 & 3) != 0) {
        iVar20 = -(param_2 & 3);
        do {
          uVar7 = uVar7 + *(byte *)(param_1 + uVar12);
          uVar12 = uVar12 + 1;
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0);
      }
      if (2 < uVar1 - iVar14) {
        pbVar10 = (byte *)(param_1 + 3 + uVar12);
        iVar14 = (param_2 + 3) - ((int)uVar12 + 3);
        do {
          uVar7 = (uint)*pbVar10 + (uint)pbVar10[-1] + (uint)pbVar10[-2] + pbVar10[-3] + uVar7;
          pbVar10 = pbVar10 + 4;
          iVar14 = iVar14 + -4;
        } while (iVar14 != 0);
      }
    }
    uVar7 = ~uVar7;
  }
  return uVar7;
}


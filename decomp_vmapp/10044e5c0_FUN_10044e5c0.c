
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e5c0(uint *param_1,ushort *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  ushort *puVar12;
  uint *puVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar18;
  uint uVar20;
  uint uVar22;
  undefined1 auVar17 [16];
  uint uVar24;
  uint uVar27;
  uint uVar29;
  uint uVar31;
  undefined1 auVar26 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar16;
  uint uVar19;
  uint uVar21;
  uint uVar23;
  uint uVar25;
  uint uVar28;
  uint uVar30;
  uint uVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  auVar7 = _DAT_100b4add0;
  auVar6 = _DAT_100b42dd0;
  auVar5 = _DAT_100b39620;
  auVar4 = _DAT_100b395f0;
  if (param_3 != 0) {
    uVar15 = param_3 - 1;
    uVar1 = (ulong)uVar15 + 1;
    uVar11 = uVar1 & 0x1fffffff8;
    if (uVar11 == 0) {
      uVar11 = 0;
      puVar12 = param_2;
      puVar13 = param_1;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffff8);
      puVar12 = param_2 + uVar11;
      puVar13 = param_1 + uVar11;
      pauVar10 = (undefined1 (*) [16])(param_1 + 4);
      puVar9 = (ulong *)(param_2 + 4);
      uVar8 = (ulong)uVar15 + 1 & 0xfffffffffffffff8;
      do {
        uVar2 = puVar9[-1];
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar2;
        auVar41._12_2_ = (short)(uVar2 >> 0x30);
        auVar41._14_2_ = in_XMM0._6_2_;
        auVar40._12_4_ = auVar41._12_4_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar2;
        auVar40._10_2_ = in_XMM0._4_2_;
        auVar39._10_6_ = auVar40._10_6_;
        auVar39._8_2_ = (short)(uVar2 >> 0x20);
        auVar39._0_8_ = uVar2;
        auVar42._8_8_ = auVar39._8_8_;
        auVar42._6_2_ = in_XMM0._2_2_;
        auVar42._4_2_ = (short)(uVar2 >> 0x10);
        auVar42._0_2_ = (undefined2)uVar2;
        auVar42._2_2_ = in_XMM0._0_2_;
        uVar2 = *puVar9;
        auVar35._8_4_ = 0;
        auVar35._0_8_ = uVar2;
        auVar35._12_2_ = (short)(uVar2 >> 0x30);
        auVar35._14_2_ = in_XMM0._6_2_;
        auVar34._12_4_ = auVar35._12_4_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar2;
        auVar34._10_2_ = in_XMM0._4_2_;
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._8_2_ = (short)(uVar2 >> 0x20);
        auVar33._0_8_ = uVar2;
        auVar36._8_8_ = auVar33._8_8_;
        auVar36._6_2_ = in_XMM0._2_2_;
        auVar36._4_2_ = (short)(uVar2 >> 0x10);
        auVar36._0_2_ = (undefined2)uVar2;
        auVar36._2_2_ = in_XMM0._0_2_;
        auVar42 = auVar42 & auVar7;
        auVar36 = auVar36 & auVar7;
        uVar25 = auVar42._0_4_;
        uVar24 = uVar25 >> 5;
        uVar28 = auVar42._4_4_;
        uVar27 = uVar28 >> 5;
        uVar30 = auVar42._8_4_;
        uVar32 = auVar42._12_4_;
        uVar29 = uVar30 >> 5;
        uVar31 = uVar32 >> 5;
        uVar16 = auVar36._0_4_;
        uVar15 = uVar16 >> 5;
        uVar19 = auVar36._4_4_;
        uVar18 = uVar19 >> 5;
        uVar21 = auVar36._8_4_;
        uVar23 = auVar36._12_4_;
        uVar20 = uVar21 >> 5;
        uVar22 = uVar23 >> 5;
        auVar43._0_4_ = uVar25 - uVar24;
        auVar43._4_4_ = uVar28 - uVar27;
        auVar43._8_4_ = uVar30 - uVar29;
        auVar43._12_4_ = uVar32 - uVar31;
        auVar37._0_4_ = uVar16 - uVar15;
        auVar37._4_4_ = uVar19 - uVar18;
        auVar37._8_4_ = uVar21 - uVar20;
        auVar37._12_4_ = uVar23 - uVar22;
        auVar26._0_4_ = uVar24 << 8;
        auVar26._4_4_ = uVar27 << 8;
        auVar26._8_4_ = uVar29 << 8;
        auVar26._12_4_ = uVar31 << 8;
        auVar17._0_4_ = uVar15 << 8;
        auVar17._4_4_ = uVar18 << 8;
        auVar17._8_4_ = uVar20 << 8;
        auVar17._12_4_ = uVar22 << 8;
        auVar38._0_4_ = ((uVar25 >> 10) - uVar24) * 0x10000;
        auVar38._4_4_ = ((uVar28 >> 10) - uVar27) * 0x10000;
        auVar38._8_4_ = ((uVar30 >> 10) - uVar29) * 0x10000;
        auVar38._12_4_ = ((uVar32 >> 10) - uVar31) * 0x10000;
        auVar14._0_4_ = ((uVar16 >> 10) - uVar15) * 0x10000;
        auVar14._4_4_ = ((uVar19 >> 10) - uVar18) * 0x10000;
        auVar14._8_4_ = ((uVar21 >> 10) - uVar20) * 0x10000;
        auVar14._12_4_ = ((uVar23 >> 10) - uVar22) * 0x10000;
        in_XMM0 = auVar14 & auVar5 | auVar17 & auVar6 | auVar37 & auVar4;
        pauVar10[-1] = auVar38 & auVar5 | auVar26 & auVar6 | auVar43 & auVar4;
        *pauVar10 = in_XMM0;
        pauVar10 = pauVar10 + 2;
        puVar9 = puVar9 + 2;
        uVar8 = uVar8 - 8;
      } while (uVar8 != 0);
    }
    if (uVar1 != uVar11) {
      do {
        uVar3 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar13 = ((uint)(uVar3 >> 10) - (uint)(uVar3 >> 5) & 0x1f) << 0x10 |
                   (uVar3 & 0x3e0) << 3 | (uint)uVar3 - (uint)(uVar3 >> 5) & 0x1f;
        puVar13 = puVar13 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


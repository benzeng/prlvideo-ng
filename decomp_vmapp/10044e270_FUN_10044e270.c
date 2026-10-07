
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e270(uint *param_1,ushort *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong *puVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ushort *puVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar33 [16];
  
  auVar7 = _DAT_100b4add0;
  auVar6 = _DAT_100b42e00;
  auVar5 = _DAT_100b42df0;
  auVar4 = _DAT_100b42de0;
  if (param_3 != 0) {
    uVar10 = param_3 - 1;
    uVar1 = (ulong)uVar10 + 1;
    uVar13 = uVar1 & 0x1fffffff8;
    if (uVar13 == 0) {
      uVar13 = 0;
      puVar9 = param_1;
      puVar14 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffff8);
      puVar14 = param_2 + uVar13;
      puVar9 = param_1 + uVar13;
      pauVar12 = (undefined1 (*) [16])(param_1 + 4);
      puVar11 = (ulong *)(param_2 + 4);
      uVar8 = (ulong)uVar10 + 1 & 0xfffffffffffffff8;
      do {
        uVar2 = puVar11[-1];
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar2;
        auVar19._12_2_ = (short)(uVar2 >> 0x30);
        auVar19._14_2_ = in_XMM0._6_2_;
        auVar18._12_4_ = auVar19._12_4_;
        auVar18._8_2_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18._10_2_ = in_XMM0._4_2_;
        auVar17._10_6_ = auVar18._10_6_;
        auVar17._8_2_ = (short)(uVar2 >> 0x20);
        auVar17._0_8_ = uVar2;
        auVar20._8_8_ = auVar17._8_8_;
        auVar20._6_2_ = in_XMM0._2_2_;
        auVar20._4_2_ = (short)(uVar2 >> 0x10);
        auVar20._0_2_ = (undefined2)uVar2;
        auVar20._2_2_ = in_XMM0._0_2_;
        uVar2 = *puVar11;
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24._12_2_ = (short)(uVar2 >> 0x30);
        auVar24._14_2_ = in_XMM0._6_2_;
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._10_2_ = in_XMM0._4_2_;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._8_2_ = (short)(uVar2 >> 0x20);
        auVar22._0_8_ = uVar2;
        auVar25._8_8_ = auVar22._8_8_;
        auVar25._6_2_ = in_XMM0._2_2_;
        auVar25._4_2_ = (short)(uVar2 >> 0x10);
        auVar25._0_2_ = (undefined2)uVar2;
        auVar25._2_2_ = in_XMM0._0_2_;
        auVar20 = auVar20 & auVar7;
        auVar25 = auVar25 & auVar7;
        iVar27 = auVar20._0_4_;
        iVar29 = auVar20._4_4_;
        auVar28._4_4_ = iVar29 * 2;
        auVar28._0_4_ = iVar27 * 2;
        iVar30 = auVar20._8_4_;
        iVar31 = auVar20._12_4_;
        auVar28._8_4_ = iVar30 * 2;
        auVar28._12_4_ = iVar31 * 2;
        iVar32 = auVar25._0_4_;
        iVar34 = auVar25._4_4_;
        auVar33._4_4_ = iVar34 * 2;
        auVar33._0_4_ = iVar32 * 2;
        iVar35 = auVar25._8_4_;
        iVar36 = auVar25._12_4_;
        auVar33._8_4_ = iVar35 * 2;
        auVar33._12_4_ = iVar36 * 2;
        auVar15._0_4_ = iVar27 << 3;
        auVar15._4_4_ = iVar29 << 3;
        auVar15._8_4_ = iVar30 << 3;
        auVar15._12_4_ = iVar31 << 3;
        auVar16._0_4_ = iVar32 << 3;
        auVar16._4_4_ = iVar34 << 3;
        auVar16._8_4_ = iVar35 << 3;
        auVar16._12_4_ = iVar36 << 3;
        in_XMM0 = auVar15 & auVar5 | auVar28 & auVar4;
        auVar21._0_4_ = iVar27 << 6;
        auVar21._4_4_ = iVar29 << 6;
        auVar21._8_4_ = iVar30 << 6;
        auVar21._12_4_ = iVar31 << 6;
        auVar26._0_4_ = iVar32 << 6;
        auVar26._4_4_ = iVar34 << 6;
        auVar26._8_4_ = iVar35 << 6;
        auVar26._12_4_ = iVar36 << 6;
        pauVar12[-1] = auVar21 & auVar6 | in_XMM0;
        *pauVar12 = auVar26 & auVar6 | auVar16 & auVar5 | auVar33 & auVar4;
        pauVar12 = pauVar12 + 2;
        puVar11 = puVar11 + 2;
        uVar8 = uVar8 - 8;
      } while (uVar8 != 0);
    }
    if (uVar1 != uVar13) {
      uVar10 = param_3 - 1;
      if ((param_3 & 1) != 0) {
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar9 = (uVar3 & 0xf800) << 6 |
                  (uint)uVar3 * 8 & 0x3f00 | (uint)uVar3 + (uint)uVar3 & 0x3e;
        puVar9 = puVar9 + 1;
        param_3 = uVar10;
      }
      while (uVar10 != 0) {
        uVar3 = *puVar14;
        *puVar9 = (uVar3 & 0xf800) << 6 |
                  (uint)uVar3 * 8 & 0x3f00 | (uint)uVar3 + (uint)uVar3 & 0x3e;
        uVar3 = puVar14[1];
        puVar9[1] = (uVar3 & 0xf800) << 6 |
                    (uint)uVar3 * 8 & 0x3f00 | (uint)uVar3 + (uint)uVar3 & 0x3e;
        puVar14 = puVar14 + 2;
        puVar9 = puVar9 + 2;
        uVar10 = param_3 - 2;
        param_3 = uVar10;
      }
    }
  }
  return;
}


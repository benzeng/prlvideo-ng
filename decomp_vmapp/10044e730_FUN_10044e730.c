
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e730(uint *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  uint *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar20 = _DAT_100b4add0;
  uVar19 = _UNK_100b42e3c;
  uVar18 = _UNK_100b42e38;
  uVar17 = _UNK_100b42e34;
  uVar16 = _DAT_100b42e30;
  uVar15 = _UNK_100b42e2c;
  uVar14 = _UNK_100b42e28;
  uVar13 = _UNK_100b42e24;
  uVar12 = _DAT_100b42e20;
  uVar11 = _UNK_100b42dfc;
  uVar10 = _UNK_100b42df8;
  uVar9 = _UNK_100b42df4;
  uVar8 = _DAT_100b42df0;
  uVar7 = _UNK_100b42dec;
  uVar6 = _UNK_100b42de8;
  uVar5 = _UNK_100b42de4;
  uVar4 = _DAT_100b42de0;
  if (param_3 != 0) {
    uVar29 = param_3 - 1;
    uVar1 = (ulong)uVar29 + 1;
    uVar22 = uVar1 & 0x1fffffffc;
    if (uVar22 == 0) {
      uVar22 = 0;
      puVar23 = param_2;
      puVar24 = param_1;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar23 = (ulong *)((long)param_2 + uVar22 * 2);
      puVar24 = param_1 + uVar22;
      uVar21 = (ulong)uVar29 + 1 & 0xfffffffffffffffc;
      do {
        uVar2 = *param_2;
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar2;
        auVar27._12_2_ = (short)(uVar2 >> 0x30);
        auVar27._14_2_ = auVar20._6_2_;
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26._10_2_ = auVar20._4_2_;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = (short)(uVar2 >> 0x20);
        auVar25._0_8_ = uVar2;
        auVar28._8_8_ = auVar25._8_8_;
        auVar28._6_2_ = auVar20._2_2_;
        auVar28._4_2_ = (short)(uVar2 >> 0x10);
        auVar28._0_2_ = (undefined2)uVar2;
        auVar28._2_2_ = auVar20._0_2_;
        auVar28 = auVar28 & auVar20;
        uVar29 = auVar28._0_4_;
        uVar30 = auVar28._4_4_;
        uVar31 = auVar28._8_4_;
        uVar32 = auVar28._12_4_;
        uVar33 = uVar29 >> 5;
        uVar34 = uVar30 >> 5;
        uVar35 = uVar31 >> 5;
        uVar36 = uVar32 >> 5;
        *param_1 = ((uVar29 >> 10 & uVar4) - uVar33) * 0x10000 & uVar16 |
                   uVar33 << 8 & uVar8 | uVar29 * 2 - uVar33 & uVar12;
        param_1[1] = ((uVar30 >> 10 & uVar5) - uVar34) * 0x10000 & uVar17 |
                     uVar34 << 8 & uVar9 | uVar30 * 2 - uVar34 & uVar13;
        param_1[2] = ((uVar31 >> 10 & uVar6) - uVar35) * 0x10000 & uVar18 |
                     uVar35 << 8 & uVar10 | uVar31 * 2 - uVar35 & uVar14;
        param_1[3] = ((uVar32 >> 10 & uVar7) - uVar36) * 0x10000 & uVar19 |
                     uVar36 << 8 & uVar11 | uVar32 * 2 - uVar36 & uVar15;
        param_1 = param_1 + 4;
        param_2 = param_2 + 1;
        uVar21 = uVar21 - 4;
      } while (uVar21 != 0);
    }
    if (uVar1 != uVar22) {
      do {
        uVar3 = (ushort)*puVar23;
        puVar23 = (ulong *)((long)puVar23 + 2);
        *puVar24 = ((uint)(uVar3 >> 0xb) * 2 - (uint)(uVar3 >> 5) & 0x3f) << 0x10 |
                   (uVar3 & 0x7e0) << 3 | ((uint)uVar3 + (uint)uVar3) - (uint)(uVar3 >> 5) & 0x3f;
        puVar24 = puVar24 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


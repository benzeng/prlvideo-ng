
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e9c0(uint *param_1,ulong *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined1 in_XMM0 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar25 [16];
  
  auVar16 = _DAT_100b4add0;
  uVar15 = _UNK_100b42e58;
  iVar14 = _DAT_100b42e50;
  uVar13 = _UNK_100b42e48;
  iVar12 = _DAT_100b42e40;
  uVar11 = _UNK_100b406e8;
  iVar10 = _DAT_100b406e0;
  iVar9 = _UNK_100b3f6bc;
  iVar8 = _UNK_100b3f6b8;
  iVar7 = _UNK_100b3f6b4;
  iVar6 = _DAT_100b3f6b0;
  auVar5 = _DAT_100b395f0;
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar19 = uVar2 & 0x1fffffffc;
    if (uVar19 == 0) {
      uVar19 = 0;
      puVar18 = param_1;
      puVar20 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar2 & 0xfffffffc);
      puVar20 = (ulong *)((long)param_2 + uVar19 * 2);
      puVar18 = param_1 + uVar19;
      uVar17 = (ulong)uVar1 + 1 & 0xfffffffffffffffc;
      do {
        uVar3 = *param_2;
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar3;
        auVar25._12_2_ = (short)(uVar3 >> 0x30);
        auVar25._14_2_ = in_XMM0._6_2_;
        auVar24._12_4_ = auVar25._12_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar3;
        auVar24._10_2_ = in_XMM0._4_2_;
        auVar27._10_6_ = auVar24._10_6_;
        auVar27._8_2_ = (short)(uVar3 >> 0x20);
        auVar27._0_8_ = uVar3;
        auVar26._8_8_ = auVar27._8_8_;
        auVar26._6_2_ = in_XMM0._2_2_;
        auVar26._4_2_ = (short)(uVar3 >> 0x10);
        auVar26._0_2_ = (undefined2)uVar3;
        auVar26._2_2_ = in_XMM0._0_2_;
        auVar27 = auVar26 & auVar16;
        auVar26 = auVar26 & auVar5;
        auVar21._0_4_ = auVar27._0_4_ >> 5;
        auVar21._4_4_ = auVar27._4_4_ >> 5;
        auVar21._8_4_ = auVar27._8_4_ >> 5;
        auVar21._12_4_ = auVar27._12_4_ >> 5;
        auVar21 = auVar21 & auVar5;
        auVar28._0_4_ = auVar27._0_4_ >> 10;
        auVar28._4_4_ = auVar27._4_4_ >> 10;
        auVar28._8_4_ = auVar27._8_4_ >> 10;
        auVar28._12_4_ = auVar27._12_4_ >> 10;
        auVar28 = auVar28 & auVar5;
        in_XMM0._0_4_ = auVar21._0_4_ * iVar10;
        iVar22 = auVar21._4_4_ * iVar10;
        iVar23 = auVar21._12_4_ * uVar11;
        in_XMM0._8_4_ = (int)((auVar21._8_8_ & 0xffffffff) * (ulong)uVar11);
        in_XMM0._4_4_ = iVar22;
        in_XMM0._12_4_ = iVar23;
        *param_1 = (uint)(auVar26._0_4_ * iVar14 + in_XMM0._0_4_ + auVar28._0_4_ * iVar12 + iVar6)
                   >> 8;
        param_1[1] = (uint)(auVar26._4_4_ * iVar14 + iVar22 + auVar28._4_4_ * iVar12 + iVar7) >> 8;
        param_1[2] = (uint)((int)((auVar26._8_8_ & 0xffffffff) * (ulong)uVar15) + in_XMM0._8_4_ +
                            (int)((auVar28._8_8_ & 0xffffffff) * (ulong)uVar13) + iVar8) >> 8;
        param_1[3] = auVar26._12_4_ * uVar15 + iVar23 + auVar28._12_4_ * uVar13 + iVar9 >> 8;
        param_1 = param_1 + 4;
        param_2 = param_2 + 1;
        uVar17 = uVar17 - 4;
      } while (uVar17 != 0);
    }
    if (uVar2 != uVar19) {
      do {
        uVar4 = (ushort)*puVar20;
        puVar20 = (ulong *)((long)puVar20 + 2);
        *puVar18 = (uVar4 >> 10 & 0x1f) * 0x4d + 0x80 +
                   (uVar4 & 0x1f) * 0x1d + (uVar4 >> 5 & 0x1f) * 0x96 >> 8;
        puVar18 = puVar18 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


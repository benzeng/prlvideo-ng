
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044eb20(uint *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined2 uVar26;
  
  auVar16 = _DAT_100b4add0;
  uVar15 = _UNK_100b42e58;
  iVar14 = _DAT_100b42e50;
  uVar13 = _UNK_100b42e48;
  iVar12 = _DAT_100b42e40;
  auVar11 = _DAT_100b42e20;
  auVar10 = _DAT_100b42de0;
  uVar9 = _UNK_100b406e8;
  iVar8 = _DAT_100b406e0;
  iVar7 = _UNK_100b3f6bc;
  iVar6 = _UNK_100b3f6b8;
  iVar5 = _UNK_100b3f6b4;
  iVar4 = _DAT_100b3f6b0;
  if (param_3 != 0) {
    uVar27 = param_3 - 1;
    uVar1 = (ulong)uVar27 + 1;
    uVar19 = uVar1 & 0x1fffffffc;
    if (uVar19 == 0) {
      uVar19 = 0;
      puVar18 = param_1;
      puVar20 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar20 = (ulong *)((long)param_2 + uVar19 * 2);
      puVar18 = param_1 + uVar19;
      uVar17 = (ulong)uVar27 + 1 & 0xfffffffffffffffc;
      do {
        uVar2 = *param_2;
        uVar26 = (undefined2)(uVar2 >> 0x30);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._12_2_ = uVar26;
        auVar23._14_2_ = uVar26;
        uVar26 = (undefined2)(uVar2 >> 0x20);
        auVar22._12_4_ = auVar23._12_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar2;
        auVar22._10_2_ = uVar26;
        auVar21._10_6_ = auVar22._10_6_;
        auVar21._8_2_ = uVar26;
        auVar21._0_8_ = uVar2;
        uVar26 = (undefined2)(uVar2 >> 0x10);
        auVar24._8_8_ = auVar21._8_8_;
        auVar24._6_2_ = uVar26;
        auVar24._4_2_ = uVar26;
        auVar24._0_2_ = (undefined2)uVar2;
        auVar24._2_2_ = auVar24._0_2_;
        auVar24 = auVar24 & auVar16;
        uVar27 = auVar24._0_4_;
        uVar29 = auVar24._4_4_;
        auVar28._4_4_ = uVar29 * 2;
        auVar28._0_4_ = uVar27 * 2;
        uVar30 = auVar24._8_4_;
        uVar31 = auVar24._12_4_;
        auVar28._8_4_ = uVar30 * 2;
        auVar28._12_4_ = uVar31 * 2;
        auVar28 = auVar28 & auVar10;
        auVar32._0_4_ = uVar27 >> 5;
        auVar32._4_4_ = uVar29 >> 5;
        auVar32._8_4_ = uVar30 >> 5;
        auVar32._12_4_ = uVar31 >> 5;
        auVar32 = auVar32 & auVar11;
        auVar25._0_4_ = uVar27 >> 10;
        auVar25._4_4_ = uVar29 >> 10;
        auVar25._8_4_ = uVar30 >> 10;
        auVar25._12_4_ = uVar31 >> 10;
        auVar25 = auVar25 & auVar10;
        *param_1 = (uint)(auVar32._0_4_ * iVar8 + auVar25._0_4_ * iVar12 + auVar28._0_4_ * iVar14 +
                         iVar4) >> 8;
        param_1[1] = (uint)(auVar32._4_4_ * iVar8 + auVar25._4_4_ * iVar12 + auVar28._4_4_ * iVar14
                           + iVar5) >> 8;
        param_1[2] = (uint)((int)((auVar32._8_8_ & 0xffffffff) * (ulong)uVar9) +
                            (int)((auVar25._8_8_ & 0xffffffff) * (ulong)uVar13) +
                            (int)((auVar28._8_8_ & 0xffffffff) * (ulong)uVar15) + iVar6) >> 8;
        param_1[3] = auVar32._12_4_ * uVar9 + auVar25._12_4_ * uVar13 + auVar28._12_4_ * uVar15 +
                     iVar7 >> 8;
        param_1 = param_1 + 4;
        param_2 = param_2 + 1;
        uVar17 = uVar17 - 4;
      } while (uVar17 != 0);
    }
    if (uVar1 != uVar19) {
      do {
        uVar3 = (ushort)*puVar20;
        puVar20 = (ulong *)((long)puVar20 + 2);
        *puVar18 = ((uint)uVar3 + (uint)uVar3 & 0x3e) * 0x1d + 0x80 +
                   (uVar3 >> 5 & 0x3f) * 0x96 + (uVar3 >> 10 & 0x3e) * 0x4d >> 8;
        puVar18 = puVar18 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


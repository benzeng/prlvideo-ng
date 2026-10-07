
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004517e0(ushort *param_1,undefined1 (*param_2) [16],int param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined1 (*pauVar18) [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar24;
  int iVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar11 = _UNK_100b42e7c;
  iVar10 = _UNK_100b42e78;
  iVar9 = _UNK_100b42e74;
  iVar8 = _DAT_100b42e70;
  auVar7 = _DAT_100b42e60;
  auVar6 = _DAT_100b42d40;
  auVar5 = _DAT_100b3f6c0;
  auVar4 = _DAT_100b395f0;
  auVar3 = _DAT_100b395d0;
  auVar2 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar14 = param_3 - 1;
    uVar1 = (ulong)uVar14 + 1;
    uVar16 = uVar1 & 0x1fffffffc;
    if (uVar16 == 0) {
      uVar16 = 0;
      puVar17 = param_1;
      pauVar18 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar17 = param_1 + uVar16;
      pauVar18 = (undefined1 (*) [16])(*param_2 + uVar16 * 4);
      uVar13 = (ulong)uVar14 + 1 & 0xfffffffffffffffc;
      do {
        auVar21 = *param_2;
        auVar28 = auVar21 & auVar7 ^ auVar5;
        auVar29._0_4_ = -(uint)(iVar8 < auVar28._0_4_);
        auVar29._4_4_ = -(uint)(iVar9 < auVar28._4_4_);
        auVar29._8_4_ = -(uint)(iVar10 < auVar28._8_4_);
        auVar29._12_4_ = -(uint)(iVar11 < auVar28._12_4_);
        auVar28._0_4_ = auVar21._0_4_ >> 8;
        auVar28._4_4_ = auVar21._4_4_ >> 8;
        auVar28._8_4_ = auVar21._8_4_ >> 8;
        auVar28._12_4_ = auVar21._12_4_ >> 8;
        auVar27._0_4_ = auVar21._0_4_ >> 0x10;
        auVar27._4_4_ = auVar21._4_4_ >> 0x10;
        auVar27._8_4_ = auVar21._8_4_ >> 0x10;
        auVar27._12_4_ = auVar21._12_4_ >> 0x10;
        auVar30 = ~auVar29 & auVar21 | auVar4 & auVar29;
        auVar21 = auVar28 & auVar2 ^ auVar5;
        auVar22._0_4_ = -(uint)(iVar8 < auVar21._0_4_);
        auVar22._4_4_ = -(uint)(iVar9 < auVar21._4_4_);
        auVar22._8_4_ = -(uint)(iVar10 < auVar21._8_4_);
        auVar22._12_4_ = -(uint)(iVar11 < auVar21._12_4_);
        auVar28 = ~auVar22 & auVar28 & auVar2 | auVar4 & auVar22;
        auVar21 = auVar27 & auVar7 ^ auVar5;
        auVar19._0_4_ = -(uint)(iVar8 < auVar21._0_4_);
        auVar19._4_4_ = -(uint)(iVar9 < auVar21._4_4_);
        auVar19._8_4_ = -(uint)(iVar10 < auVar21._8_4_);
        auVar19._12_4_ = -(uint)(iVar11 < auVar21._12_4_);
        auVar21 = ~auVar19 & auVar27 | auVar4 & auVar19;
        iVar20 = auVar28._0_4_;
        auVar31._0_4_ = auVar30._0_4_ + iVar20;
        iVar24 = auVar28._4_4_;
        auVar31._4_4_ = auVar30._4_4_ + iVar24;
        iVar25 = auVar28._8_4_;
        auVar31._8_4_ = auVar30._8_4_ + iVar25;
        iVar26 = auVar28._12_4_;
        auVar31._12_4_ = auVar30._12_4_ + iVar26;
        auVar23._0_4_ = iVar20 << 5;
        auVar23._4_4_ = iVar24 << 5;
        auVar23._8_4_ = iVar25 << 5;
        auVar23._12_4_ = iVar26 << 5;
        auVar30._0_4_ = (auVar21._0_4_ + iVar20) * 0x400;
        auVar30._4_4_ = (auVar21._4_4_ + iVar24) * 0x400;
        auVar30._8_4_ = (auVar21._8_4_ + iVar25) * 0x400;
        auVar30._12_4_ = (auVar21._12_4_ + iVar26) * 0x400;
        auVar21 = pshufb(auVar30 & auVar3 | auVar23 | auVar31 & auVar4,auVar6);
        *(long *)param_1 = auVar21._0_8_;
        param_2 = param_2 + 1;
        param_1 = param_1 + 4;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
    }
    if (uVar1 != uVar16) {
      do {
        uVar14 = *(uint *)*pauVar18;
        pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
        uVar15 = uVar14 >> 8 & 0xff;
        uVar12 = uVar14 >> 0x10;
        if (0x1f < (uVar14 & 0xe0)) {
          uVar14 = 0x1f;
        }
        if (0x1f < uVar15) {
          uVar15 = 0x1f;
        }
        if (0x1f < (uVar12 & 0xe0)) {
          uVar12 = 0x1f;
        }
        *puVar17 = (ushort)((uVar12 + uVar15 & 0x1f) << 10) |
                   (ushort)(uVar15 << 5) | (short)uVar14 + (short)uVar15 & 0x1fU;
        puVar17 = puVar17 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451300(ushort *param_1,undefined1 (*param_2) [16],int param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  ulong uVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  ushort *puVar20;
  undefined1 (*pauVar21) [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  iVar13 = _UNK_100b42e7c;
  iVar12 = _UNK_100b42e78;
  iVar11 = _UNK_100b42e74;
  iVar10 = _DAT_100b42e70;
  auVar9 = _DAT_100b42e60;
  auVar8 = _DAT_100b42d40;
  auVar7 = _DAT_100b3f6c0;
  auVar6 = _DAT_100b395f0;
  auVar5 = _DAT_100b395e0;
  auVar4 = _DAT_100b395d0;
  auVar3 = _DAT_100b2ea40;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
    uVar1 = (ulong)uVar2 + 1;
    uVar19 = uVar1 & 0x1fffffffc;
    if (uVar19 == 0) {
      uVar19 = 0;
      puVar20 = param_1;
      pauVar21 = param_2;
    }
    else {
      param_3 = param_3 - ((uint)uVar1 & 0xfffffffc);
      puVar20 = param_1 + uVar19;
      pauVar21 = (undefined1 (*) [16])(*param_2 + uVar19 * 4);
      uVar15 = (ulong)uVar2 + 1 & 0xfffffffffffffffc;
      do {
        auVar25 = *param_2;
        auVar29 = auVar25 & auVar3;
        auVar24._0_4_ = auVar25._0_4_ >> 8;
        auVar24._4_4_ = auVar25._4_4_ >> 8;
        auVar24._8_4_ = auVar25._8_4_ >> 8;
        auVar24._12_4_ = auVar25._12_4_ >> 8;
        auVar24 = auVar24 & auVar3;
        auVar27._0_4_ = auVar25._0_4_ >> 0x10;
        auVar27._4_4_ = auVar25._4_4_ >> 0x10;
        auVar27._8_4_ = auVar25._8_4_ >> 0x10;
        auVar27._12_4_ = auVar25._12_4_ >> 0x10;
        auVar25 = auVar29 ^ auVar7;
        auVar26._0_4_ = -(uint)(iVar10 < auVar25._0_4_);
        auVar26._4_4_ = -(uint)(iVar11 < auVar25._4_4_);
        auVar26._8_4_ = -(uint)(iVar12 < auVar25._8_4_);
        auVar26._12_4_ = -(uint)(iVar13 < auVar25._12_4_);
        auVar25 = auVar24 ^ auVar7;
        auVar22._0_4_ = -(uint)(iVar10 < auVar25._0_4_);
        auVar22._4_4_ = -(uint)(iVar11 < auVar25._4_4_);
        auVar22._8_4_ = -(uint)(iVar12 < auVar25._8_4_);
        auVar22._12_4_ = -(uint)(iVar13 < auVar25._12_4_);
        auVar25 = auVar27 & auVar9 ^ auVar7;
        auVar23._0_4_ = -(uint)(iVar10 < auVar25._0_4_);
        auVar23._4_4_ = -(uint)(iVar11 < auVar25._4_4_);
        auVar23._8_4_ = -(uint)(iVar12 < auVar25._8_4_);
        auVar23._12_4_ = -(uint)(iVar13 < auVar25._12_4_);
        auVar25._0_4_ = auVar24._0_4_ << 5;
        auVar25._4_4_ = auVar24._4_4_ << 5;
        auVar25._8_4_ = auVar24._8_4_ << 5;
        auVar25._12_4_ = auVar24._12_4_ << 5;
        auVar28._0_4_ = auVar27._0_4_ << 10;
        auVar28._4_4_ = auVar27._4_4_ << 10;
        auVar28._8_4_ = auVar27._8_4_ << 10;
        auVar28._12_4_ = auVar27._12_4_ << 10;
        auVar25 = pshufb(auVar23 & auVar4 | ~auVar23 & auVar28 |
                         auVar22 & auVar5 | ~auVar22 & auVar25 |
                         auVar26 & auVar6 | ~auVar26 & auVar29,auVar8);
        *(long *)param_1 = auVar25._0_8_;
        param_2 = param_2 + 1;
        param_1 = param_1 + 4;
        uVar15 = uVar15 - 4;
      } while (uVar15 != 0);
    }
    if (uVar1 != uVar19) {
      do {
        uVar2 = *(uint *)*pauVar21;
        pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        uVar14 = (ushort)(uVar2 & 0xff);
        uVar18 = uVar2 >> 8 & 0xff;
        if (0x1f < (uVar2 & 0xff)) {
          uVar14 = 0x1f;
        }
        uVar16 = (ushort)(uVar18 << 5);
        if (0x1f < uVar18) {
          uVar16 = 0x3e0;
        }
        uVar17 = (ushort)((uVar2 >> 0x10) << 10);
        if (0x1f < (uVar2 >> 0x10 & 0xe0)) {
          uVar17 = 0x7c00;
        }
        *puVar20 = uVar17 | uVar16 | uVar14;
        puVar20 = puVar20 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


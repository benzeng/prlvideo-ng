
/* WARNING: Removing unreachable block (ram,0x0001003802d9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100380220(long param_1,long param_2,int param_3,int param_4,byte param_5,uint param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined4 uVar22;
  long lVar16;
  ulong uVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar5 = _UNK_100b4afd8;
  lVar4 = _DAT_100b4afd0;
  auVar3 = _DAT_100b3f620;
  auVar2 = _DAT_100b2ea40;
  if ((0 < param_4) && (param_3 < 0x100)) {
    lVar14 = (long)param_3;
    param_4 = param_4 + param_3;
    iVar10 = param_3 + 1;
    iVar6 = iVar10;
    if (iVar10 <= param_4) {
      iVar6 = param_4;
    }
    uVar12 = param_3 - 0x100;
    uVar11 = param_3 - iVar6;
    if ((uint)(param_3 - iVar6) <= uVar12) {
      uVar11 = uVar12;
    }
    uVar13 = (ulong)~uVar11 + 1;
    lVar1 = (ulong)~uVar11 + 1 + lVar14;
    lVar7 = lVar14;
    if ((uVar13 & 0x1fffffffc) != 0) {
      lVar7 = (uVar13 & 0x1fffffffc) + lVar14;
      auVar15._1_3_ = 0;
      auVar15[0] = param_5;
      auVar15[4] = param_5;
      auVar15._5_3_ = 0;
      auVar15[8] = param_5;
      auVar15._9_3_ = 0;
      auVar15[0xc] = param_5;
      auVar15._13_3_ = 0;
      iVar6 = iVar10;
      if (iVar10 <= param_4) {
        iVar6 = param_4;
      }
      uVar11 = param_3 - iVar6;
      if ((uint)(param_3 - iVar6) <= uVar12) {
        uVar11 = uVar12;
      }
      uVar13 = (ulong)~uVar11 + 1 & 0xfffffffffffffffc;
      do {
        uVar22 = (undefined4)((ulong)lVar14 >> 0x20);
        auVar21._8_4_ = (int)lVar14;
        auVar21._0_8_ = lVar14;
        auVar21._12_4_ = uVar22;
        uVar29 = auVar21._8_8_ + 1;
        lVar16 = lVar14 + lVar4;
        uVar23 = auVar21._8_8_ + lVar5;
        auVar24._8_4_ = (int)lVar14;
        auVar24._0_8_ = uVar29;
        auVar24._12_4_ = uVar22;
        auVar17._8_4_ = (int)lVar16;
        auVar17._0_8_ = uVar23;
        auVar17._12_4_ = (int)((ulong)lVar16 >> 0x20);
        auVar18._8_8_ =
             auVar17._8_8_ & 0xffff0000ffff0000 | (ulong)*(byte *)(param_2 + lVar16 * 4) |
             (ulong)*(byte *)(param_2 + uVar23 * 4) << 0x20;
        auVar18._0_8_ =
             uVar23 & 0xffff0000ffff0000 | (ulong)*(byte *)(param_2 + lVar14 * 4) |
             (ulong)*(byte *)(param_2 + uVar29 * 4) << 0x20;
        auVar18 = auVar18 & auVar2;
        auVar19._0_8_ = CONCAT44(auVar18._4_4_ << 0x10,auVar18._0_4_ << 0x10);
        auVar19._8_4_ = auVar18._8_4_ << 0x10;
        auVar19._12_4_ = auVar18._12_4_ << 0x10;
        auVar25._8_8_ =
             auVar24._8_8_ & 0xffff0000ffff0000 | (ulong)*(byte *)(param_2 + 1 + lVar16 * 4) |
             (ulong)*(byte *)(param_2 + 1 + uVar23 * 4) << 0x20;
        auVar25._0_8_ =
             uVar29 & 0xffff0000ffff0000 | (ulong)*(byte *)(param_2 + 1 + lVar14 * 4) |
             (ulong)*(byte *)(param_2 + 1 + uVar29 * 4) << 0x20;
        auVar25 = auVar25 & auVar2;
        auVar26._0_4_ = auVar25._0_4_ << 8;
        auVar26._4_4_ = auVar25._4_4_ << 8;
        auVar26._8_4_ = auVar25._8_4_ << 8;
        auVar26._12_4_ = auVar25._12_4_ << 8;
        auVar20._8_8_ =
             auVar19._8_8_ & 0xffff0000ffff0000 | (ulong)*(byte *)(param_2 + 2 + lVar16 * 4) |
             (ulong)*(byte *)(param_2 + 2 + uVar23 * 4) << 0x20;
        auVar20._0_8_ =
             auVar19._0_8_ | *(byte *)(param_2 + 2 + lVar14 * 4) |
             (ulong)*(byte *)(param_2 + 2 + uVar29 * 4) << 0x20;
        auVar21 = auVar20 & auVar2 | auVar26 | auVar19;
        auVar27._0_4_ = -(uint)(auVar21._0_4_ == param_6);
        auVar27._4_4_ = -(uint)(auVar21._4_4_ == param_6);
        auVar27._8_4_ = -(uint)(auVar21._8_4_ == param_6);
        auVar27._12_4_ = -(uint)(auVar21._12_4_ == param_6);
        auVar27 = auVar27 & auVar15;
        auVar28._0_4_ = (auVar27._0_4_ << 0x1f) >> 0x1f;
        auVar28._4_4_ = (auVar27._4_4_ << 0x1f) >> 0x1f;
        auVar28._8_4_ = (auVar27._8_4_ << 0x1f) >> 0x1f;
        auVar28._12_4_ = (auVar27._12_4_ << 0x1f) >> 0x1f;
        *(undefined1 (*) [16])(param_1 + 8 + lVar14 * 4) = ~auVar28 & auVar3 | auVar21;
        lVar14 = lVar14 + 4;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
    }
    if (lVar1 != lVar7) {
      if (iVar10 <= param_4) {
        iVar10 = param_4;
      }
      uVar11 = param_3 - iVar10;
      if ((uint)(param_3 - iVar10) <= uVar12) {
        uVar11 = uVar12;
      }
      iVar10 = (param_3 - uVar11) - (int)lVar7;
      pbVar9 = (byte *)(param_2 + 2 + lVar7 * 4);
      puVar8 = (uint *)(param_1 + 8 + lVar7 * 4);
      do {
        uVar11 = (uint)*pbVar9 | (uint)pbVar9[-1] << 8 | (uint)pbVar9[-2] << 0x10;
        uVar12 = 0xff000000;
        if (param_5 != 0) {
          uVar12 = 0;
        }
        if (uVar11 != param_6) {
          uVar12 = 0xff000000;
        }
        *puVar8 = uVar12 | uVar11;
        pbVar9 = pbVar9 + 4;
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}


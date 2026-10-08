
/* WARNING: Removing unreachable block (ram,0x000100c223f2) */
/* WARNING: Removing unreachable block (ram,0x000100c223c6) */
/* WARNING: Removing unreachable block (ram,0x000100c22374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_init_clmul(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar9 = *param_2;
  iVar17 = auVar9._4_4_;
  auVar16._0_8_ = auVar9._8_8_;
  auVar16._8_4_ = auVar9._0_4_;
  auVar16._12_4_ = iVar17;
  auVar15._0_8_ = auVar16._0_8_ << 1;
  auVar15._8_8_ = auVar16._8_8_ << 1;
  auVar22._0_4_ = -(uint)(iVar17 < 0);
  auVar22._4_4_ = -(uint)(iVar17 < 0);
  auVar22._8_4_ = -(uint)(iVar17 < 0);
  auVar22._12_4_ = -(uint)(iVar17 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar16 = (auVar15 | (auVar9 >> 0x7f) << 0x40) ^ auVar22 & _DAT_100c22850;
  auVar18._0_8_ = auVar16._8_8_;
  auVar18._8_4_ = auVar16._0_4_;
  auVar18._12_4_ = auVar16._4_4_;
  auVar20._8_4_ = auVar16._0_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._12_4_ = auVar16._4_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar16._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar16._0_8_;
  auVar9 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar9 = auVar9 ^ auVar19 << uVar1;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar18._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar18._0_8_;
  auVar2 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar2 = auVar2 ^ auVar6 << uVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar18 ^ auVar16,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SUB168(auVar20 ^ auVar16,0);
  auVar19 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar19 = auVar19 ^ auVar4 << uVar1;
    }
  }
  auVar19 = auVar19 ^ auVar9 ^ auVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar19._0_8_;
  auVar9 = auVar9 ^ auVar7 << 0x40;
  auVar10._0_8_ = auVar9._0_8_ << 1;
  auVar10._8_8_ = auVar9._8_8_ << 1;
  auVar11._0_8_ = SUB168(auVar10 ^ auVar9,0) << 5;
  auVar11._8_8_ = SUB168(auVar10 ^ auVar9,8) << 5;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar11 ^ auVar9,0) << 0x39;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = SUB168(auVar11 ^ auVar9,8) << 0x39;
  auVar9 = auVar8 << 0x40 ^ auVar9;
  auVar12._0_8_ = auVar9._0_8_ >> 5;
  auVar12._8_8_ = auVar9._8_8_ >> 5;
  auVar13._0_8_ = SUB168(auVar12 ^ auVar9,0) >> 1;
  auVar13._8_8_ = SUB168(auVar12 ^ auVar9,8) >> 1;
  auVar14._0_8_ = SUB168(auVar13 ^ auVar9,0) >> 1;
  auVar14._8_8_ = SUB168(auVar13 ^ auVar9,8) >> 1;
  *param_1 = auVar16;
  param_1[1] = auVar14 ^ auVar9 ^ auVar2 ^ auVar19 >> 0x40 ^ auVar21;
  return;
}


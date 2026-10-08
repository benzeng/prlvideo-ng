
/* WARNING: Removing unreachable block (ram,0x000100c224ba) */
/* WARNING: Removing unreachable block (ram,0x000100c2248e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_gmult_clmul(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar14 = *param_2;
  auVar7 = pshufb(*param_1,_DAT_100c22840);
  auVar15._0_8_ = auVar7._8_8_;
  auVar15._8_4_ = auVar7._0_4_;
  auVar15._12_4_ = auVar7._4_4_;
  auVar17._0_8_ = auVar14._8_8_;
  auVar17._8_4_ = auVar14._0_4_;
  auVar17._12_4_ = auVar14._4_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar7._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar14._0_8_;
  auVar8 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar8 = auVar8 ^ auVar16 << uVar1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar15._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar17._0_8_;
  auVar2 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar2 = auVar2 ^ auVar5 << uVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar15 ^ auVar7,0);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar17 ^ auVar14,0);
  auVar14 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar14 = auVar14 ^ auVar7 << uVar1;
    }
  }
  auVar16 = auVar14 ^ auVar8 ^ auVar2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar16._0_8_;
  auVar8 = auVar8 ^ auVar14 << 0x40;
  auVar9._0_8_ = auVar8._0_8_ << 1;
  auVar9._8_8_ = auVar8._8_8_ << 1;
  auVar10._0_8_ = SUB168(auVar9 ^ auVar8,0) << 5;
  auVar10._8_8_ = SUB168(auVar9 ^ auVar8,8) << 5;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar10 ^ auVar8,0) << 0x39;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = SUB168(auVar10 ^ auVar8,8) << 0x39;
  auVar8 = auVar6 << 0x40 ^ auVar8;
  auVar11._0_8_ = auVar8._0_8_ >> 5;
  auVar11._8_8_ = auVar8._8_8_ >> 5;
  auVar12._0_8_ = SUB168(auVar11 ^ auVar8,0) >> 1;
  auVar12._8_8_ = SUB168(auVar11 ^ auVar8,8) >> 1;
  auVar13._0_8_ = SUB168(auVar12 ^ auVar8,0) >> 1;
  auVar13._8_8_ = SUB168(auVar12 ^ auVar8,8) >> 1;
  auVar14 = pshufb(auVar13 ^ auVar8 ^ auVar2 ^ auVar16 >> 0x40 ^ auVar18,_DAT_100c22840);
  *param_1 = auVar14;
  return;
}


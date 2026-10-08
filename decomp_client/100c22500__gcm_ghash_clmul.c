
/* WARNING: Removing unreachable block (ram,0x000100c227ce) */
/* WARNING: Removing unreachable block (ram,0x000100c227a2) */
/* WARNING: Removing unreachable block (ram,0x000100c2271e) */
/* WARNING: Removing unreachable block (ram,0x000100c226ea) */
/* WARNING: Removing unreachable block (ram,0x000100c22638) */
/* WARNING: Removing unreachable block (ram,0x000100c225cd) */
/* WARNING: Removing unreachable block (ram,0x000100c22575) */
/* WARNING: Removing unreachable block (ram,0x000100c226a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_ghash_clmul(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                     undefined1 (*param_3) [16],long param_4)

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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar33;
  bool bVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined4 uVar54;
  ulong uVar55;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulong uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  ulong uVar53;
  ulong uVar56;
  undefined1 auVar67 [16];
  
  auVar51 = *param_2;
  auVar36 = pshufb(*param_1,_DAT_100c22840);
  uVar54 = auVar51._4_4_;
  uVar53 = auVar51._0_8_;
  uVar55 = auVar51._8_8_;
  uVar52 = auVar51._0_4_;
  if (param_4 != 0x10) {
    auVar63 = param_2[1];
    auVar57 = pshufb(*param_3,_DAT_100c22840);
    auVar72 = pshufb(param_3[1],_DAT_100c22840);
    auVar36 = auVar36 ^ auVar57;
    uVar35 = auVar36._0_8_;
    auVar58._0_8_ = auVar72._8_8_;
    auVar58._8_4_ = auVar72._0_4_;
    auVar58._12_4_ = auVar72._4_4_;
    auVar61._8_4_ = uVar52;
    auVar61._0_8_ = uVar55;
    auVar61._12_4_ = uVar54;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = auVar72._0_8_;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar53;
    auVar57 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar74 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar57 = auVar57 ^ auVar59 << uVar1;
      }
    }
    auVar73._8_8_ = 0;
    auVar73._0_8_ = auVar58._0_8_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar55;
    auVar74 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar73 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar74 = auVar74 ^ auVar23 << uVar1;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = SUB168(auVar58 ^ auVar72,0);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = SUB168(auVar61 ^ auVar51,0);
    auVar59 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar59 = auVar59 ^ auVar72 << uVar1;
      }
    }
    auVar59 = auVar59 ^ auVar57 ^ auVar74;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar59._0_8_;
    auVar74 = auVar74 ^ auVar59 >> 0x40;
    auVar57 = auVar57 ^ auVar28 << 0x40;
    auVar60._0_8_ = auVar36._8_8_;
    auVar60._8_4_ = auVar36._0_4_;
    auVar60._12_4_ = auVar36._4_4_;
    auVar66._0_8_ = auVar63._8_8_;
    auVar66._8_4_ = auVar63._0_4_;
    auVar66._12_4_ = auVar63._4_4_;
    auVar60 = auVar60 ^ auVar36;
    uVar56 = auVar60._0_8_;
    auVar67 = auVar66 ^ auVar63;
    uVar65 = auVar67._0_8_;
    param_3 = param_3 + 2;
    uVar33 = param_4 - 0x30;
    if (0x1f < param_4 - 0x10U && uVar33 != 0) {
      do {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar36._0_8_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = auVar63._0_8_;
        auVar59 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar59 = auVar59 ^ auVar11 << uVar1;
          }
        }
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auVar36._8_8_;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = auVar66._0_8_;
        auVar58 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar19 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar58 = auVar58 ^ auVar24 << uVar1;
          }
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar60._0_8_;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = auVar67._0_8_;
        auVar36 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar36 = auVar36 ^ auVar12 << uVar1;
          }
        }
        auVar61 = auVar36 ^ auVar59 ^ auVar58;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = auVar61._0_8_;
        auVar57 = auVar59 ^ auVar29 << 0x40 ^ auVar57;
        auVar72 = pshufb(*param_3,_DAT_100c22840);
        auVar73 = pshufb(param_3[1],_DAT_100c22840);
        auVar75._0_8_ = auVar73._8_8_;
        auVar75._8_4_ = auVar73._0_4_;
        auVar75._12_4_ = auVar73._4_4_;
        auVar76._8_4_ = uVar52;
        auVar76._0_8_ = uVar55;
        auVar76._12_4_ = uVar54;
        auVar37._0_8_ = auVar57._0_8_ << 1;
        auVar37._8_8_ = auVar57._8_8_ << 1;
        auVar38._0_8_ = SUB168(auVar37 ^ auVar57,0) << 5;
        auVar38._8_8_ = SUB168(auVar37 ^ auVar57,8) << 5;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar73._0_8_;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar53;
        auVar59 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar59 = auVar59 ^ auVar13 << uVar1;
          }
        }
        auVar32._8_8_ = 0;
        auVar32._0_8_ = SUB168(auVar38 ^ auVar57,0) << 0x39;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = SUB168(auVar38 ^ auVar57,8) << 0x39;
        auVar57 = auVar32 << 0x40 ^ auVar57;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auVar75._0_8_;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar55;
        auVar23 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar20 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar23 = auVar23 ^ auVar25 << uVar1;
          }
        }
        auVar39._0_8_ = auVar57._0_8_ >> 5;
        auVar39._8_8_ = auVar57._8_8_ >> 5;
        auVar40._0_8_ = SUB168(auVar39 ^ auVar57,0) >> 1;
        auVar40._8_8_ = SUB168(auVar39 ^ auVar57,8) >> 1;
        auVar36._0_8_ = SUB168(auVar40 ^ auVar57,0) >> 1;
        auVar36._8_8_ = SUB168(auVar40 ^ auVar57,8) >> 1;
        auVar36 = auVar36 ^ auVar57 ^ auVar58 ^ auVar61 >> 0x40 ^ auVar74 ^ auVar72 ^ auVar68;
        uVar35 = auVar36._0_8_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = SUB168(auVar75 ^ auVar73,0);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = SUB168(auVar76 ^ auVar51,0);
        auVar57 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar6 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar57 = auVar57 ^ auVar14 << uVar1;
          }
        }
        auVar62._0_8_ = auVar36._8_8_;
        auVar62._8_4_ = auVar36._0_4_;
        auVar62._12_4_ = auVar36._4_4_;
        auVar67._8_4_ = auVar63._0_4_;
        auVar67._0_8_ = auVar66._0_8_;
        auVar67._12_4_ = auVar63._4_4_;
        auVar60 = auVar62 ^ auVar36;
        uVar56 = auVar60._0_8_;
        auVar67 = auVar67 ^ auVar63;
        uVar65 = auVar67._0_8_;
        auVar74 = auVar57 ^ auVar59 ^ auVar23;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = auVar74._0_8_;
        auVar74 = auVar23 ^ auVar74 >> 0x40;
        auVar57 = auVar59 ^ auVar57 << 0x40;
        param_3 = param_3 + 2;
        bVar34 = 0x1f < uVar33;
        uVar33 = uVar33 - 0x20;
      } while (bVar34 && uVar33 != 0);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar35;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar63._0_8_;
    auVar63 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar7 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar63 = auVar63 ^ auVar15 << uVar1;
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar36._8_8_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = auVar66._0_8_;
    auVar36 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar36 = auVar36 ^ auVar26 << uVar1;
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar56;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar65;
    auVar59 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar59 = auVar59 ^ auVar16 << uVar1;
      }
    }
    auVar59 = auVar59 ^ auVar63 ^ auVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = auVar59._0_8_;
    auVar57 = auVar63 ^ auVar30 << 0x40 ^ auVar57;
    auVar41._0_8_ = auVar57._0_8_ << 1;
    auVar41._8_8_ = auVar57._8_8_ << 1;
    auVar42._0_8_ = SUB168(auVar41 ^ auVar57,0) << 5;
    auVar42._8_8_ = SUB168(auVar41 ^ auVar57,8) << 5;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = SUB168(auVar42 ^ auVar57,0) << 0x39;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = SUB168(auVar42 ^ auVar57,8) << 0x39;
    auVar57 = auVar63 << 0x40 ^ auVar57;
    auVar43._0_8_ = auVar57._0_8_ >> 5;
    auVar43._8_8_ = auVar57._8_8_ >> 5;
    auVar44._0_8_ = SUB168(auVar43 ^ auVar57,0) >> 1;
    auVar44._8_8_ = SUB168(auVar43 ^ auVar57,8) >> 1;
    auVar45._0_8_ = SUB168(auVar44 ^ auVar57,0) >> 1;
    auVar45._8_8_ = SUB168(auVar44 ^ auVar57,8) >> 1;
    auVar36 = auVar45 ^ auVar57 ^ auVar36 ^ auVar59 >> 0x40 ^ auVar74 ^ auVar69;
    if (uVar33 != 0) goto LAB_100c22803;
  }
  auVar63 = pshufb(*param_3,_DAT_100c22840);
  auVar36 = auVar36 ^ auVar63;
  auVar64._0_8_ = auVar36._8_8_;
  auVar64._8_4_ = auVar36._0_4_;
  auVar64._12_4_ = auVar36._4_4_;
  auVar70._8_4_ = uVar52;
  auVar70._0_8_ = uVar55;
  auVar70._12_4_ = uVar54;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar36._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar53;
  auVar63 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar9 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar63 = auVar63 ^ auVar17 << uVar1;
    }
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = auVar64._0_8_;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar55;
  auVar57 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar22 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar57 = auVar57 ^ auVar27 << uVar1;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = SUB168(auVar64 ^ auVar36,0);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = SUB168(auVar70 ^ auVar51,0);
  auVar51 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar10 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar51 = auVar51 ^ auVar18 << uVar1;
    }
  }
  auVar36 = auVar51 ^ auVar63 ^ auVar57;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = auVar36._0_8_;
  auVar63 = auVar63 ^ auVar51 << 0x40;
  auVar46._0_8_ = auVar63._0_8_ << 1;
  auVar46._8_8_ = auVar63._8_8_ << 1;
  auVar47._0_8_ = SUB168(auVar46 ^ auVar63,0) << 5;
  auVar47._8_8_ = SUB168(auVar46 ^ auVar63,8) << 5;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = SUB168(auVar47 ^ auVar63,0) << 0x39;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = SUB168(auVar47 ^ auVar63,8) << 0x39;
  auVar63 = auVar31 << 0x40 ^ auVar63;
  auVar48._0_8_ = auVar63._0_8_ >> 5;
  auVar48._8_8_ = auVar63._8_8_ >> 5;
  auVar49._0_8_ = SUB168(auVar48 ^ auVar63,0) >> 1;
  auVar49._8_8_ = SUB168(auVar48 ^ auVar63,8) >> 1;
  auVar50._0_8_ = SUB168(auVar49 ^ auVar63,0) >> 1;
  auVar50._8_8_ = SUB168(auVar49 ^ auVar63,8) >> 1;
  auVar36 = auVar50 ^ auVar63 ^ auVar57 ^ auVar36 >> 0x40 ^ auVar71;
LAB_100c22803:
  auVar51 = pshufb(auVar36,_DAT_100c22840);
  *param_1 = auVar51;
  return;
}


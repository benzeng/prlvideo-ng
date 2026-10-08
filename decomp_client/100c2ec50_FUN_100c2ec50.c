
ulong FUN_100c2ec50(ulong *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
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
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  uint uVar27;
  uint uVar28;
  
  uVar25 = 0;
  if (0 < (int)param_3) {
    uVar25 = 0;
    if (3 < param_3) {
      uVar27 = param_3 - 4;
      uVar28 = uVar27 & 0xfffffffc;
      puVar2 = param_1 + (ulong)uVar28 + 4;
      uVar25 = 0;
      puVar26 = param_2;
      do {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar25;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puVar26;
        auVar17 = auVar3 * auVar10 + auVar17;
        uVar24 = auVar17._0_8_;
        uVar25 = *param_1;
        *param_1 = *param_1 + uVar24;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_ + (ulong)CARRY8(uVar25,uVar24);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar26[1];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar24 = auVar18._0_8_;
        puVar1 = param_1 + 1;
        uVar25 = *puVar1;
        *puVar1 = *puVar1 + uVar24;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auVar18._8_8_ + (ulong)CARRY8(uVar25,uVar24);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_4;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = puVar26[2];
        auVar19 = auVar5 * auVar12 + auVar19;
        uVar24 = auVar19._0_8_;
        puVar1 = param_1 + 2;
        uVar25 = *puVar1;
        *puVar1 = *puVar1 + uVar24;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auVar19._8_8_ + (ulong)CARRY8(uVar25,uVar24);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = puVar26[3];
        auVar20 = auVar6 * auVar13 + auVar20;
        uVar24 = auVar20._0_8_;
        puVar1 = param_1 + 3;
        uVar25 = *puVar1;
        *puVar1 = *puVar1 + uVar24;
        uVar25 = auVar20._8_8_ + (ulong)CARRY8(uVar25,uVar24);
        param_3 = param_3 - 4;
        puVar26 = puVar26 + 4;
        param_1 = param_1 + 4;
      } while (3 < param_3);
      param_3 = uVar27 - uVar28;
      if (param_3 == 0) {
        return uVar25;
      }
      param_2 = param_2 + (ulong)uVar28 + 4;
      param_1 = puVar2;
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar25;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_4;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *param_2;
    auVar21 = auVar7 * auVar14 + auVar21;
    uVar24 = auVar21._0_8_;
    uVar25 = *param_1;
    *param_1 = *param_1 + uVar24;
    uVar25 = auVar21._8_8_ + (ulong)CARRY8(uVar25,uVar24);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar25;
    if (param_3 != 1) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = param_2[1];
      auVar22 = auVar8 * auVar15 + auVar22;
      uVar24 = auVar22._0_8_;
      puVar2 = param_1 + 1;
      uVar25 = *puVar2;
      *puVar2 = *puVar2 + uVar24;
      uVar25 = auVar22._8_8_ + (ulong)CARRY8(uVar25,uVar24);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar25;
      if (param_3 != 2) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_4;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = param_2[2];
        auVar23 = auVar9 * auVar16 + auVar23;
        uVar24 = auVar23._0_8_;
        param_1 = param_1 + 2;
        uVar25 = *param_1;
        *param_1 = *param_1 + uVar24;
        uVar25 = auVar23._8_8_ + (ulong)CARRY8(uVar25,uVar24);
      }
    }
  }
  return uVar25;
}


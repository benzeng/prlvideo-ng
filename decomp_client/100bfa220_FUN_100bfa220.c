
void FUN_100bfa220(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  uVar12 = param_1[4];
  uVar22 = *param_1;
  uVar10 = param_1[1];
  uVar17 = param_1[2];
  uVar1 = param_1[3];
  do {
    uVar5 = *param_2;
    uVar13 = param_2[1];
    uVar12 = (uVar22 << 5 | uVar22 >> 0x1b) + 0x5a827999 +
             (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
             uVar12 + ((uVar1 ^ uVar17) & uVar10 ^ uVar1);
    uVar2 = uVar10 << 0x1e | uVar10 >> 2;
    uVar26 = param_2[2];
    uVar10 = ((uVar2 ^ uVar17) & uVar22 ^ uVar17) + 0x5a827999 +
             (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18) +
             uVar1 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar23 = uVar22 << 0x1e | uVar22 >> 2;
    uVar1 = param_2[3];
    uVar22 = ((uVar23 ^ uVar2) & uVar12 ^ uVar2) + 0x5a827999 +
             (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18) +
             uVar17 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar17 = param_2[4];
    uVar12 = ((uVar11 ^ uVar23) & uVar10 ^ uVar23) + 0x5a827999 +
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) +
             uVar2 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar15 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar2 = param_2[5];
    uVar9 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar14 = param_2[6];
    uVar10 = ((uVar15 ^ uVar11) & uVar22 ^ uVar11) + 0x5a827999 +
             (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18) +
             uVar23 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar22 = ((uVar9 ^ uVar15) & uVar12 ^ uVar15) + 0x5a827999 +
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
             uVar11 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar27 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar11 = param_2[7];
    uVar12 = ((uVar27 ^ uVar9) & uVar10 ^ uVar9) + 0x5a827999 +
             (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) +
             uVar15 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar15 = param_2[8];
    uVar10 = ((uVar3 ^ uVar27) & uVar22 ^ uVar27) + 0x5a827999 +
             (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             uVar9 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar8 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar9 = param_2[9];
    uVar24 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar23 = param_2[10];
    uVar22 = ((uVar8 ^ uVar3) & uVar12 ^ uVar3) + 0x5a827999 +
             (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18) +
             uVar27 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar18 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar27 = param_2[0xb];
    uVar10 = ((uVar24 ^ uVar8) & uVar10 ^ uVar8) + 0x5a827999 +
             (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) +
             uVar3 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar12 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar3 = param_2[0xc];
    uVar22 = ((uVar18 ^ uVar24) & uVar22 ^ uVar24) + 0x5a827999 +
             (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18) +
             uVar8 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar16 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar8 = param_2[0xd];
    uVar20 = uVar1 ^ uVar2 ^ uVar27;
    uVar10 = ((uVar12 ^ uVar18) & uVar10 ^ uVar18) + 0x5a827999 +
             (uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18) +
             uVar24 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar24 = param_2[0xe];
    uVar22 = ((uVar16 ^ uVar12) & uVar22 ^ uVar12) + 0x5a827999 +
             (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
             uVar18 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar25 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar18 = param_2[0xf];
    uVar6 = uVar5 ^ uVar26 ^ uVar15 ^ uVar8;
    uVar10 = ((uVar4 ^ uVar16) & uVar10 ^ uVar16) + 0x5a827999 +
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) +
             uVar12 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar19 = uVar20 ^ uVar6;
    uVar7 = uVar13 ^ uVar1 ^ uVar9 ^ uVar24;
    uVar1 = uVar14 ^ uVar15 ^ uVar19 ^ uVar24;
    uVar12 = ((uVar25 ^ uVar4) & uVar22 ^ uVar4) + 0x5a827999 +
             (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18) +
             uVar16 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = ((uVar5 ^ uVar25) & uVar10 ^ uVar25) + 0x5a827999 +
             (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18) +
             uVar4 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = ((uVar13 ^ uVar5) & uVar12 ^ uVar5) + 0x5a827999 +
             (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
             uVar25 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar16 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = ((uVar16 ^ uVar13) & uVar22 ^ uVar13) + 0x5a827999 +
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) +
             uVar5 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar4 = uVar26 ^ uVar17 ^ uVar23 ^ uVar18;
    uVar5 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = ((uVar5 ^ uVar16) & uVar10 ^ uVar16) + 0x5a827999 +
             (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
             uVar13 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = ((uVar13 ^ uVar5) & uVar12 ^ uVar5) + 0x5a827999 +
             (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18) +
             uVar16 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar16 = uVar17 ^ uVar14 ^ uVar3 ^ uVar7;
    uVar17 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar17 ^ uVar13 ^ uVar22) + 0x6ed9eba1 +
             (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18) +
             uVar5 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar28 = uVar2 ^ uVar11 ^ uVar8 ^ uVar4;
    uVar26 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar26 ^ uVar17 ^ uVar10) + 0x6ed9eba1 +
             (uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18) +
             uVar13 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar2 = uVar11 ^ uVar9 ^ uVar16 ^ uVar18;
    uVar21 = uVar6 ^ uVar23 ^ uVar15 ^ uVar28;
    uVar11 = uVar7 ^ uVar27 ^ uVar9 ^ uVar1;
    uVar25 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar25 ^ uVar26 ^ uVar12) + 0x6ed9eba1 +
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) +
             uVar17 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar24 = uVar16 ^ uVar24 ^ uVar3;
    uVar9 = uVar4 ^ uVar3 ^ uVar23 ^ uVar2;
    uVar17 = uVar24 ^ uVar11;
    uVar5 = uVar18 ^ uVar7 ^ uVar17 ^ uVar2;
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar13 ^ uVar25 ^ uVar22) + 0x6ed9eba1 +
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
             uVar26 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar26 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar26 ^ uVar13 ^ uVar10) + 0x6ed9eba1 +
             (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18) +
             uVar25 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar3 ^ uVar26 ^ uVar12) + 0x6ed9eba1 +
             (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             uVar13 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar13 ^ uVar3 ^ uVar22) + 0x6ed9eba1 +
             (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) +
             uVar26 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar29 = uVar19 ^ uVar8 ^ uVar27 ^ uVar21;
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar23 ^ uVar13 ^ uVar10) + 0x6ed9eba1 +
             (uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18) +
             uVar3 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar27 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar8 = uVar28 ^ uVar18 ^ uVar8 ^ uVar9;
    uVar10 = (uVar27 ^ uVar23 ^ uVar12) + 0x6ed9eba1 +
             (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18) +
             uVar13 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar26 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar26 ^ uVar27 ^ uVar22) + 0x6ed9eba1 +
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) +
             uVar23 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar25 = uVar20 ^ uVar14 ^ uVar15 ^ uVar29;
    uVar14 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar14 ^ uVar26 ^ uVar10) + 0x6ed9eba1 +
             (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18) +
             uVar27 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar13 ^ uVar14 ^ uVar12) + 0x6ed9eba1 +
             (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
             uVar26 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar6 = uVar21 ^ uVar4 ^ uVar6 ^ uVar8;
    uVar26 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar26 ^ uVar13 ^ uVar22) + 0x6ed9eba1 +
             (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
             uVar14 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar23 = uVar11 ^ uVar7 ^ uVar19 ^ uVar25;
    uVar15 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar15 ^ uVar26 ^ uVar10) + 0x6ed9eba1 +
             (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18) +
             uVar13 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar20 = uVar9 ^ uVar4 ^ uVar16 ^ uVar5;
    uVar4 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar4 ^ uVar15 ^ uVar12) + 0x6ed9eba1 +
             (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18) +
             uVar26 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar14 = uVar29 ^ uVar28 ^ uVar19 ^ uVar6;
    uVar3 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar3 ^ uVar4 ^ uVar22) + 0x6ed9eba1 +
             (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) +
             uVar15 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar27 = uVar17 ^ uVar16 ^ uVar1 ^ uVar23;
    uVar13 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar13 ^ uVar3 ^ uVar10) + 0x6ed9eba1 +
             (uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18) +
             uVar4 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar16 = uVar8 ^ uVar28 ^ uVar2 ^ uVar20;
    uVar26 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar26 ^ uVar13 ^ uVar12) + 0x6ed9eba1 +
             (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18) +
             uVar3 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar2 = uVar25 ^ uVar21 ^ uVar1 ^ uVar14;
    uVar15 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar15 ^ uVar26 ^ uVar22) + 0x6ed9eba1 +
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
             uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar1 = uVar24 ^ uVar18 ^ uVar7 ^ uVar27;
    uVar13 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar13 ^ uVar15 ^ uVar10) + 0x6ed9eba1 +
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) +
             uVar26 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar3 = uVar6 ^ uVar21 ^ uVar9 ^ uVar16;
    uVar26 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = ((uVar12 | uVar26) & uVar13 | uVar12 & uVar26) + 0x8f1bbcdc +
             (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
             uVar15 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar18 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar24 = uVar23 ^ uVar29 ^ uVar11 ^ uVar2;
    uVar12 = ((uVar22 | uVar18) & uVar26 | uVar22 & uVar18) + 0x8f1bbcdc +
             (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18) +
             uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar20 ^ uVar9 ^ uVar17 ^ uVar1;
    uVar13 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = ((uVar10 | uVar13) & uVar18 | uVar10 & uVar13) + 0x8f1bbcdc +
             (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             uVar26 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar15 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar19 = uVar14 ^ uVar29 ^ uVar8 ^ uVar3;
    uVar10 = ((uVar12 | uVar15) & uVar13 | uVar12 & uVar15) + 0x8f1bbcdc +
             (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18) +
             uVar18 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar4 = uVar27 ^ uVar25 ^ uVar17 ^ uVar24;
    uVar17 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = ((uVar22 | uVar17) & uVar15 | uVar22 & uVar17) + 0x8f1bbcdc +
             (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
             uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar26 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar7 = uVar16 ^ uVar8 ^ uVar5 ^ uVar11;
    uVar22 = ((uVar10 | uVar26) & uVar17 | uVar10 & uVar26) + 0x8f1bbcdc +
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) +
             uVar15 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar9 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar15 = uVar2 ^ uVar25 ^ uVar6 ^ uVar19;
    uVar10 = ((uVar12 | uVar9) & uVar26 | uVar12 & uVar9) + 0x8f1bbcdc +
             (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18) +
             uVar17 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar5 = uVar1 ^ uVar5 ^ uVar23 ^ uVar4;
    uVar12 = ((uVar22 | uVar13) & uVar9 | uVar22 & uVar13) + 0x8f1bbcdc +
             (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
             uVar26 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar17 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar8 = uVar3 ^ uVar6 ^ uVar20 ^ uVar7;
    uVar22 = ((uVar10 | uVar17) & uVar13 | uVar10 & uVar17) + 0x8f1bbcdc +
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) +
             uVar9 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar18 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar9 = uVar24 ^ uVar23 ^ uVar14 ^ uVar15;
    uVar10 = ((uVar12 | uVar18) & uVar17 | uVar12 & uVar18) + 0x8f1bbcdc +
             (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) +
             uVar13 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar25 = uVar11 ^ uVar27 ^ uVar20 ^ uVar5;
    uVar12 = ((uVar22 | uVar13) & uVar18 | uVar22 & uVar13) + 0x8f1bbcdc +
             (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18) +
             uVar17 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar26 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar20 = uVar19 ^ uVar14 ^ uVar16 ^ uVar8;
    uVar22 = ((uVar10 | uVar26) & uVar13 | uVar10 & uVar26) + 0x8f1bbcdc +
             (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18) +
             uVar18 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar17 = uVar4 ^ uVar27 ^ uVar2 ^ uVar9;
    uVar14 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = ((uVar12 | uVar14) & uVar26 | uVar12 & uVar14) + 0x8f1bbcdc +
             (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18) +
             uVar13 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar6 = uVar7 ^ uVar1 ^ uVar16 ^ uVar25;
    uVar12 = ((uVar22 | uVar13) & uVar14 | uVar22 & uVar13) + 0x8f1bbcdc +
             (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
             uVar26 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar27 = uVar15 ^ uVar2 ^ uVar3 ^ uVar20;
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = ((uVar10 | uVar23) & uVar13 | uVar10 & uVar23) + 0x8f1bbcdc +
             (uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18) +
             uVar14 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar2 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar26 = uVar5 ^ uVar1 ^ uVar24 ^ uVar17;
    uVar10 = ((uVar12 | uVar2) & uVar23 | uVar12 & uVar2) + 0x8f1bbcdc +
             (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18) +
             uVar13 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar3 = uVar8 ^ uVar11 ^ uVar3 ^ uVar6;
    uVar1 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = ((uVar22 | uVar1) & uVar2 | uVar22 & uVar1) + 0x8f1bbcdc +
             (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
             uVar23 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar13 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar16 = uVar9 ^ uVar24 ^ uVar19 ^ uVar27;
    uVar22 = ((uVar10 | uVar13) & uVar1 | uVar10 & uVar13) + 0x8f1bbcdc +
             (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18) +
             uVar2 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar2 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar24 = uVar25 ^ uVar11 ^ uVar4 ^ uVar26;
    uVar10 = ((uVar12 | uVar2) & uVar13 | uVar12 & uVar2) + 0x8f1bbcdc +
             (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18) +
             uVar1 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar11 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar18 = uVar20 ^ uVar7 ^ uVar19 ^ uVar3;
    uVar12 = ((uVar22 | uVar11) & uVar2 | uVar22 & uVar11) + 0x8f1bbcdc +
             (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18) +
             uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar13 = uVar17 ^ uVar4 ^ uVar15 ^ uVar16;
    uVar1 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar1 ^ uVar11 ^ uVar10) + 0xca62c1d6 +
             (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18) +
             uVar2 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar4 = uVar6 ^ uVar7 ^ uVar5 ^ uVar24;
    uVar14 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar14 ^ uVar1 ^ uVar12) + 0xca62c1d6 +
             (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
             uVar11 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar2 = uVar27 ^ uVar8 ^ uVar15 ^ uVar18;
    uVar11 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar11 ^ uVar14 ^ uVar22) + 0xca62c1d6 +
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
             uVar1 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar7 = uVar26 ^ uVar5 ^ uVar9 ^ uVar13;
    uVar1 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar1 ^ uVar11 ^ uVar10) + 0xca62c1d6 +
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) +
             uVar14 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar8 = uVar3 ^ uVar8 ^ uVar25 ^ uVar4;
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar19 = uVar16 ^ uVar20 ^ uVar9 ^ uVar2;
    uVar10 = (uVar5 ^ uVar1 ^ uVar12) + 0xca62c1d6 +
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) +
             uVar11 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar14 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar9 = uVar24 ^ uVar25 ^ uVar17 ^ uVar7;
    uVar12 = (uVar14 ^ uVar5 ^ uVar22) + 0xca62c1d6 +
             (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18) +
             uVar1 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar22 = (uVar11 ^ uVar14 ^ uVar10) + 0xca62c1d6 +
             (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) +
             uVar5 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar5 = uVar18 ^ uVar20 ^ uVar6 ^ uVar8;
    uVar1 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar1 ^ uVar11 ^ uVar12) + 0xca62c1d6 +
             (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
             uVar14 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar14 = uVar13 ^ uVar27 ^ uVar17 ^ uVar19;
    uVar17 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar17 ^ uVar1 ^ uVar22) + 0xca62c1d6 +
             (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) +
             uVar11 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar4 ^ uVar6 ^ uVar26 ^ uVar9;
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar15 = uVar2 ^ uVar27 ^ uVar3 ^ uVar5;
    uVar22 = (uVar23 ^ uVar17 ^ uVar10) + 0xca62c1d6 +
             (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             uVar1 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar1 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar1 ^ uVar23 ^ uVar12) + 0xca62c1d6 +
             (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18) +
             uVar17 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar27 = uVar7 ^ uVar16 ^ uVar26 ^ uVar14;
    uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = (uVar6 ^ uVar1 ^ uVar22) + 0xca62c1d6 +
             (uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18) +
             uVar23 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar23 = uVar8 ^ uVar3 ^ uVar24 ^ uVar11;
    uVar5 = uVar5 ^ uVar18 ^ uVar4 ^ uVar23;
    uVar17 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar3 = uVar19 ^ uVar16 ^ uVar18 ^ uVar15;
    uVar26 = uVar14 ^ uVar13 ^ uVar2 ^ uVar3;
    uVar22 = (uVar17 ^ uVar6 ^ uVar10) + 0xca62c1d6 +
             (uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18) +
             uVar1 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar1 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = (uVar1 ^ uVar17 ^ uVar12) + 0xca62c1d6 +
             (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
             uVar6 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar23 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = uVar9 ^ uVar13 ^ uVar24 ^ uVar27;
    uVar9 = uVar11 ^ uVar7 ^ uVar4 ^ uVar12;
    uVar12 = (uVar23 ^ uVar1 ^ uVar22) + 0xca62c1d6 +
             (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18) +
             uVar17 + (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar14 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar11 = uVar15 ^ uVar2 ^ uVar8 ^ uVar5;
    uVar22 = (uVar14 ^ uVar23 ^ uVar10) + 0xca62c1d6 +
             (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
             uVar1 + (uVar12 * 0x20 | uVar12 >> 0x1b);
    uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar2 = uVar27 ^ uVar7 ^ uVar19 ^ uVar26;
    uVar17 = (uVar10 ^ uVar14 ^ uVar12) + 0xca62c1d6 +
             (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18) +
             uVar23 + (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar13 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar5 = (uVar13 ^ uVar10 ^ uVar22) + 0xca62c1d6 +
            (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) +
            uVar14 + (uVar17 * 0x20 | uVar17 >> 0x1b);
    uVar12 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar10 = (uVar12 ^ uVar13 ^ uVar17) + 0xca62c1d6 +
             (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             uVar10 + (uVar5 * 0x20 | uVar5 >> 0x1b);
    uVar1 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar22 = (uVar1 ^ uVar12 ^ uVar5) + 0xca62c1d6 +
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
             uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b) + *param_1;
    *param_1 = uVar22;
    uVar10 = uVar10 + param_1[1];
    uVar17 = (uVar5 * 0x40000000 | uVar5 >> 2) + param_1[2];
    uVar1 = uVar1 + param_1[3];
    uVar12 = uVar12 + param_1[4];
    param_2 = param_2 + 0x10;
    param_1[1] = uVar10;
    param_1[2] = uVar17;
    param_1[3] = uVar1;
    param_1[4] = uVar12;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


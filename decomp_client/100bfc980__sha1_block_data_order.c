
void _sha1_block_data_order(uint *param_1,uint *param_2,long param_3)

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
  
  if ((DAT_102311d5c & 0x200) != 0) {
    FUN_100bfda50();
    return;
  }
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar11 = param_1[3];
  uVar8 = param_1[4];
  do {
    uVar9 = *param_2;
    uVar1 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = param_2[1];
    uVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar2 << 0x1e | uVar2 >> 2;
    uVar18 = uVar1 + 0x5a827999 + uVar8 + (uVar4 << 5 | uVar4 >> 0x1b) +
             ((uVar3 ^ uVar11) & uVar2 ^ uVar11);
    uVar2 = param_2[2];
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar8 = uVar4 << 0x1e | uVar4 >> 2;
    uVar14 = uVar5 + 0x5a827999 + uVar11 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
             ((uVar9 ^ uVar3) & uVar4 ^ uVar3);
    uVar4 = param_2[3];
    uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar11 = uVar2 + 0x5a827999 + uVar3 + (uVar14 * 0x20 | uVar14 >> 0x1b) +
             ((uVar8 ^ uVar9) & uVar18 ^ uVar9);
    uVar4 = param_2[4];
    uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar15 = uVar14 * 0x40000000 | uVar14 >> 2;
    uVar9 = uVar6 + 0x5a827999 + uVar9 + (uVar11 * 0x20 | uVar11 >> 0x1b) +
            ((uVar19 ^ uVar8) & uVar14 ^ uVar8);
    uVar4 = param_2[5];
    uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar12 = uVar11 * 0x40000000 | uVar11 >> 2;
    uVar8 = uVar3 + 0x5a827999 + uVar8 + (uVar9 * 0x20 | uVar9 >> 0x1b) +
            ((uVar15 ^ uVar19) & uVar11 ^ uVar19);
    uVar4 = param_2[6];
    uVar11 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar18 = uVar9 * 0x40000000 | uVar9 >> 2;
    uVar20 = uVar7 + 0x5a827999 + uVar19 + (uVar8 * 0x20 | uVar8 >> 0x1b) +
             ((uVar12 ^ uVar15) & uVar9 ^ uVar15);
    uVar4 = param_2[7];
    uVar19 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar14 = uVar8 * 0x40000000 | uVar8 >> 2;
    uVar9 = uVar11 + 0x5a827999 + uVar15 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
            ((uVar18 ^ uVar12) & uVar8 ^ uVar12);
    uVar4 = param_2[8];
    uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar21 = uVar20 * 0x40000000 | uVar20 >> 2;
    uVar15 = uVar19 + 0x5a827999 + uVar12 + (uVar9 * 0x20 | uVar9 >> 0x1b) +
             ((uVar14 ^ uVar18) & uVar20 ^ uVar18);
    uVar4 = param_2[9];
    uVar12 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar16 = uVar9 * 0x40000000 | uVar9 >> 2;
    uVar20 = uVar8 + 0x5a827999 + uVar18 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
             ((uVar21 ^ uVar14) & uVar9 ^ uVar14);
    uVar4 = param_2[10];
    uVar9 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar13 = uVar15 * 0x40000000 | uVar15 >> 2;
    uVar18 = uVar12 + 0x5a827999 + uVar14 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
             ((uVar16 ^ uVar21) & uVar15 ^ uVar21);
    uVar4 = param_2[0xb];
    uVar15 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar10 = uVar20 * 0x40000000 | uVar20 >> 2;
    uVar22 = uVar9 + 0x5a827999 + uVar21 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
             ((uVar13 ^ uVar16) & uVar20 ^ uVar16);
    uVar4 = param_2[0xc];
    uVar14 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar17 = uVar15 + 0x5a827999 + uVar16 + (uVar22 * 0x20 | uVar22 >> 0x1b) +
             ((uVar10 ^ uVar13) & uVar18 ^ uVar13);
    uVar4 = param_2[0xd];
    uVar20 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar16 = uVar14 + 0x5a827999 + uVar13 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
             ((uVar21 ^ uVar10) & uVar22 ^ uVar10);
    uVar4 = param_2[0xe];
    uVar18 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar22 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar13 = uVar20 + 0x5a827999 + uVar10 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar23 ^ uVar21) & uVar17 ^ uVar21);
    uVar4 = param_2[0xf];
    uVar10 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar21 = uVar18 + 0x5a827999 + uVar21 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
             ((uVar22 ^ uVar23) & uVar16 ^ uVar23);
    uVar4 = uVar1 ^ uVar2 ^ uVar8 ^ uVar20;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar10 + 0x5a827999 + uVar23 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar17 ^ uVar22) & uVar13 ^ uVar22);
    uVar1 = uVar5 ^ uVar6 ^ uVar12 ^ uVar18;
    uVar5 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar22 = uVar4 + 0x5a827999 + uVar22 + (uVar23 * 0x20 | uVar23 >> 0x1b) +
             ((uVar16 ^ uVar17) & uVar21 ^ uVar17);
    uVar2 = uVar2 ^ uVar3 ^ uVar9 ^ uVar10;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar21 = uVar5 + 0x5a827999 + uVar17 + (uVar22 * 0x20 | uVar22 >> 0x1b) +
             ((uVar13 ^ uVar16) & uVar23 ^ uVar16);
    uVar1 = uVar6 ^ uVar7 ^ uVar15 ^ uVar4;
    uVar6 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar16 = uVar2 + 0x5a827999 + uVar16 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar24 ^ uVar13) & uVar22 ^ uVar13);
    uVar3 = uVar3 ^ uVar11 ^ uVar14 ^ uVar5;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar6 + 0x5a827999 + uVar13 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar23 ^ uVar24) & uVar21 ^ uVar24);
    uVar1 = uVar7 ^ uVar19 ^ uVar20 ^ uVar2;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar24 = uVar3 + 0x6ed9eba1 + uVar24 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar16 ^ uVar23);
    uVar7 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar11 = uVar11 ^ uVar8 ^ uVar18 ^ uVar6;
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar16 = uVar7 + 0x6ed9eba1 + uVar23 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
             (uVar17 ^ uVar21 ^ uVar22);
    uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar19 ^ uVar12 ^ uVar10 ^ uVar3;
    uVar25 = uVar24 * 0x40000000 | uVar24 >> 2;
    uVar21 = uVar11 + 0x6ed9eba1 + uVar22 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar13 ^ uVar24 ^ uVar17);
    uVar19 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar8 = uVar8 ^ uVar9 ^ uVar4 ^ uVar7;
    uVar23 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar19 + 0x6ed9eba1 + uVar17 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar25 ^ uVar16 ^ uVar13);
    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar1 = uVar12 ^ uVar15 ^ uVar5 ^ uVar11;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar8 + 0x6ed9eba1 + uVar13 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar23 ^ uVar21 ^ uVar25);
    uVar12 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar9 = uVar9 ^ uVar14 ^ uVar2 ^ uVar19;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar24 = uVar12 + 0x6ed9eba1 + uVar25 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar16 ^ uVar23);
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    uVar1 = uVar15 ^ uVar20 ^ uVar6 ^ uVar8;
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar16 = uVar9 + 0x6ed9eba1 + uVar23 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
             (uVar17 ^ uVar21 ^ uVar22);
    uVar15 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar1 = uVar14 ^ uVar18 ^ uVar3 ^ uVar12;
    uVar23 = uVar24 * 0x40000000 | uVar24 >> 2;
    uVar21 = uVar15 + 0x6ed9eba1 + uVar22 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar13 ^ uVar24 ^ uVar17);
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar14 = uVar20 ^ uVar10 ^ uVar7 ^ uVar9;
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar1 + 0x6ed9eba1 + uVar17 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar23 ^ uVar16 ^ uVar13);
    uVar20 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    uVar14 = uVar18 ^ uVar4 ^ uVar11 ^ uVar15;
    uVar17 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar20 + 0x6ed9eba1 + uVar13 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar22 ^ uVar21 ^ uVar23);
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    uVar18 = uVar10 ^ uVar5 ^ uVar19 ^ uVar1;
    uVar13 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar14 + 0x6ed9eba1 + uVar23 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar17 ^ uVar16 ^ uVar22);
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar4 = uVar4 ^ uVar2 ^ uVar8 ^ uVar20;
    uVar10 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar18 + 0x6ed9eba1 + uVar22 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar13 ^ uVar21 ^ uVar17);
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    uVar5 = uVar5 ^ uVar6 ^ uVar12 ^ uVar14;
    uVar23 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar4 + 0x6ed9eba1 + uVar17 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar10 ^ uVar16 ^ uVar13);
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar2 ^ uVar3 ^ uVar9 ^ uVar18;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar5 + 0x6ed9eba1 + uVar13 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar23 ^ uVar21 ^ uVar10);
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    uVar6 = uVar6 ^ uVar7 ^ uVar15 ^ uVar4;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar10 = uVar2 + 0x6ed9eba1 + uVar10 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar16 ^ uVar23);
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    uVar3 = uVar3 ^ uVar11 ^ uVar1 ^ uVar5;
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar23 = uVar6 + 0x6ed9eba1 + uVar23 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
             (uVar17 ^ uVar21 ^ uVar22);
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar7 = uVar7 ^ uVar19 ^ uVar20 ^ uVar2;
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar3 + 0x6ed9eba1 + uVar22 + (uVar23 * 0x20 | uVar23 >> 0x1b) +
             (uVar13 ^ uVar10 ^ uVar17);
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    uVar11 = uVar11 ^ uVar8 ^ uVar14 ^ uVar6;
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar7 + 0x6ed9eba1 + uVar17 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar21 ^ uVar23 ^ uVar13);
    uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar19 = uVar19 ^ uVar12 ^ uVar18 ^ uVar3;
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar13 = uVar11 + 0x6ed9eba1 + uVar13 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
             (uVar24 ^ uVar16 ^ uVar21);
    uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
    uVar8 = uVar8 ^ uVar9 ^ uVar4 ^ uVar7;
    uVar17 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar19 + 0x6ed9eba1 + uVar21 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
             (uVar22 ^ uVar10 ^ uVar24);
    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar12 = uVar12 ^ uVar15 ^ uVar5 ^ uVar11;
    uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar8 + 0x8f1bbcdc + uVar24 + (uVar17 & uVar22) + ((uVar17 ^ uVar22) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar9 = uVar9 ^ uVar1 ^ uVar2 ^ uVar19;
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar13 = uVar12 + 0x8f1bbcdc + uVar22 + (uVar16 & uVar17) + ((uVar16 ^ uVar17) & uVar10) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar15 = uVar15 ^ uVar20 ^ uVar6 ^ uVar8;
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar9 + 0x8f1bbcdc + uVar17 + (uVar21 & uVar16) + ((uVar21 ^ uVar16) & uVar23) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar1 = uVar1 ^ uVar14 ^ uVar3 ^ uVar12;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar22 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar13 = uVar15 + 0x8f1bbcdc + uVar16 + (uVar24 & uVar21) + ((uVar24 ^ uVar21) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar20 = uVar20 ^ uVar18 ^ uVar7 ^ uVar9;
    uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
    uVar17 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar1 + 0x8f1bbcdc + uVar21 + (uVar22 & uVar24) + ((uVar22 ^ uVar24) & uVar10) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar14 = uVar14 ^ uVar4 ^ uVar11 ^ uVar15;
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar20 + 0x8f1bbcdc + uVar24 + (uVar17 & uVar22) + ((uVar17 ^ uVar22) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar18 = uVar18 ^ uVar5 ^ uVar19 ^ uVar1;
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar13 = uVar14 + 0x8f1bbcdc + uVar22 + (uVar16 & uVar17) + ((uVar16 ^ uVar17) & uVar10) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar4 = uVar4 ^ uVar2 ^ uVar8 ^ uVar20;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar18 + 0x8f1bbcdc + uVar17 + (uVar21 & uVar16) + ((uVar21 ^ uVar16) & uVar23) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar5 = uVar5 ^ uVar6 ^ uVar12 ^ uVar14;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar22 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar13 = uVar4 + 0x8f1bbcdc + uVar16 + (uVar24 & uVar21) + ((uVar24 ^ uVar21) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar2 = uVar2 ^ uVar3 ^ uVar9 ^ uVar18;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    uVar17 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar5 + 0x8f1bbcdc + uVar21 + (uVar22 & uVar24) + ((uVar22 ^ uVar24) & uVar10) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar6 = uVar6 ^ uVar7 ^ uVar15 ^ uVar4;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar2 + 0x8f1bbcdc + uVar24 + (uVar17 & uVar22) + ((uVar17 ^ uVar22) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar3 = uVar3 ^ uVar11 ^ uVar1 ^ uVar5;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar13 = uVar6 + 0x8f1bbcdc + uVar22 + (uVar16 & uVar17) + ((uVar16 ^ uVar17) & uVar10) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar7 = uVar7 ^ uVar19 ^ uVar20 ^ uVar2;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar3 + 0x8f1bbcdc + uVar17 + (uVar21 & uVar16) + ((uVar21 ^ uVar16) & uVar23) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar11 = uVar11 ^ uVar8 ^ uVar14 ^ uVar6;
    uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar22 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar13 = uVar7 + 0x8f1bbcdc + uVar16 + (uVar24 & uVar21) + ((uVar24 ^ uVar21) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar19 = uVar19 ^ uVar12 ^ uVar18 ^ uVar3;
    uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
    uVar17 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar11 + 0x8f1bbcdc + uVar21 + (uVar22 & uVar24) + ((uVar22 ^ uVar24) & uVar10) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar8 = uVar8 ^ uVar9 ^ uVar4 ^ uVar7;
    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar19 + 0x8f1bbcdc + uVar24 + (uVar17 & uVar22) + ((uVar17 ^ uVar22) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar12 = uVar12 ^ uVar15 ^ uVar5 ^ uVar11;
    uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar13 = uVar8 + 0x8f1bbcdc + uVar22 + (uVar16 & uVar17) + ((uVar16 ^ uVar17) & uVar10) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar9 = uVar9 ^ uVar1 ^ uVar2 ^ uVar19;
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar12 + 0x8f1bbcdc + uVar17 + (uVar21 & uVar16) + ((uVar21 ^ uVar16) & uVar23) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar15 = uVar15 ^ uVar20 ^ uVar6 ^ uVar8;
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    uVar22 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar13 = uVar9 + 0x8f1bbcdc + uVar16 + (uVar24 & uVar21) + ((uVar24 ^ uVar21) & uVar13) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar1 = uVar1 ^ uVar14 ^ uVar3 ^ uVar12;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    uVar17 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar15 + 0x8f1bbcdc + uVar21 + (uVar22 & uVar24) + ((uVar22 ^ uVar24) & uVar10) +
             (uVar13 * 0x20 | uVar13 >> 0x1b);
    uVar20 = uVar20 ^ uVar18 ^ uVar7 ^ uVar9;
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar23 = uVar1 + 0xca62c1d6 + uVar24 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
             (uVar17 ^ uVar13 ^ uVar22);
    uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
    uVar14 = uVar14 ^ uVar4 ^ uVar11 ^ uVar15;
    uVar21 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar13 = uVar20 + 0xca62c1d6 + uVar22 + (uVar23 * 0x20 | uVar23 >> 0x1b) +
             (uVar16 ^ uVar10 ^ uVar17);
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    uVar18 = uVar18 ^ uVar5 ^ uVar19 ^ uVar1;
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar17 = uVar14 + 0xca62c1d6 + uVar17 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
             (uVar21 ^ uVar23 ^ uVar16);
    uVar10 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar4 = uVar4 ^ uVar2 ^ uVar8 ^ uVar20;
    uVar23 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar13 = uVar10 + 0xca62c1d6 + uVar16 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
             (uVar24 ^ uVar13 ^ uVar21);
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    uVar18 = uVar5 ^ uVar6 ^ uVar12 ^ uVar14;
    uVar22 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar21 = uVar4 + 0xca62c1d6 + uVar21 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
             (uVar23 ^ uVar17 ^ uVar24);
    uVar5 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar2 = uVar2 ^ uVar3 ^ uVar9 ^ uVar10;
    uVar16 = uVar13 * 0x40000000 | uVar13 >> 2;
    uVar24 = uVar5 + 0xca62c1d6 + uVar24 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar13 ^ uVar23);
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    uVar18 = uVar6 ^ uVar7 ^ uVar15 ^ uVar4;
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar17 = uVar2 + 0xca62c1d6 + uVar23 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
             (uVar16 ^ uVar21 ^ uVar22);
    uVar6 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar3 = uVar3 ^ uVar11 ^ uVar1 ^ uVar5;
    uVar25 = uVar24 * 0x40000000 | uVar24 >> 2;
    uVar21 = uVar6 + 0xca62c1d6 + uVar22 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
             (uVar13 ^ uVar24 ^ uVar16);
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar18 = uVar7 ^ uVar19 ^ uVar20 ^ uVar2;
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar16 = uVar3 + 0xca62c1d6 + uVar16 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar25 ^ uVar17 ^ uVar13);
    uVar7 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar11 = uVar11 ^ uVar8 ^ uVar14 ^ uVar6;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = uVar7 + 0xca62c1d6 + uVar13 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar23 ^ uVar21 ^ uVar25);
    uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar18 = uVar19 ^ uVar12 ^ uVar10 ^ uVar3;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar24 = uVar11 + 0xca62c1d6 + uVar25 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar16 ^ uVar23);
    uVar19 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar8 = uVar8 ^ uVar9 ^ uVar4 ^ uVar7;
    uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar16 = uVar19 + 0xca62c1d6 + uVar23 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
             (uVar17 ^ uVar21 ^ uVar22);
    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar18 = uVar12 ^ uVar15 ^ uVar5 ^ uVar11;
    uVar23 = uVar24 * 0x40000000 | uVar24 >> 2;
    uVar21 = uVar8 + 0xca62c1d6 + uVar22 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
             (uVar13 ^ uVar24 ^ uVar17);
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar2 = uVar9 ^ uVar1 ^ uVar2 ^ uVar19;
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar12 = uVar18 + 0xca62c1d6 + uVar17 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar23 ^ uVar16 ^ uVar13);
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    uVar8 = uVar15 ^ uVar20 ^ uVar6 ^ uVar8;
    uVar16 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar6 = uVar2 + 0xca62c1d6 + uVar13 + (uVar12 * 0x20 | uVar12 >> 0x1b) +
            (uVar22 ^ uVar21 ^ uVar23);
    uVar9 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    uVar18 = uVar1 ^ uVar14 ^ uVar3 ^ uVar18;
    uVar15 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar12 = uVar9 + 0xca62c1d6 + uVar23 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
             (uVar16 ^ uVar12 ^ uVar22);
    uVar3 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar2 = uVar20 ^ uVar10 ^ uVar7 ^ uVar2;
    uVar1 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar18 = uVar3 + 0xca62c1d6 + uVar22 + (uVar12 * 0x20 | uVar12 >> 0x1b) +
             (uVar15 ^ uVar6 ^ uVar16);
    uVar9 = uVar14 ^ uVar4 ^ uVar11 ^ uVar9;
    uVar8 = uVar12 * 0x40000000 | uVar12 >> 2;
    uVar14 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) + 0xca62c1d6 + uVar16 +
             (uVar18 * 0x20 | uVar18 >> 0x1b) + (uVar1 ^ uVar12 ^ uVar15);
    uVar3 = uVar10 ^ uVar5 ^ uVar19 ^ uVar3;
    uVar11 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar2 = (uVar9 << 1 | (uint)((int)uVar9 < 0)) + 0xca62c1d6 + uVar15 +
            (uVar14 * 0x20 | uVar14 >> 0x1b) + (uVar8 ^ uVar18 ^ uVar1);
    uVar4 = (uVar3 << 1 | (uint)((int)uVar3 < 0)) + 0xca62c1d6 + uVar1 +
            (uVar2 * 0x20 | uVar2 >> 0x1b) + (uVar11 ^ uVar14 ^ uVar8) + *param_1;
    uVar2 = uVar2 + param_1[1];
    uVar3 = (uVar14 * 0x40000000 | uVar14 >> 2) + param_1[2];
    uVar11 = uVar11 + param_1[3];
    uVar8 = uVar8 + param_1[4];
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar11;
    param_1[4] = uVar8;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0x10;
  } while (param_3 != 0);
  return;
}


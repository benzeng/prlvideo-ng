
void _sha512_block_data_order(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  
  puVar1 = param_2 + param_3 * 0x10;
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar17 = param_1[4];
  uVar16 = param_1[5];
  uVar15 = param_1[6];
  uVar14 = param_1[7];
  do {
    uVar13 = *param_2;
    local_100 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
                | uVar13 << 0x38;
    uVar13 = (uVar17 >> 0x17 | uVar17 << 0x29) ^ uVar17;
    uVar18 = (uVar2 >> 5 | uVar2 << 0x3b) ^ uVar2;
    uVar13 = (uVar13 >> 4 | uVar13 << 0x3c) ^ uVar17;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar2;
    lVar12 = local_100 + uVar14 + DAT_100c00fc0 + ((uVar16 ^ uVar15) & uVar17 ^ uVar15) +
             (uVar13 >> 0xe | uVar13 << 0x32);
    uVar4 = uVar4 + lVar12;
    uVar11 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + lVar12 +
             (uVar18 >> 0x1c | uVar18 << 0x24);
    uVar14 = param_2[1];
    local_f8 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
               (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
               (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28
               | uVar14 << 0x38;
    uVar14 = (uVar4 >> 0x17 | uVar4 << 0x29) ^ uVar4;
    uVar13 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar14 = (uVar14 >> 4 | uVar14 << 0x3c) ^ uVar4;
    uVar13 = (uVar13 >> 6 | uVar13 << 0x3a) ^ uVar11;
    lVar12 = local_f8 + uVar15 + DAT_100c00fc8 + ((uVar17 ^ uVar16) & uVar4 ^ uVar16) +
             (uVar14 >> 0xe | uVar14 << 0x32);
    uVar3 = uVar3 + lVar12;
    uVar10 = ((uVar2 ^ uVar6) & uVar11) + (uVar2 & uVar6) + lVar12 +
             (uVar13 >> 0x1c | uVar13 << 0x24);
    uVar15 = param_2[2];
    local_f0 = uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
               (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
               (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 | (uVar15 & 0xff00) << 0x28
               | uVar15 << 0x38;
    uVar15 = (uVar3 >> 0x17 | uVar3 << 0x29) ^ uVar3;
    uVar14 = (uVar10 >> 5 | uVar10 << 0x3b) ^ uVar10;
    uVar15 = (uVar15 >> 4 | uVar15 << 0x3c) ^ uVar3;
    uVar14 = (uVar14 >> 6 | uVar14 << 0x3a) ^ uVar10;
    lVar12 = local_f0 + uVar16 + DAT_100c00fd0 + ((uVar4 ^ uVar17) & uVar3 ^ uVar17) +
             (uVar15 >> 0xe | uVar15 << 0x32);
    uVar6 = uVar6 + lVar12;
    uVar9 = ((uVar11 ^ uVar2) & uVar10) + (uVar11 & uVar2) + lVar12 +
            (uVar14 >> 0x1c | uVar14 << 0x24);
    uVar16 = param_2[3];
    local_e8 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
               (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
               (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38;
    uVar16 = (uVar6 >> 0x17 | uVar6 << 0x29) ^ uVar6;
    uVar15 = (uVar9 >> 5 | uVar9 << 0x3b) ^ uVar9;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar6;
    uVar15 = (uVar15 >> 6 | uVar15 << 0x3a) ^ uVar9;
    lVar12 = local_e8 + uVar17 + DAT_100c00fd8 + ((uVar3 ^ uVar4) & uVar6 ^ uVar4) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar2 = uVar2 + lVar12;
    uVar8 = ((uVar10 ^ uVar11) & uVar9) + (uVar10 & uVar11) + lVar12 +
            (uVar15 >> 0x1c | uVar15 << 0x24);
    uVar17 = param_2[4];
    local_e0 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
               (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
               (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28
               | uVar17 << 0x38;
    uVar17 = (uVar2 >> 0x17 | uVar2 << 0x29) ^ uVar2;
    uVar16 = (uVar8 >> 5 | uVar8 << 0x3b) ^ uVar8;
    uVar17 = (uVar17 >> 4 | uVar17 << 0x3c) ^ uVar2;
    uVar16 = (uVar16 >> 6 | uVar16 << 0x3a) ^ uVar8;
    lVar12 = local_e0 + uVar4 + DAT_100c00fe0 + ((uVar6 ^ uVar3) & uVar2 ^ uVar3) +
             (uVar17 >> 0xe | uVar17 << 0x32);
    uVar11 = uVar11 + lVar12;
    uVar5 = ((uVar9 ^ uVar10) & uVar8) + (uVar9 & uVar10) + lVar12 +
            (uVar16 >> 0x1c | uVar16 << 0x24);
    uVar4 = param_2[5];
    local_d8 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
               | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 |
               (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    uVar4 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar17 = (uVar5 >> 5 | uVar5 << 0x3b) ^ uVar5;
    uVar4 = (uVar4 >> 4 | uVar4 << 0x3c) ^ uVar11;
    uVar17 = (uVar17 >> 6 | uVar17 << 0x3a) ^ uVar5;
    lVar12 = local_d8 + uVar3 + DAT_100c00fe8 + ((uVar2 ^ uVar6) & uVar11 ^ uVar6) +
             (uVar4 >> 0xe | uVar4 << 0x32);
    uVar10 = uVar10 + lVar12;
    uVar18 = ((uVar8 ^ uVar9) & uVar5) + (uVar8 & uVar9) + lVar12 +
             (uVar17 >> 0x1c | uVar17 << 0x24);
    uVar3 = param_2[6];
    local_d0 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18
               | (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 |
               (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
    uVar3 = (uVar10 >> 0x17 | uVar10 << 0x29) ^ uVar10;
    uVar4 = (uVar18 >> 5 | uVar18 << 0x3b) ^ uVar18;
    uVar3 = (uVar3 >> 4 | uVar3 << 0x3c) ^ uVar10;
    uVar4 = (uVar4 >> 6 | uVar4 << 0x3a) ^ uVar18;
    lVar12 = local_d0 + uVar6 + DAT_100c00ff0 + ((uVar11 ^ uVar2) & uVar10 ^ uVar2) +
             (uVar3 >> 0xe | uVar3 << 0x32);
    uVar9 = uVar9 + lVar12;
    uVar7 = ((uVar5 ^ uVar8) & uVar18) + (uVar5 & uVar8) + lVar12 + (uVar4 >> 0x1c | uVar4 << 0x24);
    uVar6 = param_2[7];
    local_c8 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
               | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
               (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    uVar6 = (uVar9 >> 0x17 | uVar9 << 0x29) ^ uVar9;
    uVar3 = (uVar7 >> 5 | uVar7 << 0x3b) ^ uVar7;
    uVar6 = (uVar6 >> 4 | uVar6 << 0x3c) ^ uVar9;
    uVar3 = (uVar3 >> 6 | uVar3 << 0x3a) ^ uVar7;
    lVar12 = local_c8 + uVar2 + DAT_100c00ff8 + ((uVar10 ^ uVar11) & uVar9 ^ uVar11) +
             (uVar6 >> 0xe | uVar6 << 0x32);
    uVar8 = uVar8 + lVar12;
    uVar13 = ((uVar18 ^ uVar5) & uVar7) + (uVar18 & uVar5) + lVar12 +
             (uVar3 >> 0x1c | uVar3 << 0x24);
    uVar2 = param_2[8];
    local_c0 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar8 >> 0x17 | uVar8 << 0x29) ^ uVar8;
    uVar6 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar8;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar13;
    lVar12 = local_c0 + uVar11 + DAT_100c01000 + ((uVar9 ^ uVar10) & uVar8 ^ uVar10) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar5 = uVar5 + lVar12;
    uVar14 = ((uVar7 ^ uVar18) & uVar13) + (uVar7 & uVar18) + lVar12 +
             (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[9];
    local_b8 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar5 >> 0x17 | uVar5 << 0x29) ^ uVar5;
    uVar6 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar5;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar14;
    lVar12 = local_b8 + uVar10 + DAT_100c01008 + ((uVar8 ^ uVar9) & uVar5 ^ uVar9) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar18 = uVar18 + lVar12;
    uVar15 = ((uVar13 ^ uVar7) & uVar14) + (uVar13 & uVar7) + lVar12 +
             (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[10];
    local_b0 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar18 >> 0x17 | uVar18 << 0x29) ^ uVar18;
    uVar6 = (uVar15 >> 5 | uVar15 << 0x3b) ^ uVar15;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar18;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar15;
    lVar12 = local_b0 + uVar9 + DAT_100c01010 + ((uVar5 ^ uVar8) & uVar18 ^ uVar8) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar7 = uVar7 + lVar12;
    uVar16 = ((uVar14 ^ uVar13) & uVar15) + (uVar14 & uVar13) + lVar12 +
             (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[0xb];
    local_a8 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar7 >> 0x17 | uVar7 << 0x29) ^ uVar7;
    uVar6 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar7;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar16;
    lVar12 = local_a8 + uVar8 + DAT_100c01018 + ((uVar18 ^ uVar5) & uVar7 ^ uVar5) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar13 = uVar13 + lVar12;
    uVar17 = ((uVar15 ^ uVar14) & uVar16) + (uVar15 & uVar14) + lVar12 +
             (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[0xc];
    local_a0 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar6 = (uVar17 >> 5 | uVar17 << 0x3b) ^ uVar17;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar13;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar17;
    lVar12 = local_a0 + uVar5 + DAT_100c01020 + ((uVar7 ^ uVar18) & uVar13 ^ uVar18) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar14 = uVar14 + lVar12;
    uVar4 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + lVar12 +
            (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[0xd];
    local_98 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar6 = (uVar4 >> 5 | uVar4 << 0x3b) ^ uVar4;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar14;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar4;
    lVar12 = local_98 + uVar18 + DAT_100c01028 + ((uVar13 ^ uVar7) & uVar14 ^ uVar7) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar15 = uVar15 + lVar12;
    uVar3 = ((uVar17 ^ uVar16) & uVar4) + (uVar17 & uVar16) + lVar12 +
            (uVar6 >> 0x1c | uVar6 << 0x24);
    uVar2 = param_2[0xe];
    local_90 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar15 >> 0x17 | uVar15 << 0x29) ^ uVar15;
    uVar6 = (uVar3 >> 5 | uVar3 << 0x3b) ^ uVar3;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar15;
    uVar6 = (uVar6 >> 6 | uVar6 << 0x3a) ^ uVar3;
    lVar12 = local_90 + uVar7 + DAT_100c01030 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar16 = uVar16 + lVar12;
    uVar6 = ((uVar4 ^ uVar17) & uVar3) + (uVar4 & uVar17) + lVar12 + (uVar6 >> 0x1c | uVar6 << 0x24)
    ;
    uVar2 = param_2[0xf];
    local_88 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = (uVar16 >> 0x17 | uVar16 << 0x29) ^ uVar16;
    uVar18 = (uVar6 >> 5 | uVar6 << 0x3b) ^ uVar6;
    uVar2 = (uVar2 >> 4 | uVar2 << 0x3c) ^ uVar16;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar6;
    lVar12 = local_88 + uVar13 + DAT_100c01038 + ((uVar15 ^ uVar14) & uVar16 ^ uVar14) +
             (uVar2 >> 0xe | uVar2 << 0x32);
    uVar17 = uVar17 + lVar12;
    uVar13 = 0x10;
    uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + lVar12 + (uVar18 >> 0x1c | uVar18 << 0x24)
    ;
    do {
      uVar18 = (local_f8 >> 7 | local_f8 << 0x39) ^ local_f8;
      uVar5 = (local_90 >> 0x2a | local_90 << 0x16) ^ local_90;
      local_100 = local_b8 + (local_f8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                  local_100 + (local_90 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar17 >> 0x17 | uVar17 << 0x29) ^ uVar17;
      uVar5 = (uVar2 >> 5 | uVar2 << 0x3b) ^ uVar2;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar17;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar2;
      lVar12 = local_100 + uVar14 + (&DAT_100c00fc0)[uVar13] + ((uVar16 ^ uVar15) & uVar17 ^ uVar15)
               + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar4 = uVar4 + lVar12;
      uVar14 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_f0 >> 7 | local_f0 << 0x39) ^ local_f0;
      uVar5 = (local_88 >> 0x2a | local_88 << 0x16) ^ local_88;
      local_f8 = local_b0 + (local_f0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_f8 + (local_88 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar4 >> 0x17 | uVar4 << 0x29) ^ uVar4;
      uVar5 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar4;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar14;
      lVar12 = local_f8 + uVar15 + (&DAT_100c00fc0)[uVar13 + 1] +
               ((uVar17 ^ uVar16) & uVar4 ^ uVar16) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar3 = uVar3 + lVar12;
      uVar15 = ((uVar2 ^ uVar6) & uVar14) + (uVar2 & uVar6) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_e8 >> 7 | local_e8 << 0x39) ^ local_e8;
      uVar5 = (local_100 >> 0x2a | local_100 * 0x400000) ^ local_100;
      local_f0 = local_a8 + (local_e8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_f0 + (local_100 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar3 >> 0x17 | uVar3 << 0x29) ^ uVar3;
      uVar5 = (uVar15 >> 5 | uVar15 << 0x3b) ^ uVar15;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar3;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar15;
      lVar12 = local_f0 + uVar16 + (&DAT_100c00fc0)[uVar13 + 2] +
               ((uVar4 ^ uVar17) & uVar3 ^ uVar17) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar6 = uVar6 + lVar12;
      uVar16 = ((uVar14 ^ uVar2) & uVar15) + (uVar14 & uVar2) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_e0 >> 7 | local_e0 << 0x39) ^ local_e0;
      uVar5 = (local_f8 >> 0x2a | local_f8 * 0x400000) ^ local_f8;
      local_e8 = local_a0 + (local_e0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_e8 + (local_f8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar6 >> 0x17 | uVar6 << 0x29) ^ uVar6;
      uVar5 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar6;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar16;
      lVar12 = local_e8 + uVar17 + (&DAT_100c00fc0)[uVar13 + 3] + ((uVar3 ^ uVar4) & uVar6 ^ uVar4)
               + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar2 = uVar2 + lVar12;
      uVar17 = ((uVar15 ^ uVar14) & uVar16) + (uVar15 & uVar14) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_d8 >> 7 | local_d8 << 0x39) ^ local_d8;
      uVar5 = (local_f0 >> 0x2a | local_f0 * 0x400000) ^ local_f0;
      local_e0 = local_98 + (local_d8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_e0 + (local_f0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar2 >> 0x17 | uVar2 << 0x29) ^ uVar2;
      uVar5 = (uVar17 >> 5 | uVar17 << 0x3b) ^ uVar17;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar2;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar17;
      lVar12 = local_e0 + uVar4 + (&DAT_100c00fc0)[uVar13 + 4] + ((uVar6 ^ uVar3) & uVar2 ^ uVar3) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      uVar14 = uVar14 + lVar12;
      uVar4 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_d0 >> 7 | local_d0 << 0x39) ^ local_d0;
      uVar5 = (local_e8 >> 0x2a | local_e8 * 0x400000) ^ local_e8;
      local_d8 = local_90 + (local_d0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_d8 + (local_e8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar5 = (uVar4 >> 5 | uVar4 << 0x3b) ^ uVar4;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar14;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar4;
      lVar12 = local_d8 + uVar3 + (&DAT_100c00fc0)[uVar13 + 5] + ((uVar2 ^ uVar6) & uVar14 ^ uVar6)
               + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar15 = uVar15 + lVar12;
      uVar3 = ((uVar17 ^ uVar16) & uVar4) + (uVar17 & uVar16) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_c8 >> 7 | local_c8 << 0x39) ^ local_c8;
      uVar5 = (local_e0 >> 0x2a | local_e0 * 0x400000) ^ local_e0;
      local_d0 = local_88 + (local_c8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_d0 + (local_e0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar15 >> 0x17 | uVar15 << 0x29) ^ uVar15;
      uVar5 = (uVar3 >> 5 | uVar3 << 0x3b) ^ uVar3;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar15;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar3;
      lVar12 = local_d0 + uVar6 + (&DAT_100c00fc0)[uVar13 + 6] + ((uVar14 ^ uVar2) & uVar15 ^ uVar2)
               + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar16 = uVar16 + lVar12;
      uVar6 = ((uVar4 ^ uVar17) & uVar3) + (uVar4 & uVar17) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_c0 >> 7 | local_c0 << 0x39) ^ local_c0;
      uVar5 = (local_d8 >> 0x2a | local_d8 * 0x400000) ^ local_d8;
      local_c8 = local_100 + (local_c0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_c8 + (local_d8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar16 >> 0x17 | uVar16 << 0x29) ^ uVar16;
      uVar5 = (uVar6 >> 5 | uVar6 << 0x3b) ^ uVar6;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar16;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar6;
      lVar12 = local_c8 + uVar2 + (&DAT_100c00fc0)[uVar13 + 7] +
               ((uVar15 ^ uVar14) & uVar16 ^ uVar14) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar17 = uVar17 + lVar12;
      uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + lVar12 + (uVar5 >> 0x1c | uVar5 << 0x24)
      ;
      uVar18 = (local_b8 >> 7 | local_b8 << 0x39) ^ local_b8;
      uVar5 = (local_d0 >> 0x2a | local_d0 * 0x400000) ^ local_d0;
      local_c0 = local_f8 + (local_b8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_c0 + (local_d0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar17 >> 0x17 | uVar17 << 0x29) ^ uVar17;
      uVar5 = (uVar2 >> 5 | uVar2 << 0x3b) ^ uVar2;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar17;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar2;
      lVar12 = local_c0 + uVar14 + (&DAT_100c00fc0)[uVar13 + 8] +
               ((uVar16 ^ uVar15) & uVar17 ^ uVar15) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar4 = uVar4 + lVar12;
      uVar14 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_b0 >> 7 | local_b0 << 0x39) ^ local_b0;
      uVar5 = (local_c8 >> 0x2a | local_c8 * 0x400000) ^ local_c8;
      local_b8 = local_f0 + (local_b0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_b8 + (local_c8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar4 >> 0x17 | uVar4 << 0x29) ^ uVar4;
      uVar5 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar4;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar14;
      lVar12 = local_b8 + uVar15 + (&DAT_100c00fc0)[uVar13 + 9] +
               ((uVar17 ^ uVar16) & uVar4 ^ uVar16) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar3 = uVar3 + lVar12;
      uVar15 = ((uVar2 ^ uVar6) & uVar14) + (uVar2 & uVar6) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_a8 >> 7 | local_a8 << 0x39) ^ local_a8;
      uVar5 = (local_c0 >> 0x2a | local_c0 * 0x400000) ^ local_c0;
      local_b0 = local_e8 + (local_a8 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_b0 + (local_c0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar3 >> 0x17 | uVar3 << 0x29) ^ uVar3;
      uVar5 = (uVar15 >> 5 | uVar15 << 0x3b) ^ uVar15;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar3;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar15;
      lVar12 = local_b0 + uVar16 + (&DAT_100c00fc0)[uVar13 + 10] +
               ((uVar4 ^ uVar17) & uVar3 ^ uVar17) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar6 = uVar6 + lVar12;
      uVar16 = ((uVar14 ^ uVar2) & uVar15) + (uVar14 & uVar2) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_a0 >> 7 | local_a0 << 0x39) ^ local_a0;
      uVar5 = (local_b8 >> 0x2a | local_b8 * 0x400000) ^ local_b8;
      local_a8 = local_e0 + (local_a0 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_a8 + (local_b8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar6 >> 0x17 | uVar6 << 0x29) ^ uVar6;
      uVar5 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar6;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar16;
      lVar12 = local_a8 + uVar17 + (&DAT_100c00fc0)[uVar13 + 0xb] +
               ((uVar3 ^ uVar4) & uVar6 ^ uVar4) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar2 = uVar2 + lVar12;
      uVar17 = ((uVar15 ^ uVar14) & uVar16) + (uVar15 & uVar14) + lVar12 +
               (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_98 >> 7 | local_98 << 0x39) ^ local_98;
      uVar5 = (local_b0 >> 0x2a | local_b0 * 0x400000) ^ local_b0;
      local_a0 = local_d8 + (local_98 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_a0 + (local_b0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar2 >> 0x17 | uVar2 << 0x29) ^ uVar2;
      uVar5 = (uVar17 >> 5 | uVar17 << 0x3b) ^ uVar17;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar2;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar17;
      lVar12 = local_a0 + uVar4 + (&DAT_100c00fc0)[uVar13 + 0xc] + ((uVar6 ^ uVar3) & uVar2 ^ uVar3)
               + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar14 = uVar14 + lVar12;
      uVar4 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_90 >> 7 | local_90 << 0x39) ^ local_90;
      uVar5 = (local_a8 >> 0x2a | local_a8 * 0x400000) ^ local_a8;
      local_98 = local_d0 + (local_90 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_98 + (local_a8 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar5 = (uVar4 >> 5 | uVar4 << 0x3b) ^ uVar4;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar14;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar4;
      lVar12 = local_98 + uVar3 + (&DAT_100c00fc0)[uVar13 + 0xd] +
               ((uVar2 ^ uVar6) & uVar14 ^ uVar6) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar15 = uVar15 + lVar12;
      uVar3 = ((uVar17 ^ uVar16) & uVar4) + (uVar17 & uVar16) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_88 >> 7 | local_88 << 0x39) ^ local_88;
      uVar5 = (local_a0 >> 0x2a | local_a0 * 0x400000) ^ local_a0;
      local_90 = local_c8 + (local_88 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_90 + (local_a0 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar15 >> 0x17 | uVar15 << 0x29) ^ uVar15;
      uVar5 = (uVar3 >> 5 | uVar3 << 0x3b) ^ uVar3;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar15;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar3;
      lVar12 = local_90 + uVar6 + (&DAT_100c00fc0)[uVar13 + 0xe] +
               ((uVar14 ^ uVar2) & uVar15 ^ uVar2) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar16 = uVar16 + lVar12;
      uVar6 = ((uVar4 ^ uVar17) & uVar3) + (uVar4 & uVar17) + lVar12 +
              (uVar5 >> 0x1c | uVar5 << 0x24);
      uVar18 = (local_100 >> 7 | local_100 << 0x39) ^ local_100;
      uVar5 = (local_98 >> 0x2a | local_98 * 0x400000) ^ local_98;
      local_88 = local_c0 + (local_100 >> 7 ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)) +
                 local_88 + (local_98 >> 6 ^ (uVar5 >> 0x13 | uVar5 << 0x2d));
      uVar18 = (uVar16 >> 0x17 | uVar16 << 0x29) ^ uVar16;
      uVar5 = (uVar6 >> 5 | uVar6 << 0x3b) ^ uVar6;
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar16;
      uVar5 = (uVar5 >> 6 | uVar5 << 0x3a) ^ uVar6;
      lVar12 = local_88 + uVar2 + (&DAT_100c00fc0)[uVar13 + 0xf] +
               ((uVar15 ^ uVar14) & uVar16 ^ uVar14) + (uVar18 >> 0xe | uVar18 << 0x32);
      uVar17 = uVar17 + lVar12;
      uVar13 = uVar13 + 0x10;
      uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + lVar12 + (uVar5 >> 0x1c | uVar5 << 0x24)
      ;
    } while (uVar13 < 0x50);
    param_2 = param_2 + 0x10;
    uVar2 = uVar2 + *param_1;
    uVar6 = uVar6 + param_1[1];
    uVar3 = uVar3 + param_1[2];
    uVar4 = uVar4 + param_1[3];
    uVar17 = uVar17 + param_1[4];
    uVar16 = uVar16 + param_1[5];
    uVar15 = uVar15 + param_1[6];
    uVar14 = uVar14 + param_1[7];
    *param_1 = uVar2;
    param_1[1] = uVar6;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar17;
    param_1[5] = uVar16;
    param_1[6] = uVar15;
    param_1[7] = uVar14;
  } while (param_2 < puVar1);
  return;
}


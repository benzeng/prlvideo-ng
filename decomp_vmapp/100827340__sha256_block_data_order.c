
void _sha256_block_data_order(uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  
  puVar1 = param_2 + param_3 * 0x10;
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar18 = param_1[4];
  uVar17 = param_1[5];
  uVar16 = param_1[6];
  uVar15 = param_1[7];
  do {
    uVar14 = *param_2;
    local_c0 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    uVar14 = (uVar18 >> 0xe | uVar18 << 0x12) ^ uVar18;
    uVar19 = (uVar2 >> 9 | uVar2 << 0x17) ^ uVar2;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
    uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar2;
    iVar13 = local_c0 + uVar15 + DAT_1008285c0 + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar4 = uVar4 + iVar13;
    uVar12 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e);
    uVar15 = param_2[1];
    local_bc = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    uVar15 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar14 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar4;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar12;
    iVar13 = local_bc + uVar16 + DAT_1008285c4 + ((uVar18 ^ uVar17) & uVar4 ^ uVar17) +
             (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = uVar3 + iVar13;
    uVar11 = ((uVar2 ^ uVar6) & uVar12) + (uVar2 & uVar6) + iVar13 + (uVar14 >> 2 | uVar14 << 0x1e);
    uVar16 = param_2[2];
    local_b8 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar16 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar15 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar3;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar11;
    iVar13 = local_b8 + uVar17 + DAT_1008285c8 + ((uVar4 ^ uVar18) & uVar3 ^ uVar18) +
             (uVar16 >> 6 | uVar16 << 0x1a);
    uVar6 = uVar6 + iVar13;
    uVar10 = ((uVar12 ^ uVar2) & uVar11) + (uVar12 & uVar2) + iVar13 +
             (uVar15 >> 2 | uVar15 << 0x1e);
    uVar17 = param_2[3];
    local_b4 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    uVar17 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar6;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar13 = local_b4 + uVar18 + DAT_1008285cc + ((uVar3 ^ uVar4) & uVar6 ^ uVar4) +
             (uVar17 >> 6 | uVar17 << 0x1a);
    uVar2 = uVar2 + iVar13;
    uVar9 = ((uVar11 ^ uVar12) & uVar10) + (uVar11 & uVar12) + iVar13 +
            (uVar16 >> 2 | uVar16 << 0x1e);
    uVar18 = param_2[4];
    local_b0 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar18 = (uVar2 >> 0xe | uVar2 * 0x40000) ^ uVar2;
    uVar17 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar18 = (uVar18 >> 5 | uVar18 << 0x1b) ^ uVar2;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
    iVar13 = local_b0 + uVar4 + DAT_1008285d0 + ((uVar6 ^ uVar3) & uVar2 ^ uVar3) +
             (uVar18 >> 6 | uVar18 << 0x1a);
    uVar12 = uVar12 + iVar13;
    uVar5 = ((uVar10 ^ uVar11) & uVar9) + (uVar10 & uVar11) + iVar13 +
            (uVar17 >> 2 | uVar17 << 0x1e);
    uVar4 = param_2[5];
    local_ac = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar18 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar4 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar12;
    uVar18 = (uVar18 >> 0xb | uVar18 << 0x15) ^ uVar5;
    iVar13 = local_ac + uVar3 + DAT_1008285d4 + ((uVar2 ^ uVar6) & uVar12 ^ uVar6) +
             (uVar4 >> 6 | uVar4 << 0x1a);
    uVar11 = uVar11 + iVar13;
    uVar19 = ((uVar9 ^ uVar10) & uVar5) + (uVar9 & uVar10) + iVar13 + (uVar18 >> 2 | uVar18 << 0x1e)
    ;
    uVar3 = param_2[6];
    local_a8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar4 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar3 = (uVar3 >> 5 | uVar3 << 0x1b) ^ uVar11;
    uVar4 = (uVar4 >> 0xb | uVar4 << 0x15) ^ uVar19;
    iVar13 = local_a8 + uVar6 + DAT_1008285d8 + ((uVar12 ^ uVar2) & uVar11 ^ uVar2) +
             (uVar3 >> 6 | uVar3 << 0x1a);
    uVar10 = uVar10 + iVar13;
    uVar7 = ((uVar5 ^ uVar9) & uVar19) + (uVar5 & uVar9) + iVar13 + (uVar4 >> 2 | uVar4 << 0x1e);
    uVar6 = param_2[7];
    local_a4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar3 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar10;
    uVar3 = (uVar3 >> 0xb | uVar3 << 0x15) ^ uVar7;
    iVar13 = local_a4 + uVar2 + DAT_1008285dc + ((uVar11 ^ uVar12) & uVar10 ^ uVar12) +
             (uVar6 >> 6 | uVar6 << 0x1a);
    uVar9 = uVar9 + iVar13;
    uVar14 = ((uVar19 ^ uVar5) & uVar7) + (uVar19 & uVar5) + iVar13 + (uVar3 >> 2 | uVar3 << 0x1e);
    uVar2 = param_2[8];
    local_a0 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar6 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar9;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar14;
    iVar13 = local_a0 + uVar12 + DAT_1008285e0 + ((uVar10 ^ uVar11) & uVar9 ^ uVar11) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar5 = uVar5 + iVar13;
    uVar15 = ((uVar7 ^ uVar19) & uVar14) + (uVar7 & uVar19) + iVar13 + (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[9];
    local_9c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar6 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar5;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar15;
    iVar13 = local_9c + uVar11 + DAT_1008285e4 + ((uVar9 ^ uVar10) & uVar5 ^ uVar10) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar19 = uVar19 + iVar13;
    uVar16 = ((uVar14 ^ uVar7) & uVar15) + (uVar14 & uVar7) + iVar13 + (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[10];
    local_98 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar6 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar19;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar16;
    iVar13 = local_98 + uVar10 + DAT_1008285e8 + ((uVar5 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar7 = uVar7 + iVar13;
    uVar17 = ((uVar15 ^ uVar14) & uVar16) + (uVar15 & uVar14) + iVar13 +
             (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[0xb];
    local_94 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar6 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar7;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar17;
    iVar13 = local_94 + uVar9 + DAT_1008285ec + ((uVar19 ^ uVar5) & uVar7 ^ uVar5) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar14 = uVar14 + iVar13;
    uVar18 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + iVar13 +
             (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[0xc];
    local_90 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar6 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar14;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar18;
    iVar13 = local_90 + uVar5 + DAT_1008285f0 + ((uVar7 ^ uVar19) & uVar14 ^ uVar19) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar15 = uVar15 + iVar13;
    uVar4 = ((uVar17 ^ uVar16) & uVar18) + (uVar17 & uVar16) + iVar13 + (uVar6 >> 2 | uVar6 << 0x1e)
    ;
    uVar2 = param_2[0xd];
    local_8c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar6 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar15;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar4;
    iVar13 = local_8c + uVar19 + DAT_1008285f4 + ((uVar14 ^ uVar7) & uVar15 ^ uVar7) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar16 = uVar16 + iVar13;
    uVar3 = ((uVar18 ^ uVar17) & uVar4) + (uVar18 & uVar17) + iVar13 + (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[0xe];
    local_88 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar6 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar16;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar3;
    iVar13 = local_88 + uVar7 + DAT_1008285f8 + ((uVar15 ^ uVar14) & uVar16 ^ uVar14) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar17 = uVar17 + iVar13;
    uVar6 = ((uVar4 ^ uVar18) & uVar3) + (uVar4 & uVar18) + iVar13 + (uVar6 >> 2 | uVar6 << 0x1e);
    uVar2 = param_2[0xf];
    local_84 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar19 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar17;
    uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar6;
    iVar13 = local_84 + uVar14 + DAT_1008285fc + ((uVar16 ^ uVar15) & uVar17 ^ uVar15) +
             (uVar2 >> 6 | uVar2 << 0x1a);
    uVar18 = uVar18 + iVar13;
    uVar8 = 0x10;
    uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e);
    do {
      uVar14 = (local_bc >> 0xb | local_bc << 0x15) ^ local_bc;
      uVar19 = (local_88 >> 2 | local_88 << 0x1e) ^ local_88;
      local_c0 = local_9c + (local_bc >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_c0 +
                 (local_88 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar18 >> 0xe | uVar18 << 0x12) ^ uVar18;
      uVar19 = (uVar2 >> 9 | uVar2 << 0x17) ^ uVar2;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar2;
      iVar13 = local_c0 + uVar15 + (&DAT_1008285c0)[uVar8] + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar4 = uVar4 + iVar13;
      uVar15 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e)
      ;
      uVar14 = (local_b8 >> 0xb | local_b8 << 0x15) ^ local_b8;
      uVar19 = (local_84 >> 2 | local_84 << 0x1e) ^ local_84;
      local_bc = local_98 + (local_b8 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_bc +
                 (local_84 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      uVar19 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar4;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar15;
      iVar13 = local_bc + uVar16 + (&DAT_1008285c0)[uVar8 + 1] +
               ((uVar18 ^ uVar17) & uVar4 ^ uVar17) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar3 = uVar3 + iVar13;
      uVar16 = ((uVar2 ^ uVar6) & uVar15) + (uVar2 & uVar6) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_b4 >> 0xb | local_b4 << 0x15) ^ local_b4;
      uVar19 = (local_c0 >> 2 | local_c0 * 0x40000000) ^ local_c0;
      local_b8 = local_94 + (local_b4 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_b8 +
                 (local_c0 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar19 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar3;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar16;
      iVar13 = local_b8 + uVar17 + (&DAT_1008285c0)[uVar8 + 2] + ((uVar4 ^ uVar18) & uVar3 ^ uVar18)
               + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar17 = ((uVar15 ^ uVar2) & uVar16) + (uVar15 & uVar2) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_b0 >> 0xb | local_b0 << 0x15) ^ local_b0;
      uVar19 = (local_bc >> 2 | local_bc * 0x40000000) ^ local_bc;
      local_b4 = local_90 + (local_b0 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_b4 +
                 (local_bc >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar19 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar6;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar17;
      iVar13 = local_b4 + uVar18 + (&DAT_1008285c0)[uVar8 + 3] + ((uVar3 ^ uVar4) & uVar6 ^ uVar4) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar2 = uVar2 + iVar13;
      uVar18 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_ac >> 0xb | local_ac << 0x15) ^ local_ac;
      uVar19 = (local_b8 >> 2 | local_b8 * 0x40000000) ^ local_b8;
      local_b0 = local_8c + (local_ac >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_b0 +
                 (local_b8 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar2 >> 0xe | uVar2 * 0x40000) ^ uVar2;
      uVar19 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar2;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar18;
      iVar13 = local_b0 + uVar4 + (&DAT_1008285c0)[uVar8 + 4] + ((uVar6 ^ uVar3) & uVar2 ^ uVar3) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar15 = uVar15 + iVar13;
      uVar4 = ((uVar17 ^ uVar16) & uVar18) + (uVar17 & uVar16) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_a8 >> 0xb | local_a8 << 0x15) ^ local_a8;
      uVar19 = (local_b4 >> 2 | local_b4 * 0x40000000) ^ local_b4;
      local_ac = local_88 + (local_a8 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_ac +
                 (local_b4 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar19 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar15;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar4;
      iVar13 = local_ac + uVar3 + (&DAT_1008285c0)[uVar8 + 5] + ((uVar2 ^ uVar6) & uVar15 ^ uVar6) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar16 = uVar16 + iVar13;
      uVar3 = ((uVar18 ^ uVar17) & uVar4) + (uVar18 & uVar17) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_a4 >> 0xb | local_a4 << 0x15) ^ local_a4;
      uVar19 = (local_b0 >> 2 | local_b0 * 0x40000000) ^ local_b0;
      local_a8 = local_84 + (local_a4 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_a8 +
                 (local_b0 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
      uVar19 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar16;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar3;
      iVar13 = local_a8 + uVar6 + (&DAT_1008285c0)[uVar8 + 6] + ((uVar15 ^ uVar2) & uVar16 ^ uVar2)
               + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar17 = uVar17 + iVar13;
      uVar6 = ((uVar4 ^ uVar18) & uVar3) + (uVar4 & uVar18) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_a0 >> 0xb | local_a0 << 0x15) ^ local_a0;
      uVar19 = (local_ac >> 2 | local_ac * 0x40000000) ^ local_ac;
      local_a4 = local_c0 + (local_a0 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_a4 +
                 (local_ac >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      uVar19 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar17;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar6;
      iVar13 = local_a4 + uVar2 + (&DAT_1008285c0)[uVar8 + 7] +
               ((uVar16 ^ uVar15) & uVar17 ^ uVar15) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar18 = uVar18 + iVar13;
      uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_9c >> 0xb | local_9c << 0x15) ^ local_9c;
      uVar19 = (local_a8 >> 2 | local_a8 * 0x40000000) ^ local_a8;
      local_a0 = local_bc + (local_9c >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_a0 +
                 (local_a8 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar19 = (uVar2 >> 9 | uVar2 * 0x800000) ^ uVar2;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar2;
      iVar13 = local_a0 + uVar15 + (&DAT_1008285c0)[uVar8 + 8] +
               ((uVar17 ^ uVar16) & uVar18 ^ uVar16) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar4 = uVar4 + iVar13;
      uVar15 = ((uVar6 ^ uVar3) & uVar2) + (uVar6 & uVar3) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e)
      ;
      uVar14 = (local_98 >> 0xb | local_98 << 0x15) ^ local_98;
      uVar19 = (local_a4 >> 2 | local_a4 * 0x40000000) ^ local_a4;
      local_9c = local_b8 + (local_98 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_9c +
                 (local_a4 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      uVar19 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar4;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar15;
      iVar13 = local_9c + uVar16 + (&DAT_1008285c0)[uVar8 + 9] +
               ((uVar18 ^ uVar17) & uVar4 ^ uVar17) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar3 = uVar3 + iVar13;
      uVar16 = ((uVar2 ^ uVar6) & uVar15) + (uVar2 & uVar6) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_94 >> 0xb | local_94 << 0x15) ^ local_94;
      uVar19 = (local_a0 >> 2 | local_a0 * 0x40000000) ^ local_a0;
      local_98 = local_b4 + (local_94 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_98 +
                 (local_a0 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar19 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar3;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar16;
      iVar13 = local_98 + uVar17 + (&DAT_1008285c0)[uVar8 + 10] +
               ((uVar4 ^ uVar18) & uVar3 ^ uVar18) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar17 = ((uVar15 ^ uVar2) & uVar16) + (uVar15 & uVar2) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_90 >> 0xb | local_90 << 0x15) ^ local_90;
      uVar19 = (local_9c >> 2 | local_9c * 0x40000000) ^ local_9c;
      local_94 = local_b0 + (local_90 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_94 +
                 (local_9c >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar19 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar6;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar17;
      iVar13 = local_94 + uVar18 + (&DAT_1008285c0)[uVar8 + 0xb] + ((uVar3 ^ uVar4) & uVar6 ^ uVar4)
               + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar2 = uVar2 + iVar13;
      uVar18 = ((uVar16 ^ uVar15) & uVar17) + (uVar16 & uVar15) + iVar13 +
               (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_8c >> 0xb | local_8c << 0x15) ^ local_8c;
      uVar19 = (local_98 >> 2 | local_98 * 0x40000000) ^ local_98;
      local_90 = local_ac + (local_8c >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_90 +
                 (local_98 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar2 >> 0xe | uVar2 * 0x40000) ^ uVar2;
      uVar19 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar2;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar18;
      iVar13 = local_90 + uVar4 + (&DAT_1008285c0)[uVar8 + 0xc] + ((uVar6 ^ uVar3) & uVar2 ^ uVar3)
               + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar15 = uVar15 + iVar13;
      uVar4 = ((uVar17 ^ uVar16) & uVar18) + (uVar17 & uVar16) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_88 >> 0xb | local_88 << 0x15) ^ local_88;
      uVar19 = (local_94 >> 2 | local_94 * 0x40000000) ^ local_94;
      local_8c = local_a8 + (local_88 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_8c +
                 (local_94 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar19 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar15;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar4;
      iVar13 = local_8c + uVar3 + (&DAT_1008285c0)[uVar8 + 0xd] + ((uVar2 ^ uVar6) & uVar15 ^ uVar6)
               + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar16 = uVar16 + iVar13;
      uVar3 = ((uVar18 ^ uVar17) & uVar4) + (uVar18 & uVar17) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_84 >> 0xb | local_84 << 0x15) ^ local_84;
      uVar19 = (local_90 >> 2 | local_90 * 0x40000000) ^ local_90;
      local_88 = local_a4 + (local_84 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_88 +
                 (local_90 >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
      uVar19 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar16;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar3;
      iVar13 = local_88 + uVar6 + (&DAT_1008285c0)[uVar8 + 0xe] +
               ((uVar15 ^ uVar2) & uVar16 ^ uVar2) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar17 = uVar17 + iVar13;
      uVar6 = ((uVar4 ^ uVar18) & uVar3) + (uVar4 & uVar18) + iVar13 +
              (uVar19 >> 2 | uVar19 << 0x1e);
      uVar14 = (local_c0 >> 0xb | local_c0 * 0x200000) ^ local_c0;
      uVar19 = (local_8c >> 2 | local_8c * 0x40000000) ^ local_8c;
      local_84 = local_a0 + (local_c0 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19)) + local_84 +
                 (local_8c >> 10 ^ (uVar19 >> 0x11 | uVar19 << 0xf));
      uVar14 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      uVar19 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar17;
      uVar19 = (uVar19 >> 0xb | uVar19 << 0x15) ^ uVar6;
      iVar13 = local_84 + uVar2 + (&DAT_1008285c0)[uVar8 + 0xf] +
               ((uVar16 ^ uVar15) & uVar17 ^ uVar15) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar18 = uVar18 + iVar13;
      uVar8 = uVar8 + 0x10;
      uVar2 = ((uVar3 ^ uVar4) & uVar6) + (uVar3 & uVar4) + iVar13 + (uVar19 >> 2 | uVar19 << 0x1e);
    } while (uVar8 < 0x40);
    param_2 = param_2 + 0x10;
    uVar2 = uVar2 + *param_1;
    uVar6 = uVar6 + param_1[1];
    uVar3 = uVar3 + param_1[2];
    uVar4 = uVar4 + param_1[3];
    uVar18 = uVar18 + param_1[4];
    uVar17 = uVar17 + param_1[5];
    uVar16 = uVar16 + param_1[6];
    uVar15 = uVar15 + param_1[7];
    *param_1 = uVar2;
    param_1[1] = uVar6;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar18;
    param_1[5] = uVar17;
    param_1[6] = uVar16;
    param_1[7] = uVar15;
  } while (param_2 < puVar1);
  return;
}



void _whirlpool_block(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
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
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
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
  long local_70;
  long local_68;
  
  local_100 = *param_1;
  local_f8 = param_1[1];
  local_f0 = param_1[2];
  local_e8 = param_1[3];
  local_e0 = param_1[4];
  local_d8 = param_1[5];
  local_d0 = param_1[6];
  local_c8 = param_1[7];
  local_70 = param_3;
  do {
    local_c0 = local_100 ^ *param_2;
    local_b8 = local_f8 ^ param_2[1];
    local_b0 = local_f0 ^ param_2[2];
    local_a8 = local_e8 ^ param_2[3];
    local_a0 = local_e0 ^ param_2[4];
    local_98 = local_d8 ^ param_2[5];
    local_90 = local_d0 ^ param_2[6];
    local_68 = 0;
    local_88 = local_c8 ^ param_2[7];
    do {
      uVar1 = local_100 >> 8;
      uVar2 = local_100 >> 0x10;
      uVar3 = local_100 >> 0x18;
      uVar4 = local_100 >> 0x20;
      uVar5 = local_100 >> 0x28;
      uVar6 = local_100 >> 0x30;
      uVar7 = local_f8 >> 8;
      uVar8 = local_f8 >> 0x10;
      uVar9 = local_f8 >> 0x18;
      uVar10 = local_f8 >> 0x20;
      uVar11 = local_f8 >> 0x28;
      uVar12 = local_f0 >> 8;
      uVar13 = local_f0 >> 0x10;
      uVar14 = local_f0 >> 0x18;
      uVar15 = local_f0 >> 0x20;
      uVar16 = local_e8 >> 8;
      uVar17 = local_e8 >> 0x10;
      uVar18 = local_e8 >> 0x18;
      uVar19 = local_e0 >> 8;
      uVar20 = local_e0 >> 0x10;
      uVar21 = local_d8 >> 8;
      uVar22 = *(ulong *)(&DAT_100c04ac1 + (local_100 >> 0x38) * 0x10) ^
               *(ulong *)(&DAT_100c04ac2 + (local_f8 >> 0x30 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac3 + (local_f0 >> 0x28 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac4 + (local_e8 >> 0x20 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac5 + (local_e0 >> 0x18 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac6 + (local_d8 >> 0x10 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac7 + (local_d0 >> 8 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac0 + (local_c8 & 0xff) * 0x10);
      local_100 = (&DAT_100c05ac0)[local_68] ^
                  *(ulong *)(&DAT_100c04ac0 + (local_100 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac1 + (local_f8 >> 0x38) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac2 + (local_f0 >> 0x30 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac3 + (local_e8 >> 0x28 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac4 + (local_e0 >> 0x20 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac5 + (local_d8 >> 0x18 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac6 + (local_d0 >> 0x10 & 0xff) * 0x10) ^
                  *(ulong *)(&DAT_100c04ac7 + (local_c8 >> 8 & 0xff) * 0x10);
      local_f8 = *(ulong *)(&DAT_100c04ac7 + (uVar1 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_f8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_f0 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_e8 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_e0 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_d8 >> 0x20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (local_d0 >> 0x18 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (local_c8 >> 0x10 & 0xff) * 0x10);
      local_f0 = *(ulong *)(&DAT_100c04ac6 + (uVar2 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar7 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_f0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_e8 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_e0 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_d8 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_d0 >> 0x20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (local_c8 >> 0x18 & 0xff) * 0x10);
      local_e8 = *(ulong *)(&DAT_100c04ac5 + (uVar3 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar12 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_e8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_e0 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_d8 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_d0 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_c8 >> 0x20 & 0xff) * 0x10);
      local_e0 = *(ulong *)(&DAT_100c04ac4 + (uVar4 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar9 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar13 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar16 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_e0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_d8 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_d0 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_c8 >> 0x28 & 0xff) * 0x10);
      local_d8 = *(ulong *)(&DAT_100c04ac3 + (uVar5 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (uVar10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar14 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar17 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar19 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_d8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_d0 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_c8 >> 0x30 & 0xff) * 0x10);
      local_d0 = *(ulong *)(&DAT_100c04ac2 + (uVar6 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (uVar11 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (uVar15 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar18 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar21 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_d0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_c8 >> 0x38) * 0x10);
      uVar1 = local_c0 >> 8;
      uVar2 = local_c0 >> 0x10;
      uVar3 = local_c0 >> 0x18;
      uVar4 = local_c0 >> 0x20;
      uVar5 = local_c0 >> 0x28;
      uVar6 = local_c0 >> 0x30;
      uVar7 = local_b8 >> 8;
      uVar8 = local_b8 >> 0x10;
      uVar9 = local_b8 >> 0x18;
      uVar10 = local_b8 >> 0x20;
      uVar11 = local_b8 >> 0x28;
      uVar12 = local_b0 >> 8;
      uVar13 = local_b0 >> 0x10;
      uVar14 = local_b0 >> 0x18;
      uVar15 = local_b0 >> 0x20;
      uVar16 = local_a8 >> 8;
      uVar17 = local_a8 >> 0x10;
      uVar18 = local_a8 >> 0x18;
      uVar19 = local_a0 >> 8;
      uVar20 = local_a0 >> 0x10;
      uVar21 = local_98 >> 8;
      uVar23 = uVar22 ^ *(ulong *)(&DAT_100c04ac1 + (local_c0 >> 0x38) * 0x10) ^
               *(ulong *)(&DAT_100c04ac2 + (local_b8 >> 0x30 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac3 + (local_b0 >> 0x28 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac4 + (local_a8 >> 0x20 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac5 + (local_a0 >> 0x18 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac6 + (local_98 >> 0x10 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac7 + (local_90 >> 8 & 0xff) * 0x10) ^
               *(ulong *)(&DAT_100c04ac0 + (local_88 & 0xff) * 0x10);
      local_c0 = local_100 ^ *(ulong *)(&DAT_100c04ac0 + (local_c0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_b8 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_b0 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_a8 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_a0 >> 0x20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (local_98 >> 0x18 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (local_90 >> 0x10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (local_88 >> 8 & 0xff) * 0x10);
      local_b8 = local_f8 ^ *(ulong *)(&DAT_100c04ac7 + (uVar1 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_b8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_b0 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_a8 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_a0 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_98 >> 0x20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (local_90 >> 0x18 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (local_88 >> 0x10 & 0xff) * 0x10);
      local_b0 = local_f0 ^ *(ulong *)(&DAT_100c04ac6 + (uVar2 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar7 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_b0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_a8 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_a0 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_98 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_90 >> 0x20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (local_88 >> 0x18 & 0xff) * 0x10);
      local_a8 = local_e8 ^ *(ulong *)(&DAT_100c04ac5 + (uVar3 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar12 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_a8 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_a0 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_98 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_90 >> 0x28 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (local_88 >> 0x20 & 0xff) * 0x10);
      local_a0 = local_e0 ^ *(ulong *)(&DAT_100c04ac4 + (uVar4 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar9 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar13 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar16 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_a0 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_98 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_90 >> 0x30 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (local_88 >> 0x28 & 0xff) * 0x10);
      local_98 = local_d8 ^ *(ulong *)(&DAT_100c04ac3 + (uVar5 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (uVar10 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar14 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar17 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar19 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_98 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_90 >> 0x38) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac2 + (local_88 >> 0x30 & 0xff) * 0x10);
      local_90 = local_d0 ^ *(ulong *)(&DAT_100c04ac2 + (uVar6 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac3 + (uVar11 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac4 + (uVar15 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac5 + (uVar18 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac6 + (uVar20 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac7 + (uVar21 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac0 + (local_90 & 0xff) * 0x10) ^
                 *(ulong *)(&DAT_100c04ac1 + (local_88 >> 0x38) * 0x10);
      local_68 = local_68 + 1;
      local_c8 = uVar22;
      local_88 = uVar23;
    } while (local_68 != 10);
    local_100 = local_c0 ^ *param_2 ^ *param_1;
    local_f8 = local_b8 ^ param_2[1] ^ param_1[1];
    local_f0 = local_b0 ^ param_2[2] ^ param_1[2];
    local_e8 = local_a8 ^ param_2[3] ^ param_1[3];
    local_e0 = local_a0 ^ param_2[4] ^ param_1[4];
    local_d8 = local_98 ^ param_2[5] ^ param_1[5];
    local_d0 = local_90 ^ param_2[6] ^ param_1[6];
    local_c8 = uVar23 ^ param_2[7] ^ param_1[7];
    *param_1 = local_100;
    param_1[1] = local_f8;
    param_1[2] = local_f0;
    param_1[3] = local_e8;
    param_1[4] = local_e0;
    param_1[5] = local_d8;
    param_1[6] = local_d0;
    param_1[7] = local_c8;
    param_2 = param_2 + 8;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  return;
}


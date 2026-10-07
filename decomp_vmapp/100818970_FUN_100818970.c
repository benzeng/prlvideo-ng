
undefined4 FUN_100818970(int *param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  ulong uVar14;
  size_t sVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_284;
  ulong local_278;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  ulong local_250;
  byte *local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 *local_230;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 *local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 *local_200;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  int local_1d8 [2];
  int *local_1d0;
  int local_1c0 [2];
  int *local_1b8;
  int local_1a8 [2];
  int *local_1a0;
  int local_190 [2];
  int *local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 *local_140;
  undefined4 local_130;
  undefined4 local_12c;
  char *local_128;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  int local_100 [2];
  long local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  char *local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  char *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  char *local_b0;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar12 = 0;
  local_38 = lVar16;
  if ((param_1 != (int *)0x0) &&
     ((*(long *)(param_1 + 0x38) != 0 || (*(ulong *)(param_1 + 0x3a) != 0)))) {
    local_238 = 0x10;
    local_234 = 2;
    local_230 = local_48;
    FUN_10089b2a0(&local_238,1);
    local_220 = 0x10;
    local_21c = 2;
    local_218 = local_58;
    FUN_10089b2a0(&local_220,(long)*param_1);
    local_204 = 4;
    local_200 = &local_9c;
    puVar13 = (ulong *)(*(long *)(param_1 + 0x38) + 0x10);
    if (*(long *)(param_1 + 0x38) == 0) {
      puVar13 = (ulong *)(param_1 + 0x3a);
    }
    uVar14 = *puVar13;
    if (*param_1 == 2) {
      local_208 = 3;
      local_9c = (undefined1)(uVar14 >> 0x10);
      local_9a = (undefined1)uVar14;
      uVar14 = uVar14 >> 8;
    }
    else {
      local_208 = 2;
      local_9c = (undefined1)(uVar14 >> 8);
    }
    local_9b = (undefined1)uVar14;
    if (param_1[0x36] != 0) {
      local_9d = (undefined1)param_1[0x36];
      local_1f0 = 1;
      local_1ec = 4;
      local_1e8 = &local_9d;
    }
    local_1d8[0] = param_1[4];
    local_1d8[1] = 4;
    local_1d0 = param_1 + 5;
    local_1c0[0] = param_1[0x11];
    local_1c0[1] = 4;
    local_1b8 = param_1 + 0x12;
    local_1a8[0] = param_1[0x1a];
    local_1a8[1] = 4;
    local_1a0 = param_1 + 0x1b;
    local_190[0] = param_1[1];
    local_190[1] = 4;
    local_188 = param_1 + 2;
    if (*(long *)(param_1 + 0x34) != 0) {
      local_178 = 0x10;
      local_174 = 2;
      local_170 = local_68;
      FUN_10089b2a0(&local_178);
    }
    if (*(long *)(param_1 + 0x32) != 0) {
      local_160 = 0x10;
      local_15c = 2;
      local_158 = local_78;
      FUN_10089b2a0(&local_160);
    }
    if (*(long *)(param_1 + 0x2e) != 0) {
      local_148 = 0x10;
      local_144 = 2;
      local_140 = local_88;
      FUN_10089b2a0(&local_148);
    }
    pcVar1 = *(char **)(param_1 + 0x46);
    if (pcVar1 != (char *)0x0) {
      sVar15 = _strlen(pcVar1);
      local_130 = (undefined4)sVar15;
      local_12c = 4;
      local_128 = pcVar1;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      local_100[0] = param_1[0x52];
      local_100[1] = 4;
      local_f8 = *(long *)(param_1 + 0x50);
    }
    if (0 < *(long *)(param_1 + 0x54)) {
      local_118 = 0x10;
      local_114 = 2;
      local_110 = local_98;
      FUN_10089b2a0(&local_118);
    }
    pcVar1 = *(char **)(param_1 + 0x24);
    if (pcVar1 != (char *)0x0) {
      sVar15 = _strlen(pcVar1);
      local_e8 = (undefined4)sVar15;
      local_e4 = 4;
      local_e0 = pcVar1;
    }
    pcVar1 = *(char **)(param_1 + 0x26);
    if (pcVar1 != (char *)0x0) {
      sVar15 = _strlen(pcVar1);
      local_d0 = (undefined4)sVar15;
      local_cc = 4;
      local_c8 = pcVar1;
    }
    pcVar1 = *(char **)(param_1 + 0x56);
    if (pcVar1 != (char *)0x0) {
      sVar15 = _strlen(pcVar1);
      local_b8 = (undefined4)sVar15;
      local_b4 = 4;
      local_b0 = pcVar1;
    }
    uVar8 = 0;
    iVar3 = FUN_1008a81e0(&local_238,0);
    iVar4 = FUN_1008a81e0(&local_220,0);
    iVar5 = FUN_1008a8360(&local_208,0);
    iVar6 = FUN_1008a8360(local_1c0,0);
    iVar7 = FUN_1008a8360(local_1d8,0);
    iVar7 = iVar7 + iVar6 + iVar5 + iVar4 + iVar3;
    if (param_1[1] != 0) {
      iVar3 = FUN_1008a8360(local_190,0);
      iVar7 = iVar7 + iVar3;
    }
    if (*(long *)(param_1 + 0x34) != 0) {
      uVar8 = FUN_1008a81e0(&local_178,0);
      iVar3 = FUN_1008af920(1,uVar8,1);
      iVar7 = iVar7 + iVar3;
    }
    uVar17 = 0;
    if (*(long *)(param_1 + 0x32) == 0) {
      local_268 = 0;
    }
    else {
      local_268 = FUN_1008a81e0(&local_160,0);
      iVar3 = FUN_1008af920(1,local_268,2);
      iVar7 = iVar7 + iVar3;
    }
    if (*(long *)(param_1 + 0x2c) != 0) {
      uVar17 = FUN_1008a17b0(*(long *)(param_1 + 0x2c),0);
      iVar3 = FUN_1008af920(1,uVar17,3);
      iVar7 = iVar7 + iVar3;
    }
    local_250 = 0;
    uVar9 = FUN_1008a8360(local_1a8,0);
    iVar3 = FUN_1008af920(1,uVar9,4);
    iVar3 = iVar3 + iVar7;
    if (*(long *)(param_1 + 0x2e) == 0) {
      local_278 = 0;
    }
    else {
      local_278 = FUN_1008a81e0(&local_148,0);
      iVar4 = FUN_1008af920(1,local_278 & 0xffffffff,5);
      iVar3 = iVar3 + iVar4;
    }
    if (0 < *(long *)(param_1 + 0x54)) {
      local_250 = FUN_1008a81e0(&local_118,0);
      iVar4 = FUN_1008af920(1,local_250 & 0xffffffff,9);
      iVar3 = iVar3 + iVar4;
    }
    uVar10 = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
      local_264 = 0;
    }
    else {
      local_264 = FUN_1008a8360(local_100,0);
      iVar4 = FUN_1008af920(1,local_264,10);
      iVar3 = iVar3 + iVar4;
    }
    if (*(long *)(param_1 + 0x46) != 0) {
      uVar10 = FUN_1008a8360(&local_130,0);
      iVar4 = FUN_1008af920(1,uVar10,6);
      iVar3 = iVar3 + iVar4;
    }
    uVar18 = 0;
    if (param_1[0x36] == 0) {
      local_26c = 0;
    }
    else {
      local_26c = FUN_1008a8360(&local_1f0,0);
      iVar4 = FUN_1008af920(1,local_26c,0xb);
      iVar3 = iVar3 + iVar4;
    }
    if (*(long *)(param_1 + 0x24) != 0) {
      uVar18 = FUN_1008a8360(&local_e8,0);
      iVar4 = FUN_1008af920(1,uVar18,7);
      iVar3 = iVar3 + iVar4;
    }
    if (*(long *)(param_1 + 0x26) == 0) {
      local_284 = 0;
    }
    else {
      local_284 = FUN_1008a8360(&local_d0,0);
      iVar4 = FUN_1008af920(1,local_284,8);
      iVar3 = iVar3 + iVar4;
    }
    if (*(long *)(param_1 + 0x56) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1008a8360(&local_b8,0);
      iVar4 = FUN_1008af920(1,uVar11,0xc);
      iVar3 = iVar3 + iVar4;
    }
    uVar12 = FUN_1008af920(1,iVar3,0x10);
    if (param_2 == (undefined8 *)0x0) {
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      local_240 = (byte *)*param_2;
      FUN_1008af7d0(&local_240,1,iVar3,0x10,0);
      FUN_1008a81e0(&local_238,&local_240);
      FUN_1008a81e0(&local_220,&local_240);
      FUN_1008a8360(&local_208,&local_240);
      FUN_1008a8360(local_1c0,&local_240);
      FUN_1008a8360(local_1d8,&local_240);
      pbVar2 = local_240;
      if (param_1[1] != 0) {
        FUN_1008a8360(local_190,&local_240);
        *pbVar2 = *pbVar2 & 0x20 | 0x80;
      }
      if (*(long *)(param_1 + 0x34) != 0) {
        FUN_1008af7d0(&local_240,1,uVar8,1,0x80);
        FUN_1008a81e0(&local_178,&local_240);
      }
      if (*(long *)(param_1 + 0x32) != 0) {
        FUN_1008af7d0(&local_240,1,local_268,2,0x80);
        FUN_1008a81e0(&local_160,&local_240);
      }
      if (*(long *)(param_1 + 0x2c) != 0) {
        FUN_1008af7d0(&local_240,1,uVar17,3,0x80);
        FUN_1008a17b0(*(undefined8 *)(param_1 + 0x2c),&local_240);
      }
      FUN_1008af7d0(&local_240,1,uVar9,4,0x80);
      FUN_1008a8360(local_1a8,&local_240);
      if (*(long *)(param_1 + 0x2e) != 0) {
        FUN_1008af7d0(&local_240,1,local_278,5,0x80);
        FUN_1008a81e0(&local_148,&local_240);
      }
      if (*(long *)(param_1 + 0x46) != 0) {
        FUN_1008af7d0(&local_240,1,uVar10,6,0x80);
        FUN_1008a8360(&local_130,&local_240);
      }
      if (*(long *)(param_1 + 0x24) != 0) {
        FUN_1008af7d0(&local_240,1,uVar18,7,0x80);
        FUN_1008a8360(&local_e8,&local_240);
      }
      if (*(long *)(param_1 + 0x26) != 0) {
        FUN_1008af7d0(&local_240,1,local_284,8,0x80);
        FUN_1008a8360(&local_d0,&local_240);
      }
      if (0 < *(long *)(param_1 + 0x54)) {
        FUN_1008af7d0(&local_240,1,local_250,9,0x80);
        FUN_1008a81e0(&local_118,&local_240);
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_1008af7d0(&local_240,1,local_264,10,0x80);
        FUN_1008a8360(local_100,&local_240);
      }
      if (param_1[0x36] != 0) {
        FUN_1008af7d0(&local_240,1,local_26c,0xb,0x80);
        FUN_1008a8360(&local_1f0,&local_240);
      }
      if (*(long *)(param_1 + 0x56) != 0) {
        FUN_1008af7d0(&local_240,1,uVar11,0xc,0x80);
        FUN_1008a8360(&local_b8,&local_240);
      }
      *param_2 = local_240;
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}


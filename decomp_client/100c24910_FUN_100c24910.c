
ulong FUN_100c24910(undefined8 param_1,undefined1 **param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  sbyte sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 **ppuVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 auStack_118 [16];
  long local_108;
  long local_100;
  uint local_f4;
  undefined1 *local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined1 **local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  long local_78;
  undefined8 local_70;
  undefined1 *local_68;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  puVar21 = auStack_118;
  puVar26 = auStack_118;
  puVar11 = auStack_118;
  puVar20 = auStack_118;
  lVar30 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar30;
  if (((long)*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    FUN_100c62ee0(3,0x7c,0x66,"bn_exp.c",0x28d);
    uVar10 = 0;
    puVar11 = auStack_118;
  }
  else {
    local_c0 = param_2;
    local_a0 = param_1;
    local_90 = (long)*(int *)(param_4 + 1);
    local_70 = param_3;
    uVar4 = FUN_100c26610(param_3);
    if (uVar4 == 0) {
      if (((*(int *)(param_4 + 1) != 1) || (*(long *)*param_4 != 1)) || (*(int *)(param_4 + 2) != 0)
         ) {
        if (lVar30 == local_38) {
          uVar10 = FUN_100c26db0(local_a0,1);
          return uVar10;
        }
        goto LAB_100c25d4e;
      }
      FUN_100c26db0(local_a0,0);
      uVar10 = 1;
    }
    else {
      FUN_100c27c60(param_5);
      lVar9 = param_6;
      if (param_6 == 0) {
        local_b8 = param_6;
        lVar9 = FUN_100c330d0();
        local_98 = 0;
        if (lVar9 != 0) {
          iVar5 = FUN_100c331e0(lVar9,param_4,param_5);
          local_98 = 0;
          local_c8 = (undefined1 *)0x0;
          local_b0 = 0;
          local_80 = (undefined1 *)0x0;
          puVar21 = auStack_118;
          param_6 = local_b8;
          if (iVar5 != 0) goto LAB_100c24a19;
          goto LAB_100c25cef;
        }
      }
      else {
LAB_100c24a19:
        uVar10 = local_90;
        iVar5 = 6;
        if ((((int)uVar4 < 0x3aa) && (iVar5 = 5, (int)uVar4 < 0x133)) &&
           (iVar5 = 4, (int)uVar4 < 0x5a)) {
          iVar5 = (0x16 < (int)uVar4) + 1 + (uint)(0x16 < (int)uVar4);
        }
        iVar19 = 5;
        if (0x400 < (int)uVar4 || iVar5 != 6) {
          iVar19 = iVar5;
        }
        local_a8 = CONCAT44(local_a8._4_4_,iVar19);
        sVar3 = 5;
        if (0x400 < (int)uVar4 || iVar5 != 6) {
          sVar3 = (sbyte)iVar5;
        }
        iVar22 = 1 << sVar3;
        local_d0 = CONCAT44(local_d0._4_4_,iVar22);
        iVar19 = (int)local_90;
        iVar5 = iVar19 * 2;
        if (iVar19 * 2 < iVar22) {
          iVar5 = iVar22;
        }
        lVar30 = (long)(iVar5 + (iVar19 << sVar3));
        local_b0 = lVar30 * 8;
        iVar5 = (int)local_b0 + 0x40;
        local_d8 = (ulong)uVar4;
        local_b8 = param_6;
        local_88 = param_5;
        local_78 = lVar9;
        if ((int)local_b0 < 0xc00) {
          puVar11 = auStack_118 + -((long)iVar5 + 0xfU & 0xfffffffffffffff0);
          puVar21 = puVar11;
LAB_100c24b44:
          puVar20 = puVar21;
          local_e8 = (ulong)puVar11 & 0x3f;
          lVar9 = 0x40 - local_e8;
          local_80 = puVar11 + lVar9;
          *(undefined8 *)(puVar20 + -8) = 0x100c24b73;
          ___bzero(puVar11 + lVar9,(lVar30 << 0x23) >> 0x20);
          local_c8 = (undefined1 *)0x0;
          if (0xbff < (int)local_b0) {
            local_c8 = puVar11;
          }
          local_e0 = (long)(int)local_d0;
          local_50 = puVar11 + lVar9 + uVar10 * local_e0 * 8;
          local_68 = local_50 + uVar10 * 8;
          local_60 = 0;
          local_48 = 0;
          local_58 = 0;
          local_40 = 0;
          local_54 = 2;
          local_3c = 2;
          local_5c = iVar19;
          local_44 = iVar19;
          *(undefined8 *)(puVar20 + -8) = 0x100c24bee;
          uVar12 = FUN_100c26510();
          lVar9 = local_78;
          param_5 = local_88;
          lVar30 = local_78 + 8;
          *(undefined8 *)(puVar20 + -8) = 0x100c24c0c;
          iVar5 = FUN_100c32ab0(&local_50,uVar12,lVar30,lVar9,param_5);
          ppuVar16 = local_c0;
          puVar21 = puVar20;
          if (iVar5 == 0) {
LAB_100c25570:
            local_98 = 0;
          }
          else {
            if (*(int *)(local_c0 + 2) == 0) {
              *(undefined8 *)(puVar20 + -8) = 0x100c24c2f;
              iVar5 = FUN_100c27100(ppuVar16,param_4);
              if (-1 < iVar5) goto LAB_100c24c36;
            }
            else {
LAB_100c24c36:
              *(undefined8 *)(puVar20 + -8) = 0x100c24c47;
              iVar5 = FUN_100c23170(0,&local_68,ppuVar16,param_4,param_5);
              if (iVar5 == 0) goto LAB_100c25570;
              ppuVar16 = &local_68;
            }
            lVar9 = local_78;
            *(undefined8 *)(puVar20 + -8) = 0x100c24ca3;
            iVar5 = FUN_100c32ab0(&local_68,ppuVar16,lVar30,lVar9,param_5);
            lVar30 = local_78;
            uVar12 = local_88;
            uVar10 = local_90;
            if (iVar5 == 0) goto LAB_100c25570;
            uVar4 = (uint)local_90;
            if ((1 < (int)uVar4) && ((uint)local_a8 == 5)) {
              uVar28 = *(ulong *)(local_78 + 0x20);
              if ((int)local_60 < (int)uVar4) {
                puVar11 = local_68 + (long)(int)local_60 * 8;
                uVar17 = (uVar4 - 1) - local_60;
                *(undefined8 *)(puVar20 + -8) = 0x100c24cf6;
                ___bzero(puVar11,(ulong)uVar17 * 8 + 8);
              }
              uVar32 = lVar30 + 0x50;
              if ((int)local_48 < (int)uVar4) {
                puVar11 = local_50 + (long)(int)local_48 * 8;
                uVar4 = (uVar4 - 1) - local_48;
                *(undefined8 *)(puVar20 + -8) = 0x100c24d22;
                ___bzero(puVar11,(ulong)uVar4 * 8 + 8);
              }
              puVar26 = local_50;
              puVar11 = local_80;
              uVar31 = 0;
              *(undefined8 *)(puVar20 + -8) = 0x100c24d3d;
              _bn_scatter5(puVar26,uVar10,puVar11,0);
              puVar26 = local_68;
              lVar30 = (long)(int)local_60;
              *(undefined8 *)(puVar20 + -8) = 0x100c24d52;
              _bn_scatter5(puVar26,lVar30,puVar11,1);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined8 *)(puVar20 + -8) = 0x100c24d6b;
              _bn_mul_mont(puVar2,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24d7f;
              _bn_scatter5(puVar26,uVar10,puVar11,2);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24d97;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24dab;
              _bn_scatter5(puVar26,uVar10,puVar11,4);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24dc3;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24dd7;
              _bn_scatter5(puVar26,uVar10,puVar11,8);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24def;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e03;
              _bn_scatter5(puVar26,uVar10,puVar11,0x10);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 2;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c24e27;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e3f;
              _bn_scatter5(puVar26,uVar10,puVar11,3);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e57;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e6b;
              _bn_scatter5(puVar26,uVar10,puVar11,6);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e83;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24e97;
              _bn_scatter5(puVar26,uVar10,puVar11,0xc);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24eaf;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24ec3;
              _bn_scatter5(puVar26,uVar10,puVar11,0x18);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 4;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c24ee7;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24eff;
              _bn_scatter5(puVar26,uVar10,puVar11,5);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24f17;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24f2b;
              _bn_scatter5(puVar26,uVar10,puVar11,10);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24f43;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24f57;
              _bn_scatter5(puVar26,uVar10,puVar11,0x14);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 6;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c24f7b;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24f93;
              _bn_scatter5(puVar26,uVar10,puVar11,7);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24fab;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24fbf;
              _bn_scatter5(puVar26,uVar10,puVar11,0xe);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24fd7;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c24feb;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1c);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 8;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c2500f;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25027;
              _bn_scatter5(puVar26,uVar10,puVar11,9);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2503f;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25053;
              _bn_scatter5(puVar26,uVar10,puVar11,0x12);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 10;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25077;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2508f;
              _bn_scatter5(puVar26,uVar10,puVar11,0xb);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c250a7;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c250bb;
              _bn_scatter5(puVar26,uVar10,puVar11,0x16);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0xc;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c250df;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c250f7;
              _bn_scatter5(puVar26,uVar10,puVar11,0xd);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2510f;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25123;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1a);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0xe;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25147;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2515f;
              _bn_scatter5(puVar26,uVar10,puVar11,0xf);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25177;
              _bn_mul_mont(puVar26,puVar26,puVar26,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2518b;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1e);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x10;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c251af;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c251c7;
              _bn_scatter5(puVar26,uVar10,puVar11,0x11);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x12;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c251eb;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25203;
              _bn_scatter5(puVar26,uVar10,puVar11,0x13);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x14;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25227;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2523f;
              _bn_scatter5(puVar26,uVar10,puVar11,0x15);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x16;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25263;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2527b;
              _bn_scatter5(puVar26,uVar10,puVar11,0x17);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x18;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c2529f;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c252b7;
              _bn_scatter5(puVar26,uVar10,puVar11,0x19);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x1a;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c252db;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c252f3;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1b);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x1c;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25317;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c2532f;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1d);
              puVar2 = local_50;
              puVar26 = local_68;
              *(undefined4 *)(puVar20 + -0x10) = 0x1e;
              local_a8 = uVar28;
              local_98 = uVar32;
              *(undefined8 *)(puVar20 + -0x18) = 0x100c25361;
              _bn_mul_mont_gather5(puVar2,puVar26,puVar11,uVar28,uVar32,uVar10 & 0xffffffff);
              puVar26 = local_50;
              *(undefined8 *)(puVar20 + -8) = 0x100c25379;
              _bn_scatter5(puVar26,uVar10,puVar11,0x1f);
              uVar12 = local_70;
              iVar5 = (int)local_d8 + -1;
              uVar4 = iVar5 % 5;
              if (-1 < (int)uVar4) {
                local_d8 = (ulong)((int)local_d8 - 3);
                uVar17 = 0xffffffff;
                if (-2 < (int)~uVar4) {
                  uVar17 = ~uVar4;
                }
                local_c0 = (undefined1 **)CONCAT44(local_c0._4_4_,uVar17);
                iVar19 = uVar4 + 1;
                do {
                  *(undefined8 *)(puVar20 + -8) = 0x100c253db;
                  iVar22 = FUN_100c27360(uVar12,iVar5);
                  uVar17 = iVar22 + (int)uVar31 * 2;
                  uVar31 = (ulong)uVar17;
                  iVar5 = iVar5 + -1;
                  iVar19 = iVar19 + -1;
                } while (0 < iVar19);
                iVar5 = ((int)local_d8 - uVar4) - (int)local_c0;
                uVar31 = (ulong)(int)uVar17;
              }
              puVar26 = local_50;
              puVar11 = local_80;
              uVar32 = local_90;
              *(undefined8 *)(puVar20 + -8) = 0x100c25418;
              _bn_gather5(puVar26,uVar32,puVar11,uVar31);
              uVar28 = local_98;
              uVar10 = local_a8;
              if (-1 < iVar5) {
                iVar5 = iVar5 + -4;
                do {
                  uVar12 = local_70;
                  *(undefined8 *)(puVar20 + -8) = 0x100c2544e;
                  iVar19 = FUN_100c27360(uVar12,iVar5 + 4);
                  uVar12 = local_70;
                  *(undefined8 *)(puVar20 + -8) = 0x100c2545e;
                  iVar22 = FUN_100c27360(uVar12,iVar5 + 3);
                  uVar12 = local_70;
                  *(undefined8 *)(puVar20 + -8) = 0x100c2546f;
                  iVar6 = FUN_100c27360(uVar12,iVar5 + 2);
                  uVar12 = local_70;
                  *(undefined8 *)(puVar20 + -8) = 0x100c25480;
                  iVar7 = FUN_100c27360(uVar12,iVar5 + 1);
                  uVar12 = local_70;
                  *(undefined8 *)(puVar20 + -8) = 0x100c2548f;
                  iVar8 = FUN_100c27360(uVar12,iVar5);
                  puVar11 = local_50;
                  *(undefined8 *)(puVar20 + -8) = 0x100c254aa;
                  _bn_mul_mont(puVar11,puVar11,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  puVar11 = local_50;
                  *(undefined8 *)(puVar20 + -8) = 0x100c254c2;
                  _bn_mul_mont(puVar11,puVar11,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  puVar11 = local_50;
                  *(undefined8 *)(puVar20 + -8) = 0x100c254da;
                  _bn_mul_mont(puVar11,puVar11,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  puVar11 = local_50;
                  *(undefined8 *)(puVar20 + -8) = 0x100c254f2;
                  _bn_mul_mont(puVar11,puVar11,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  puVar11 = local_50;
                  *(undefined8 *)(puVar20 + -8) = 0x100c2550a;
                  _bn_mul_mont(puVar11,puVar11,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  puVar26 = local_50;
                  *(int *)(puVar20 + -0x10) =
                       iVar8 + (iVar7 + (iVar6 + (iVar22 + iVar19 * 2) * 2) * 2) * 2;
                  puVar11 = local_80;
                  *(undefined8 *)(puVar20 + -0x18) = 0x100c2552a;
                  _bn_mul_mont_gather5(puVar26,puVar26,puVar11,uVar10,uVar28,uVar32 & 0xffffffff);
                  bVar1 = 0 < iVar5;
                  iVar5 = iVar5 + -5;
                } while (bVar1);
              }
              plVar13 = (long *)(local_50 + uVar32 * 8 + -8);
              do {
                uVar4 = (uint)uVar32;
                local_48 = uVar4;
                if (*plVar13 != 0) break;
                plVar13 = plVar13 + -1;
                local_48 = uVar4 - 1;
                uVar32 = (ulong)local_48;
              } while (1 < (int)uVar4);
LAB_100c25bc4:
              lVar9 = local_78;
              param_5 = local_88;
              uVar12 = local_a0;
              *(undefined8 *)(puVar20 + -8) = 0x100c25be2;
              iVar5 = FUN_100c33050(uVar12,&local_50,lVar9,param_5);
              local_98 = (ulong)(iVar5 != 0);
              lVar30 = *(long *)PTR____stack_chk_guard_1021e1840;
              goto LAB_100c25cef;
            }
            local_98 = 0;
            uVar17 = uVar4;
            if ((int)local_48 <= (int)uVar4) {
              uVar17 = local_48;
            }
            if (0 < (int)uVar17) {
              uVar27 = ~uVar4;
              uVar29 = ~local_48;
              uVar17 = uVar29;
              if ((int)uVar29 <= (int)uVar27) {
                uVar17 = uVar27;
              }
              lVar9 = 0;
              lVar18 = 0;
              if ((~uVar17 & 3) != 0) {
                uVar23 = uVar27;
                if ((int)uVar27 <= (int)uVar29) {
                  uVar23 = uVar29;
                }
                lVar9 = 0;
                lVar18 = 0;
                do {
                  *(undefined8 *)(puVar11 + lVar9 * 8 + (0x40 - local_e8)) =
                       *(undefined8 *)(local_50 + lVar18 * 8);
                  lVar18 = lVar18 + 1;
                  lVar9 = lVar9 + local_e0;
                } while ((~uVar23 & 3) != (uint)lVar18);
              }
              if (2 < -uVar17 - 2) {
                lVar15 = lVar9 * 8;
                lVar24 = (long)puVar11 - local_e8;
                if ((int)uVar29 <= (int)uVar27) {
                  uVar29 = uVar27;
                }
                iVar5 = (2 - uVar29) - ((int)lVar18 + 3);
                puVar14 = (undefined8 *)(local_50 + lVar18 * 8 + 0x18);
                do {
                  *(undefined8 *)(lVar15 + 0x40 + lVar24) = puVar14[-3];
                  *(undefined8 *)(lVar15 + 0x40 + local_e0 * 8 + lVar24) = puVar14[-2];
                  *(undefined8 *)(local_e0 * 0x10 + 0x40 + lVar9 * 8 + lVar24) = puVar14[-1];
                  *(undefined8 *)(lVar15 + 0x40 + local_e0 * 0x18 + lVar24) = *puVar14;
                  lVar24 = lVar24 + local_e0 * 0x20;
                  puVar14 = puVar14 + 4;
                  iVar5 = iVar5 + -4;
                } while (iVar5 != 0);
              }
            }
            uVar17 = uVar4;
            if ((int)local_60 <= (int)uVar4) {
              uVar17 = local_60;
            }
            if (0 < (int)uVar17) {
              uVar4 = ~uVar4;
              uVar17 = ~local_60;
              uVar29 = uVar17;
              if ((int)uVar17 <= (int)uVar4) {
                uVar29 = uVar4;
              }
              lVar18 = 0;
              lVar9 = 1;
              if ((~uVar29 & 3) != 0) {
                uVar27 = uVar4;
                if ((int)uVar4 <= (int)uVar17) {
                  uVar27 = uVar17;
                }
                lVar9 = 0;
                lVar18 = 0;
                do {
                  *(undefined8 *)(puVar11 + lVar9 * 8 + (0x48 - local_e8)) =
                       *(undefined8 *)(local_68 + lVar18 * 8);
                  lVar18 = lVar18 + 1;
                  lVar9 = lVar9 + local_e0;
                } while ((~uVar27 & 3) != (uint)lVar18);
                lVar9 = lVar9 + 1;
              }
              if (2 < -uVar29 - 2) {
                lVar15 = lVar9 * 8;
                lVar24 = (long)puVar11 - local_e8;
                if ((int)uVar17 <= (int)uVar4) {
                  uVar17 = uVar4;
                }
                iVar5 = (2 - uVar17) - ((int)lVar18 + 3);
                puVar14 = (undefined8 *)(local_68 + lVar18 * 8 + 0x18);
                do {
                  *(undefined8 *)(lVar15 + 0x40 + lVar24) = puVar14[-3];
                  *(undefined8 *)(lVar15 + 0x40 + local_e0 * 8 + lVar24) = puVar14[-2];
                  *(undefined8 *)(local_e0 * 0x10 + 0x40 + lVar9 * 8 + lVar24) = puVar14[-1];
                  *(undefined8 *)(lVar15 + 0x40 + local_e0 * 0x18 + lVar24) = *puVar14;
                  lVar24 = lVar24 + local_e0 * 0x20;
                  puVar14 = puVar14 + 4;
                  iVar5 = iVar5 + -4;
                } while (iVar5 != 0);
              }
            }
            local_f0 = puVar11;
            if ((uint)local_a8 < 2) {
LAB_100c25b31:
              uVar12 = local_70;
              iVar5 = (int)local_d8 + -1;
              uVar4 = iVar5 % (int)(uint)local_a8;
              local_98 = 0;
              if ((int)uVar4 < 0) {
                iVar19 = 0;
              }
              else {
                local_d8 = (ulong)((int)local_d8 - 3);
                uVar17 = 0xffffffff;
                if (-2 < (int)~uVar4) {
                  uVar17 = ~uVar4;
                }
                local_c0 = (undefined1 **)CONCAT44(local_c0._4_4_,uVar17);
                iVar22 = uVar4 + 1;
                iVar19 = 0;
                do {
                  *(undefined8 *)(puVar20 + -8) = 0x100c25b9b;
                  iVar6 = FUN_100c27360(uVar12,iVar5);
                  iVar19 = iVar6 + iVar19 * 2;
                  iVar5 = iVar5 + -1;
                  iVar22 = iVar22 + -1;
                } while (0 < iVar22);
                iVar5 = ((int)local_d8 - uVar4) - (int)local_c0;
              }
              puVar11 = local_80;
              uVar10 = local_90;
              uVar28 = local_a8 & 0xffffffff;
              *(undefined8 *)(puVar20 + -8) = 0x100c25c26;
              iVar19 = FUN_100c25d60(&local_50,uVar10,puVar11,iVar19,uVar28);
              if (iVar19 != 0) {
                do {
                  local_98 = 0;
                  iVar22 = 0;
                  iVar19 = 0;
                  if (iVar5 < 0) goto LAB_100c25bc4;
                  do {
                    lVar30 = local_78;
                    uVar12 = local_88;
                    *(undefined8 *)(puVar20 + -8) = 0x100c25c76;
                    iVar6 = FUN_100c32ab0(&local_50,&local_50,&local_50,lVar30,uVar12);
                    uVar12 = local_70;
                    if (iVar6 == 0) goto LAB_100c25cd6;
                    *(undefined8 *)(puVar20 + -8) = 0x100c25c86;
                    iVar6 = FUN_100c27360(uVar12,iVar5);
                    puVar11 = local_80;
                    uVar10 = local_90;
                    iVar19 = iVar6 + iVar19 * 2;
                    iVar22 = iVar22 + 1;
                    iVar5 = iVar5 + -1;
                  } while (iVar22 < (int)(uint)local_a8);
                  uVar28 = local_a8 & 0xffffffff;
                  *(undefined8 *)(puVar20 + -8) = 0x100c25cb4;
                  iVar19 = FUN_100c25d60(&local_68,uVar10,puVar11,iVar19,uVar28);
                  lVar30 = local_78;
                  uVar12 = local_88;
                  if (iVar19 == 0) break;
                  *(undefined8 *)(puVar20 + -8) = 0x100c25cce;
                  iVar19 = FUN_100c32ab0(&local_50,&local_50,&local_68,lVar30,uVar12);
                } while (iVar19 != 0);
              }
              goto LAB_100c25cd6;
            }
            *(undefined8 *)(puVar20 + -8) = 0x100c257ff;
            iVar5 = FUN_100c32ab0(&local_50,&local_68,&local_68,lVar30,uVar12);
            lVar30 = local_e0;
            puVar11 = local_f0;
            param_5 = uVar12;
            if (iVar5 != 0) {
              uVar17 = (uint)local_90;
              uVar4 = uVar17;
              if ((int)local_48 <= (int)uVar17) {
                uVar4 = local_48;
              }
              if (0 < (int)uVar4) {
                uVar27 = ~uVar17;
                uVar29 = ~local_48;
                uVar4 = uVar29;
                if ((int)uVar29 <= (int)uVar27) {
                  uVar4 = uVar27;
                }
                lVar18 = 0;
                lVar9 = 2;
                if ((~uVar4 & 3) != 0) {
                  uVar23 = uVar27;
                  if ((int)uVar27 <= (int)uVar29) {
                    uVar23 = uVar29;
                  }
                  lVar9 = 0;
                  lVar18 = 0;
                  do {
                    *(undefined8 *)(local_f0 + lVar9 * 8 + (0x50 - local_e8)) =
                         *(undefined8 *)(local_50 + lVar18 * 8);
                    lVar18 = lVar18 + 1;
                    lVar9 = lVar9 + local_e0;
                  } while ((~uVar23 & 3) != (uint)lVar18);
                  lVar9 = lVar9 + 2;
                }
                if (2 < -uVar4 - 2) {
                  lVar15 = lVar9 * 8;
                  lVar24 = (long)local_f0 - local_e8;
                  if ((int)uVar29 <= (int)uVar27) {
                    uVar29 = uVar27;
                  }
                  iVar5 = (2 - uVar29) - ((int)lVar18 + 3);
                  puVar14 = (undefined8 *)(local_50 + lVar18 * 8 + 0x18);
                  do {
                    *(undefined8 *)(lVar15 + 0x40 + lVar24) = puVar14[-3];
                    *(undefined8 *)(lVar15 + 0x40 + local_e0 * 8 + lVar24) = puVar14[-2];
                    *(undefined8 *)(local_e0 * 0x10 + 0x40 + lVar9 * 8 + lVar24) = puVar14[-1];
                    *(undefined8 *)(lVar15 + 0x40 + local_e0 * 0x18 + lVar24) = *puVar14;
                    lVar24 = lVar24 + local_e0 * 0x20;
                    puVar14 = puVar14 + 4;
                    iVar5 = iVar5 + -4;
                  } while (iVar5 != 0);
                }
              }
              if (3 < (int)local_d0) {
                local_f4 = ~uVar17;
                lVar18 = 0x58 - local_e8;
                local_100 = local_e0 * 0x18 + 0x40;
                local_f0 = local_f0 + -local_e8;
                lVar9 = local_e0 * 0x20;
                local_e8 = local_e0 * 0x10 + 0x40;
                local_108 = local_e0 * 8 + 0x40;
                local_c0 = (undefined1 **)0x3;
                local_98 = 0;
                local_d0 = 0;
                do {
                  lVar15 = local_78;
                  param_5 = local_88;
                  *(undefined8 *)(puVar20 + -8) = 0x100c259ea;
                  iVar5 = FUN_100c32ab0(&local_50,&local_68,&local_50,lVar15,param_5);
                  if (iVar5 == 0) goto LAB_100c25579;
                  uVar4 = (uint)local_90;
                  if ((int)local_48 <= (int)(uint)local_90) {
                    uVar4 = local_48;
                  }
                  if (0 < (int)uVar4) {
                    uVar17 = ~local_48;
                    uVar4 = local_f4;
                    if ((int)local_f4 <= (int)uVar17) {
                      uVar4 = uVar17;
                    }
                    lVar15 = 0;
                    ppuVar16 = local_c0;
                    if ((~uVar4 & 3) != 0) {
                      uVar29 = local_f4;
                      if ((int)local_f4 <= (int)uVar17) {
                        uVar29 = uVar17;
                      }
                      lVar15 = 0;
                      lVar24 = local_d0;
                      do {
                        lVar25 = lVar24;
                        *(undefined8 *)(puVar11 + lVar25 * 8 + lVar18) =
                             *(undefined8 *)(local_50 + lVar15 * 8);
                        lVar15 = lVar15 + 1;
                        lVar24 = lVar25 + lVar30;
                      } while ((~uVar29 & 3) != (uint)lVar15);
                      ppuVar16 = (undefined1 **)(lVar25 + 3 + lVar30);
                    }
                    if (2 < -uVar4 - 2) {
                      if ((int)uVar17 < (int)local_f4) {
                        uVar17 = local_f4;
                      }
                      iVar5 = (2 - uVar17) - ((int)lVar15 + 3);
                      puVar14 = (undefined8 *)(local_50 + lVar15 * 8 + 0x18);
                      puVar26 = local_f0;
                      do {
                        *(undefined8 *)(puVar26 + (long)ppuVar16 * 8 + 0x40) = puVar14[-3];
                        *(undefined8 *)(puVar26 + local_108 + (long)ppuVar16 * 8) = puVar14[-2];
                        *(undefined8 *)(puVar26 + local_e8 + (long)ppuVar16 * 8) = puVar14[-1];
                        *(undefined8 *)(puVar26 + local_100 + (long)ppuVar16 * 8) = *puVar14;
                        puVar26 = puVar26 + lVar9;
                        puVar14 = puVar14 + 4;
                        iVar5 = iVar5 + -4;
                      } while (iVar5 != 0);
                    }
                  }
                  local_c0 = (undefined1 **)((long)local_c0 + 1);
                  local_d0 = local_d0 + 1;
                } while ((long)local_c0 < lVar30);
              }
              goto LAB_100c25b31;
            }
          }
LAB_100c25579:
          lVar30 = *(long *)PTR____stack_chk_guard_1021e1840;
          lVar9 = local_78;
        }
        else {
          puVar11 = (undefined1 *)FUN_100bf3540(iVar5,"bn_exp.c",0x2c5);
          puVar21 = auStack_118;
          if (puVar11 != (undefined1 *)0x0) goto LAB_100c24b44;
          local_98 = 0;
          local_c8 = (undefined1 *)0x0;
          local_80 = (undefined1 *)0x0;
LAB_100c25cd6:
          lVar30 = *(long *)PTR____stack_chk_guard_1021e1840;
          puVar21 = puVar20;
          param_5 = local_88;
          lVar9 = local_78;
        }
LAB_100c25cef:
        if ((local_b8 == 0) && (lVar9 != 0)) {
          *(undefined8 *)(puVar21 + -8) = 0x100c25d01;
          FUN_100c33190(lVar9);
        }
        puVar11 = local_80;
        if (local_80 != (undefined1 *)0x0) {
          iVar5 = (int)local_b0;
          *(undefined8 *)(puVar21 + -8) = 0x100c25d19;
          _OPENSSL_cleanse(puVar11,(long)iVar5);
          if (local_c8 != (undefined1 *)0x0) {
            *(undefined8 *)(puVar21 + -8) = 0x100c25d2a;
            FUN_100bf3910();
          }
        }
      }
      *(undefined8 *)(puVar21 + -8) = 0x100c25d32;
      FUN_100c27d40(param_5);
      uVar10 = local_98;
      puVar11 = puVar21;
    }
  }
  puVar26 = puVar11;
  if (lVar30 == local_38) {
    return uVar10;
  }
LAB_100c25d4e:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar26 + -8) = &UNK_100c25d53;
  ___stack_chk_fail();
}


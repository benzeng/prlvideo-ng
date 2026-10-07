
int * FUN_100819430(long *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  time_t tVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  byte *local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  byte *local_160;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  byte *local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  byte *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  byte *local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  byte *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  byte *local_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  byte *local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  byte *local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  byte *local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  byte *local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  byte *local_c0;
  undefined4 local_b4;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  uint *local_78;
  uint local_70 [2];
  byte *local_68;
  undefined4 *local_58;
  undefined4 local_50 [2];
  long local_48;
  long local_38;
  
  pbVar11 = (byte *)*param_2;
  local_b4 = 0x3a;
  local_90 = pbVar11;
  local_88 = param_2;
  local_38 = param_3;
  if ((param_1 == (long *)0x0) || (piVar5 = (int *)*param_1, piVar5 == (int *)0x0)) {
    piVar5 = (int *)FUN_100812f50();
    if (piVar5 == (int *)0x0) {
      local_80 = 0x184;
      uVar10 = 0x184;
      piVar5 = (int *)0x0;
      goto LAB_10081aa90;
    }
    pbVar11 = (byte *)*param_2;
  }
  local_58 = local_50;
  local_78 = local_70;
  local_98 = (byte *)0x0;
  if (param_3 != 0) {
    local_98 = pbVar11 + param_3;
  }
  local_c0 = pbVar11;
  iVar3 = FUN_1008afa40(&local_c0,&local_38);
  if (iVar3 == 0) {
    local_80 = 0x18a;
    uVar10 = 0x18a;
    goto LAB_10081aa90;
  }
  local_48 = 0;
  local_50[0] = 0;
  local_90 = local_c0;
  lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_a0);
  if (lVar6 == 0) {
    local_80 = 0x18e;
    uVar10 = 0x18e;
    goto LAB_10081aa90;
  }
  local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
  if (local_48 != 0) {
    FUN_10081e1a0();
    local_48 = 0;
    local_50[0] = 0;
  }
  local_90 = local_c0;
  lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_a0);
  if (lVar6 == 0) {
    local_80 = 0x196;
    uVar10 = 0x196;
    goto LAB_10081aa90;
  }
  local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
  iVar3 = FUN_10089b410(local_58);
  *piVar5 = iVar3;
  if (local_48 != 0) {
    FUN_10081e1a0();
    local_48 = 0;
    local_50[0] = 0;
  }
  local_68 = (byte *)0x0;
  local_70[0] = 0;
  local_90 = local_c0;
  lVar6 = FUN_1008a8340(&local_78,&local_c0,local_a0);
  if (lVar6 == 0) {
    local_80 = 0x1a1;
    uVar10 = 0x1a1;
    goto LAB_10081aa90;
  }
  local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
  if (iVar3 == 2) {
    if (local_70[0] != 3) {
      local_b4 = 0x89;
      local_80 = 0x1a5;
      uVar10 = 0x1a5;
      goto LAB_10081aa90;
    }
    uVar9 = (ulong)local_68[1] << 8 | (ulong)*local_68 << 0x10 | (ulong)local_68[2] | 0x2000000;
  }
  else {
    if (((iVar3 >> 8 != 3) && (iVar3 != 0x100)) && (iVar3 >> 8 != 0xfe)) {
      local_b4 = 0xfe;
      local_80 = 0x1b7;
      uVar10 = 0x1b7;
      goto LAB_10081aa90;
    }
    if (local_70[0] != 2) {
      local_b4 = 0x89;
      local_80 = 0x1b0;
      uVar10 = 0x1b0;
      goto LAB_10081aa90;
    }
    uVar9 = (ulong)CONCAT11(*local_68,local_68[1]) | 0x3000000;
  }
  piVar5[0x38] = 0;
  piVar5[0x39] = 0;
  *(ulong *)(piVar5 + 0x3a) = uVar9;
  local_90 = local_c0;
  lVar6 = FUN_1008a8340(&local_78,&local_c0);
  if (lVar6 == 0) {
    local_80 = 0x1be;
    uVar10 = 0x1be;
    goto LAB_10081aa90;
  }
  local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
  if (0x20 < (int)local_70[0]) {
    local_70[0] = 0x20;
  }
  piVar5[0x11] = local_70[0];
  _memcpy(piVar5 + 0x12,local_68,(long)(int)local_70[0]);
  local_90 = local_c0;
  lVar6 = FUN_1008a8340(&local_78,&local_c0,local_a0);
  if (lVar6 == 0) {
    local_80 = 0x1cd;
    uVar10 = 0x1cd;
    goto LAB_10081aa90;
  }
  local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
  uVar4 = 0x30;
  if ((int)local_70[0] < 0x31) {
    uVar4 = local_70[0];
  }
  piVar5[4] = uVar4;
  _memcpy(piVar5 + 5,local_68,(long)(int)uVar4);
  local_70[0] = 0;
  if ((local_a0 == (byte *)0x0) || (bVar2 = *local_c0, (bVar2 & 0xdf) != 0x80)) {
LAB_1008198c5:
    piVar5[1] = local_70[0];
    uVar4 = local_70[0];
  }
  else {
    *local_c0 = bVar2 & 0x20 | 4;
    local_90 = local_c0;
    lVar6 = FUN_1008a8340(&local_78,&local_c0,local_a0);
    if (lVar6 == 0) {
      local_80 = 0x1e7;
      *local_90 = bVar2;
      uVar10 = 0x1e7;
      goto LAB_10081aa90;
    }
    local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
    *local_90 = bVar2;
    if ((int)local_70[0] < 9) goto LAB_1008198c5;
    piVar5[1] = 8;
    uVar4 = 8;
  }
  _memcpy(piVar5 + 2,local_68,(ulong)uVar4);
  if (local_68 != (byte *)0x0) {
    FUN_10081e1a0();
  }
  local_50[0] = 0;
  if ((local_a0 != (byte *)0x0) && (*local_c0 == 0xa1)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_d0,local_c4,local_c8);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_d0 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_d0);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_d0 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0();
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081a2cc;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        goto LAB_100819a0b;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081a2cc:
    local_80 = 0x1f1;
    uVar10 = 0x1f1;
    goto LAB_10081aa90;
  }
LAB_100819a0b:
  if (local_48 == 0) {
    tVar8 = _time((time_t *)0x0);
    *(time_t *)(piVar5 + 0x34) = tVar8;
  }
  else {
    uVar7 = FUN_10089b410(local_58);
    *(undefined8 *)(piVar5 + 0x34) = uVar7;
    FUN_10081e1a0(local_48);
    local_48 = 0;
  }
  local_50[0] = 0;
  if ((local_a0 != (byte *)0x0) && (*local_c0 == 0xa2)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_e0,local_d4,local_d8);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_e0 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_e0);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_e0 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081a39a;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        goto LAB_100819b46;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081a39a:
    local_80 = 0x1fb;
    uVar10 = 0x1fb;
    goto LAB_10081aa90;
  }
LAB_100819b46:
  if (local_48 == 0) {
    piVar5[0x32] = 3;
    piVar5[0x33] = 0;
  }
  else {
    uVar7 = FUN_10089b410(local_58);
    *(undefined8 *)(piVar5 + 0x32) = uVar7;
    FUN_10081e1a0(local_48);
    local_48 = 0;
    local_50[0] = 0;
  }
  piVar1 = piVar5 + 0x2c;
  if (*(long *)(piVar5 + 0x2c) != 0) {
    FUN_1008a17f0();
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (local_a0 == (byte *)0x0) {
    local_70[0] = 0;
    local_68 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
LAB_100819c3a:
    piVar5[0x1a] = 0;
  }
  else {
    if (*local_c0 == 0xa3) {
      local_90 = local_c0;
      uVar4 = FUN_1008af630(&local_c0,&local_f0,local_e4,local_e8);
      if ((uVar4 & 0x80) == 0) {
        if (uVar4 == 0x21) {
          local_f0 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
        }
        lVar6 = FUN_1008a1790(piVar1,&local_c0,local_f0);
        if (lVar6 != 0) {
          if (uVar4 == 0x21) {
            local_f0 = local_90 + ((long)local_a0 - (long)local_c0);
            iVar3 = FUN_1008af5f0(&local_c0);
            if (iVar3 == 0) {
              local_b4 = 0x3f;
              goto LAB_10081a468;
            }
          }
          pbVar11 = (byte *)0x0;
          local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
          local_70[0] = 0;
          local_68 = (byte *)0x0;
          if (local_a0 == (byte *)0x0) goto LAB_100819c3a;
          goto LAB_100819c56;
        }
      }
      else {
        local_b4 = 0x3b;
      }
LAB_10081a468:
      local_80 = 0x208;
      uVar10 = 0x208;
      goto LAB_10081aa90;
    }
LAB_100819c56:
    local_68 = (byte *)0x0;
    local_70[0] = 0;
    if (*local_c0 == 0xa4) {
      local_90 = local_c0;
      uVar4 = FUN_1008af630(&local_c0,&local_100,local_f4,local_f8,local_a0);
      if ((uVar4 & 0x80) == 0) {
        if (uVar4 == 0x21) {
          local_100 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
        }
        lVar6 = FUN_1008a8340(&local_78,&local_c0,local_100);
        if (lVar6 != 0) {
          if (uVar4 == 0x21) {
            local_100 = local_90 + ((long)local_a0 - (long)local_c0);
            iVar3 = FUN_1008af5f0(&local_c0);
            if (iVar3 == 0) {
              local_b4 = 0x3f;
              goto LAB_10081a82a;
            }
          }
          pbVar11 = local_90 + ((long)local_a0 - (long)local_c0);
          local_a0 = pbVar11;
          if (local_68 == (byte *)0x0) goto LAB_100819c3a;
          if (0x20 < (long)(int)local_70[0]) {
            local_b4 = 0x10f;
            local_80 = 0x211;
            uVar10 = 0x211;
            goto LAB_10081aa90;
          }
          piVar5[0x1a] = local_70[0];
          _memcpy(piVar5 + 0x1b,local_68,(long)(int)local_70[0]);
          FUN_10081e1a0(local_68);
          local_68 = (byte *)0x0;
          local_70[0] = 0;
          pbVar11 = local_a0;
          goto LAB_100819cd7;
        }
      }
      else {
        local_b4 = 0x3b;
      }
LAB_10081a82a:
      local_80 = 0x20c;
      uVar10 = 0x20c;
      goto LAB_10081aa90;
    }
    piVar5[0x1a] = 0;
    pbVar11 = local_a0;
  }
LAB_100819cd7:
  local_50[0] = 0;
  pbVar12 = (byte *)0x0;
  if ((pbVar11 != (byte *)0x0) && (pbVar12 = pbVar11, *local_c0 == 0xa5)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_110,local_104,local_108);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_110 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_110);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_110 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081a80e;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        pbVar12 = local_a0;
        goto LAB_100819e8b;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081a80e:
    local_80 = 0x21e;
    uVar10 = 0x21e;
    goto LAB_10081aa90;
  }
LAB_100819e8b:
  if (local_48 == 0) {
    piVar5[0x2e] = 0;
    piVar5[0x2f] = 0;
  }
  else {
    uVar7 = FUN_10089b410(local_58);
    *(undefined8 *)(piVar5 + 0x2e) = uVar7;
    FUN_10081e1a0(local_48);
    local_48 = 0;
    local_50[0] = 0;
    pbVar12 = local_a0;
  }
  local_70[0] = 0;
  local_68 = (byte *)0x0;
  pbVar11 = (byte *)0x0;
  if ((pbVar12 != (byte *)0x0) && (pbVar11 = pbVar12, *local_c0 == 0xa6)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_120,local_114,local_118,pbVar12);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_120 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a8340(&local_78,&local_c0,local_120);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_120 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081a8fb;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        pbVar11 = local_a0;
        if (local_68 == (byte *)0x0) goto LAB_100819f5e;
        uVar7 = FUN_10087d0e0(local_68,(long)(int)local_70[0]);
        *(undefined8 *)(piVar5 + 0x46) = uVar7;
        FUN_10081e1a0(local_68);
        pbVar11 = local_a0;
        goto LAB_100819f69;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081a8fb:
    local_80 = 0x22a;
    uVar10 = 0x22a;
    goto LAB_10081aa90;
  }
LAB_100819f5e:
  piVar5[0x46] = 0;
  piVar5[0x47] = 0;
LAB_100819f69:
  local_70[0] = 0;
  local_68 = (byte *)0x0;
  pbVar12 = (byte *)0x0;
  if ((pbVar11 != (byte *)0x0) && (pbVar12 = pbVar11, *local_c0 == 0xa7)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_130,local_124,local_128);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_130 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a8340(&local_78,&local_c0,local_130);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_130 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081a917;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        pbVar12 = local_a0;
        if (local_68 == (byte *)0x0) goto LAB_100819ff5;
        uVar7 = FUN_10087d0e0(local_68,(long)(int)local_70[0]);
        *(undefined8 *)(piVar5 + 0x24) = uVar7;
        FUN_10081e1a0(local_68);
        pbVar12 = local_a0;
        goto LAB_10081a000;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081a917:
    local_80 = 0x237;
    uVar10 = 0x237;
    goto LAB_10081aa90;
  }
LAB_100819ff5:
  piVar5[0x24] = 0;
  piVar5[0x25] = 0;
LAB_10081a000:
  local_70[0] = 0;
  local_68 = (byte *)0x0;
  pbVar11 = (byte *)0x0;
  if ((pbVar12 != (byte *)0x0) && (pbVar11 = pbVar12, *local_c0 == 0xa8)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_140,local_134,local_138);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_140 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a8340(&local_78,&local_c0,local_140);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_140 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081aa1f;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        pbVar11 = local_a0;
        if (local_68 == (byte *)0x0) goto LAB_10081a090;
        uVar7 = FUN_10087d0e0(local_68,(long)(int)local_70[0]);
        *(undefined8 *)(piVar5 + 0x26) = uVar7;
        FUN_10081e1a0(local_68);
        local_68 = (byte *)0x0;
        local_70[0] = 0;
        pbVar11 = local_a0;
        goto LAB_10081a09b;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081aa1f:
    local_80 = 0x242;
    uVar10 = 0x242;
    goto LAB_10081aa90;
  }
LAB_10081a090:
  piVar5[0x26] = 0;
  piVar5[0x27] = 0;
LAB_10081a09b:
  local_50[0] = 0;
  pbVar12 = (byte *)0x0;
  if ((pbVar11 != (byte *)0x0) && (pbVar12 = pbVar11, *local_c0 == 0xa9)) {
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_150,local_144,local_148,pbVar11);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_150 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a81c0(&local_58,&local_c0,local_150);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_150 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081aa38;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        pbVar12 = local_a0;
        goto LAB_10081a4eb;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081aa38:
    local_80 = 0x24e;
    uVar10 = 0x24e;
    goto LAB_10081aa90;
  }
LAB_10081a4eb:
  if (local_48 == 0) {
    if ((*(long *)(piVar5 + 0x52) == 0) || (piVar5[0x11] == 0)) {
      piVar5[0x54] = 0;
      piVar5[0x55] = 0;
    }
    else {
      piVar5[0x54] = -1;
      piVar5[0x55] = -1;
    }
  }
  else {
    uVar7 = FUN_10089b410(local_58);
    *(undefined8 *)(piVar5 + 0x54) = uVar7;
    FUN_10081e1a0(local_48);
    local_48 = 0;
    local_50[0] = 0;
    pbVar12 = local_a0;
  }
  local_70[0] = 0;
  local_68 = (byte *)0x0;
  if (pbVar12 == (byte *)0x0) {
    pbVar12 = (byte *)0x0;
LAB_10081a5d6:
    piVar5[0x50] = 0;
    piVar5[0x51] = 0;
  }
  else {
    if (*local_c0 != 0xaa) goto LAB_10081a5d6;
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_160,local_154,local_158);
    if ((uVar4 & 0x80) != 0) {
      local_b4 = 0x3b;
LAB_10081aa51:
      local_80 = 0x25a;
      uVar10 = 0x25a;
      goto LAB_10081aa90;
    }
    if (uVar4 == 0x21) {
      local_160 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
    }
    lVar6 = FUN_1008a8340(&local_78,&local_c0,local_160);
    if (lVar6 == 0) goto LAB_10081aa51;
    if (uVar4 == 0x21) {
      local_160 = local_90 + ((long)local_a0 - (long)local_c0);
      iVar3 = FUN_1008af5f0(&local_c0);
      if (iVar3 == 0) {
        local_b4 = 0x3f;
        goto LAB_10081aa51;
      }
    }
    pbVar12 = local_90 + ((long)local_a0 - (long)local_c0);
    local_a0 = pbVar12;
    if (local_68 == (byte *)0x0) goto LAB_10081a5d6;
    *(byte **)(piVar5 + 0x50) = local_68;
    *(long *)(piVar5 + 0x52) = (long)(int)local_70[0];
  }
  local_70[0] = 0;
  local_68 = (byte *)0x0;
  if (pbVar12 == (byte *)0x0) {
    local_70[0] = 0;
    local_68 = (byte *)0x0;
LAB_10081a9c6:
    piVar5[0x56] = 0;
    piVar5[0x57] = 0;
LAB_10081a9d1:
    iVar3 = FUN_1008af9d0(&local_c0);
    if (iVar3 != 0) {
      *param_2 = local_c0;
      if (param_1 == (long *)0x0) {
        return piVar5;
      }
      *param_1 = (long)piVar5;
      return piVar5;
    }
    local_80 = 0x27b;
    uVar10 = 0x27b;
  }
  else {
    if (*local_c0 == 0xab) {
      local_90 = local_c0;
      uVar4 = FUN_1008af630(&local_c0,&local_170,local_164,local_168);
      if ((uVar4 & 0x80) == 0) {
        if (uVar4 == 0x21) {
          local_170 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
        }
        lVar6 = FUN_1008a8340(&local_78,&local_c0,local_170);
        if (lVar6 != 0) {
          if (uVar4 == 0x21) {
            local_170 = local_90 + ((long)local_a0 - (long)local_c0);
            iVar3 = FUN_1008af5f0(&local_c0);
            if (iVar3 == 0) {
              local_b4 = 0x3f;
              goto LAB_10081aa6a;
            }
          }
          local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
          if (local_68 != (byte *)0x0) {
            piVar5[0x36] = (uint)*local_68;
            FUN_10081e1a0();
          }
          local_70[0] = 0;
          local_68 = (byte *)0x0;
          if (local_a0 == (byte *)0x0) goto LAB_10081a9c6;
          goto LAB_10081a68b;
        }
      }
      else {
        local_b4 = 0x3b;
      }
LAB_10081aa6a:
      local_80 = 0x266;
      uVar10 = 0x266;
      goto LAB_10081aa90;
    }
LAB_10081a68b:
    local_68 = (byte *)0x0;
    local_70[0] = 0;
    if (*local_c0 != 0xac) goto LAB_10081a9c6;
    local_90 = local_c0;
    uVar4 = FUN_1008af630(&local_c0,&local_180,local_174,local_178);
    if ((uVar4 & 0x80) == 0) {
      if (uVar4 == 0x21) {
        local_180 = local_90 + (long)(local_a0 + (-2 - (long)local_c0));
      }
      lVar6 = FUN_1008a8340(&local_78,&local_c0,local_180);
      if (lVar6 != 0) {
        if (uVar4 == 0x21) {
          local_180 = local_90 + ((long)local_a0 - (long)local_c0);
          iVar3 = FUN_1008af5f0(&local_c0);
          if (iVar3 == 0) {
            local_b4 = 0x3f;
            goto LAB_10081aa83;
          }
        }
        local_a0 = local_90 + ((long)local_a0 - (long)local_c0);
        if (local_68 == (byte *)0x0) goto LAB_10081a9c6;
        uVar7 = FUN_10087d0e0(local_68,(long)(int)local_70[0]);
        *(undefined8 *)(piVar5 + 0x56) = uVar7;
        FUN_10081e1a0(local_68);
        local_68 = (byte *)0x0;
        local_70[0] = 0;
        goto LAB_10081a9d1;
      }
    }
    else {
      local_b4 = 0x3b;
    }
LAB_10081aa83:
    local_80 = 0x271;
    uVar10 = 0x271;
  }
LAB_10081aa90:
  FUN_100887ce0(0xd,0x67,local_b4,"ssl_asn1.c",uVar10);
  FUN_1008afef0(*param_2,(int)local_90 - (int)*param_2);
  if ((piVar5 != (int *)0x0) && ((param_1 == (long *)0x0 || ((int *)*param_1 != piVar5)))) {
    FUN_100813340(piVar5);
  }
  return (int *)0x0;
}


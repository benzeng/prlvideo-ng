
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100374bc0(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,int *param_8,long param_9,
                  undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  void *pvVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  void *pvVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  size_t sVar25;
  undefined4 local_230;
  uint uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined1 local_210 [8];
  long local_208;
  long local_1f8;
  undefined4 local_1e8;
  uint uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined1 local_1c8 [8];
  long local_1c0;
  long local_1b0;
  uint local_1a0 [3];
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  uint local_180 [3];
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_160;
  uint uStack_15c;
  int local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  uint local_140 [8];
  undefined4 local_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  uint uStack_fc;
  undefined4 local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 local_d8;
  uint uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c0 [2];
  undefined1 *local_b8;
  undefined1 *local_a8;
  int local_94;
  int local_90;
  uint local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = &PTR_FUN_100bbc220;
  *(int *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  FUN_10036d070();
  *param_1 = &PTR_FUN_100bbc250;
  FUN_100374690(param_1 + 2,param_5);
  puVar1 = param_1 + 0x48;
  ___bzero(puVar1,0x1b0);
  param_1[0x7e] = param_6;
  param_1[0x7f] = param_7;
  *(int *)(param_1 + 0x80) = param_8[0x2b];
  *(bool *)((long)param_1 + 0x404) = *param_8 != 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  *(int *)((long)param_1 + 0x23c) = param_8[0x19];
  *(int *)(param_1 + 0x47) = param_8[0x1c];
  if (param_2 == 0) goto LAB_100375e7d;
  puVar2 = param_1 + 0x4b;
  plVar10 = param_1 + 0x7e;
  local_8c = 0;
  lVar20 = 0;
  uVar24 = 1;
  do {
    uVar23 = uVar24;
    lVar18 = (long)param_1 + lVar20 + 0x270;
    if (param_9 + lVar20 != lVar18) {
      FUN_1002f29d0(lVar18,*(undefined8 *)(param_9 + lVar20),*(undefined8 *)(param_9 + 8 + lVar20));
    }
    lVar20 = lVar20 + 0x18;
    uVar24 = uVar23 + 1;
    local_8c = uVar23;
  } while (uVar23 < 0x10);
  if ((*(char *)(DAT_1011c8478 + 0x37) == '\0') && (iVar13 = param_8[0x23], iVar13 != 0)) {
    piVar4 = (int *)param_1[0x6a];
    local_90 = iVar13;
    if (piVar4 == (int *)param_1[0x6b]) {
      FUN_10027f110(param_1 + 0x69,&local_90);
    }
    else {
      *piVar4 = iVar13;
      param_1[0x6a] = piVar4 + 1;
    }
  }
  iVar13 = param_8[0x2d];
  if (iVar13 != 0) {
    piVar4 = (int *)param_1[0x7c];
    local_94 = iVar13;
    if (piVar4 == (int *)param_1[0x7d]) {
      FUN_10027f110(param_1 + 0x7b,&local_94);
    }
    else {
      *piVar4 = iVar13;
      param_1[0x7c] = piVar4 + 1;
    }
  }
  if (param_8[0x25] != 0) {
    lVar20 = param_1[0x6d];
    uVar19 = lVar20 - param_1[0x6c] >> 2;
    if (uVar19 == 0) {
      FUN_10032f560(param_1 + 0x6c,1);
    }
    else if ((1 < uVar19) && (lVar18 = param_1[0x6c] + 4, lVar20 != lVar18)) {
      param_1[0x6d] = (~((lVar20 + -4) - lVar18) & 0xfffffffffffffffcU) + lVar20;
    }
  }
  local_8c = 0;
  if (param_8[0x1d] != 0) {
    uVar24 = 1;
    do {
      uVar23 = uVar24;
      uVar24 = uVar23 - 1;
      if (((uint)param_8[0x1f] >> (uVar24 & 0x1f) & 1) != 0) {
        puVar5 = (uint *)param_1[0x70];
        if (puVar5 == (uint *)param_1[0x71]) {
          FUN_10027f110(param_1 + 0x6f,&local_8c);
        }
        else {
          *puVar5 = uVar24;
          param_1[0x70] = puVar5 + 1;
        }
      }
      if ((param_8[0x20] & 1 << ((byte)uVar24 & 0x1f)) != 0) {
        puVar5 = (uint *)param_1[0x73];
        if (puVar5 == (uint *)param_1[0x74]) {
          FUN_10027f110(param_1 + 0x72,&local_8c);
        }
        else {
          *puVar5 = uVar24;
          param_1[0x73] = puVar5 + 1;
        }
      }
      cVar12 = FUN_100399b50(param_3,uVar24);
      if (cVar12 != '\0') {
        puVar5 = (uint *)param_1[0x79];
        if (puVar5 == (uint *)param_1[0x7a]) {
          FUN_10027f110(param_1 + 0x78,&local_8c);
        }
        else {
          *puVar5 = uVar24;
          param_1[0x79] = puVar5 + 1;
        }
      }
      uVar24 = uVar23 + 1;
      local_8c = uVar23;
    } while (uVar23 < (uint)param_8[0x1d]);
  }
  FUN_10038e870(local_c0,local_48,0x10);
  if (param_6 == 0) {
    plVar7 = *(long **)(param_11 + 0x20);
    uVar19 = plVar7[1] - *plVar7 >> 3;
    pvVar6 = (void *)param_1[0x48];
    if ((ulong)((param_1[0x4a] - (long)pvVar6 >> 2) * 0x6db6db6db6db6db7) < uVar19) {
      lVar20 = param_1[0x49];
      pvVar15 = (void *)0x0;
      if (uVar19 != 0) {
        pvVar15 = operator_new(uVar19 * 0x1c);
      }
      sVar25 = lVar20 - (long)pvVar6;
      lVar20 = SUB168(SEXT816((long)sVar25) * SEXT816(-0x4924924924924925),8);
      pvVar21 = (void *)((((lVar20 >> 3) - (lVar20 >> 0x3f)) +
                         ((long)sVar25 >> 2) * 0x6db6db6db6db6db7) * 0x1c + (long)pvVar15);
      _memcpy(pvVar21,pvVar6,sVar25);
      param_1[0x48] = pvVar21;
      param_1[0x49] = (void *)(((long)sVar25 >> 2) * 4 + (long)pvVar15);
      param_1[0x4a] = (void *)(uVar19 * 0x1c + (long)pvVar15);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
    lVar20 = *plVar7;
    if (lVar20 != plVar7[1]) {
      do {
        puVar16 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar16 = local_a8;
        }
        *puVar16 = 0;
        local_c0[0] = 0;
        FUN_10036bf10(local_c0,*(undefined1 *)(lVar20 + 6),*(undefined1 *)(lVar20 + 7));
        puVar16 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar16 = local_a8;
        }
        uVar24 = (*DAT_1011c5f00)(param_2,puVar16);
        if (uVar24 != 0xffffffff) {
          local_100 = 0;
          local_f8 = 0;
          local_e8 = 0;
          uStack_ec = 0;
          bVar3 = *(byte *)(lVar20 + 6);
          uStack_f4 = (uint)bVar3;
          local_f0 = (uint)*(byte *)(lVar20 + 7);
          plVar8 = (long *)param_1[0x49];
          uStack_fc = uVar24;
          if (plVar8 == (long *)param_1[0x4a]) {
            FUN_100376bc0(puVar1,&local_100);
          }
          else {
            *(undefined4 *)(plVar8 + 3) = 0;
            plVar8[2] = (ulong)local_f0;
            plVar8[1] = (ulong)bVar3 << 0x20;
            *plVar8 = (ulong)uVar24 << 0x20;
            param_1[0x49] = param_1[0x49] + 0x1c;
          }
        }
        lVar20 = lVar20 + 8;
      } while (lVar20 != plVar7[1]);
    }
  }
  else {
    lVar20 = *(long *)(param_6 + 200) - *(long *)(param_6 + 0xc0);
    pvVar6 = (void *)param_1[0x48];
    if ((ulong)((param_1[0x4a] - (long)pvVar6 >> 2) * 0x6db6db6db6db6db7) <
        (ulong)(lVar20 * -0x5555555555555555)) {
      lVar18 = param_1[0x49];
      pvVar15 = (void *)0x0;
      if (*(long *)(param_6 + 200) != *(long *)(param_6 + 0xc0)) {
        pvVar15 = operator_new(lVar20 * -0x555555555555554c);
      }
      sVar25 = lVar18 - (long)pvVar6;
      lVar18 = SUB168(SEXT816((long)sVar25) * SEXT816(-0x4924924924924925),8);
      pvVar21 = (void *)((((lVar18 >> 3) - (lVar18 >> 0x3f)) +
                         ((long)sVar25 >> 2) * 0x6db6db6db6db6db7) * 0x1c + (long)pvVar15);
      _memcpy(pvVar21,pvVar6,sVar25);
      param_1[0x48] = pvVar21;
      param_1[0x49] = (void *)(((long)sVar25 >> 2) * 4 + (long)pvVar15);
      param_1[0x4a] = (void *)(lVar20 * -0x555555555555554c + (long)pvVar15);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
    pbVar22 = *(byte **)(param_6 + 0xc0);
    if (pbVar22 != *(byte **)(param_6 + 200)) {
      do {
        puVar16 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar16 = local_a8;
        }
        *puVar16 = 0;
        local_c0[0] = 0;
        FUN_10036bf10(local_c0,*pbVar22,pbVar22[1]);
        puVar16 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar16 = local_a8;
        }
        uVar24 = (*DAT_1011c5f00)(param_2,puVar16);
        if (uVar24 != 0xffffffff) {
          local_e0 = 0;
          local_d8 = 0;
          local_c8 = 0;
          uStack_cc = 0;
          bVar3 = *pbVar22;
          uStack_d4 = (uint)bVar3;
          local_d0 = (uint)pbVar22[1];
          plVar7 = (long *)param_1[0x49];
          uStack_dc = uVar24;
          if (plVar7 == (long *)param_1[0x4a]) {
            FUN_100376bc0(puVar1,&local_e0);
          }
          else {
            *(undefined4 *)(plVar7 + 3) = 0;
            plVar7[2] = (ulong)local_d0;
            plVar7[1] = (ulong)bVar3 << 0x20;
            *plVar7 = (ulong)uVar24 << 0x20;
            param_1[0x49] = param_1[0x49] + 0x1c;
          }
        }
        pbVar22 = pbVar22 + 3;
      } while (pbVar22 != *(byte **)(param_6 + 200));
    }
  }
  if ((DAT_101118898 == '\0') && (iVar13 = ___cxa_guard_acquire(&DAT_101118898), iVar13 != 0)) {
    _DAT_1011187d8 = 0x350;
    _DAT_1011187dc = 0;
    _DAT_1011187e0 = 0xd0;
    _DAT_1011187e4 = 0x50;
    _DAT_1011187e8 = 0x90;
    _DAT_1011187ec = 0x110;
    _DAT_1011187f0 = 0x6f0;
    _DAT_1011187f4 = 0x150;
    _DAT_1011187f8 = 0x6d0;
    _DAT_1011187fc = 0x30;
    _DAT_101118800 = 0x10;
    _DAT_101118804 = 0xa0;
    _DAT_101118808 = 0xa0;
    _DAT_10111880c = 0x90;
    _DAT_101118810 = 0x1a0;
    _DAT_101118814 = 0;
    _DAT_101118818 = 0x70;
    _DAT_10111881c = _DAT_100b3d5f0;
    uRam0000000101118820 = _UNK_100b3d5f4;
    uRam0000000101118824 = _UNK_100b3d5f8;
    uRam0000000101118828 = _UNK_100b3d5fc;
    _DAT_10111882c = 0x40;
    _DAT_101118830 = 0x80;
    _DAT_101118834 = 0x40;
    _DAT_101118838 = 0x20;
    _DAT_10111883c = 0x10;
    _DAT_101118840 = 0x20;
    _DAT_101118844 = 0x20;
    _DAT_101118848 = 0x20;
    _DAT_10111884c = 0x10;
    _DAT_101118850 = 0x10;
    _DAT_101118854 = 0x10;
    _DAT_101118858 = 1;
    _DAT_10111886c = 0;
    _DAT_101118864 = 0;
    _DAT_10111885c = 0;
    _DAT_101118870 = 0x200000001;
    _DAT_101118878 = 0x100000000;
    _DAT_101118880 = 0x200000000;
    _DAT_101118888 = 2;
    _DAT_101118890 = 2;
    ___cxa_guard_release(&DAT_101118898);
  }
  uVar24 = (*DAT_1011c6230)(param_2,"posCorrection");
  if (uVar24 == 0xffffffff) {
    uVar24 = (*DAT_1011c6218)(param_2,"PosCB");
    local_140[1] = 0;
    local_140[2] = 1;
    local_140[3] = 1;
    local_140[4] = 0;
    local_140[6] = 0;
    local_140[5] = 0;
    puVar9 = (ulong *)param_1[0x4c];
    local_140[0] = uVar24;
    if (puVar9 == (ulong *)param_1[0x4d]) {
      FUN_100376bc0(puVar2,local_140);
    }
    else {
      *(undefined4 *)(puVar9 + 3) = 0;
      puVar9[2] = 0;
      puVar9[1] = 0x100000001;
      *puVar9 = (ulong)uVar24;
      param_1[0x4c] = param_1[0x4c] + 0x1c;
    }
    (*DAT_1011c6e58)(param_2,uVar24,uVar24);
  }
  else {
    local_120 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    plVar7 = (long *)param_1[0x4c];
    uStack_11c = uVar24;
    if (plVar7 == (long *)param_1[0x4d]) {
      FUN_100376bc0(puVar2,&local_120);
    }
    else {
      *(undefined4 *)(plVar7 + 3) = 0;
      plVar7[2] = 0;
      plVar7[1] = 0;
      *plVar7 = (ulong)uVar24 << 0x20;
      param_1[0x4c] = param_1[0x4c] + 0x1c;
    }
  }
  if (param_8[0x19] == 0) {
    FUN_100376480(&DAT_1011187d8,1,param_1 + 0x4e,(uint *)((long)param_1 + 0x40c),
                  (long)param_1 + 0x414);
    FUN_10038e870(local_1c8,local_68,0x20);
    FUN_10038e8e0(local_1c8,"c[%d]",*(uint *)((long)param_1 + 0x40c) >> 2);
    if (local_1c0 == 0) {
      local_1c0 = local_1b0;
    }
    uStack_1e4 = (*DAT_1011c6230)(param_2,local_1c0);
    local_1e8 = 0;
    local_1e0 = 0;
    uStack_1dc = 2;
    local_1d8 = 0;
    local_1d0 = 0;
    uStack_1d4 = 0;
    plVar10 = (long *)param_1[0x4c];
    if (plVar10 == (long *)param_1[0x4d]) {
      FUN_100376bc0(puVar2,&local_1e8);
    }
    else {
      *(undefined4 *)(plVar10 + 3) = 0;
      plVar10[2] = 0;
      plVar10[1] = 0x200000000;
      *plVar10 = (ulong)uStack_1e4 << 0x20;
      param_1[0x4c] = param_1[0x4c] + 0x1c;
    }
    FUN_10038e8c0(local_1c8);
  }
  else if (*plVar10 != 0) {
    uVar24 = (*DAT_1011c6230)(param_2,"cb");
    if (uVar24 == 0xffffffff) {
      FUN_100376010(param_1,"c",param_8[0x1b],4,param_1[0x7e]);
    }
    else {
      iVar13 = *(int *)(*plVar10 + 0x70);
      local_158 = param_8[0x1b];
      if (iVar13 <= param_8[0x1b]) {
        local_158 = iVar13;
      }
      if (iVar13 == 0x100) {
        local_158 = local_158 + (uint)*(byte *)(DAT_1011c8478 + 0x38);
      }
      local_160 = 0;
      uStack_154 = 7;
      local_150 = 0;
      local_148 = 0;
      uStack_14c = 0;
      plVar7 = (long *)param_1[0x4c];
      uStack_15c = uVar24;
      if (plVar7 == (long *)param_1[0x4d]) {
        FUN_100376bc0(puVar2,&local_160);
      }
      else {
        *(undefined4 *)(plVar7 + 3) = 0;
        plVar7[2] = 0;
        plVar7[1] = CONCAT44(7,local_158);
        *plVar7 = (ulong)uVar24 << 0x20;
        param_1[0x4c] = param_1[0x4c] + 0x1c;
      }
      (*DAT_1011c6e60)(param_2,uVar24,param_4);
    }
    if (*(char *)(DAT_1011c8478 + 100) == '\0') {
      lVar20 = *plVar10;
LAB_100375aff:
      FUN_1003761d0(param_1,"vs_i",0x10,5,lVar20);
    }
    else {
      uVar24 = (*DAT_1011c6218)(param_2,"IntCB");
      lVar20 = *plVar10;
      if (uVar24 == 0xffffffff) goto LAB_100375aff;
      local_180[2] = *(undefined4 *)(lVar20 + 0x84);
      local_180[1] = 0;
      uStack_174 = 8;
      local_170 = 0;
      local_168 = 0;
      uStack_16c = 0;
      puVar9 = (ulong *)param_1[0x4c];
      local_180[0] = uVar24;
      if (puVar9 == (ulong *)param_1[0x4d]) {
        FUN_100376bc0(puVar2,local_180);
      }
      else {
        *(undefined4 *)(puVar9 + 3) = 0;
        puVar9[2] = 0;
        puVar9[1] = CONCAT44(8,local_180[2]);
        *puVar9 = (ulong)uVar24;
        param_1[0x4c] = param_1[0x4c] + 0x1c;
      }
      (*DAT_1011c6e58)(param_2,uVar24,uVar24);
    }
    if (*(char *)(DAT_1011c8478 + 100) == '\0') {
      lVar20 = *plVar10;
    }
    else {
      uVar24 = (*DAT_1011c6218)(param_2,"BoolCB");
      lVar20 = *plVar10;
      if (uVar24 != 0xffffffff) {
        local_1a0[2] = *(undefined4 *)(lVar20 + 0xa0);
        local_1a0[1] = 0;
        uStack_194 = 9;
        local_190 = 0;
        local_188 = 0;
        uStack_18c = 0;
        puVar9 = (ulong *)param_1[0x4c];
        local_1a0[0] = uVar24;
        if (puVar9 == (ulong *)param_1[0x4d]) {
          FUN_100376bc0(puVar2,local_1a0);
        }
        else {
          *(undefined4 *)(puVar9 + 3) = 0;
          puVar9[2] = 0;
          puVar9[1] = CONCAT44(9,local_1a0[2]);
          *puVar9 = (ulong)uVar24;
          param_1[0x4c] = param_1[0x4c] + 0x1c;
        }
        (*DAT_1011c6e58)(param_2,uVar24,uVar24);
        goto LAB_100375c65;
      }
    }
    FUN_100376330(param_1,"vs_b",0x10,6,lVar20);
  }
LAB_100375c65:
  FUN_100376480(&DAT_1011187d8,0,param_1 + 0x4e,param_1 + 0x81,param_1 + 0x82);
  FUN_10038e870(local_210,local_88,0x20);
  FUN_10038e8e0(local_210,"c_ps[%d]",*(uint *)(param_1 + 0x81) >> 2);
  if (local_208 == 0) {
    local_208 = local_1f8;
  }
  uVar24 = (*DAT_1011c6230)(param_2,local_208);
  if (uVar24 != 0xffffffff) {
    local_230 = 0;
    local_228 = 0;
    uStack_224 = 3;
    local_220 = 0;
    local_218 = 0;
    uStack_21c = 0;
    plVar10 = (long *)param_1[0x4c];
    uStack_22c = uVar24;
    if (plVar10 == (long *)param_1[0x4d]) {
      FUN_100376bc0(puVar2,&local_230);
    }
    else {
      *(undefined4 *)(plVar10 + 3) = 0;
      plVar10[2] = 0;
      plVar10[1] = 0x300000000;
      *plVar10 = (ulong)uVar24 << 0x20;
      param_1[0x4c] = param_1[0x4c] + 0x1c;
    }
  }
  if (param_1[0x7f] != 0) {
    FUN_100376010(param_1,"ps_c",0xe0,10);
    FUN_1003761d0(param_1,"ps_i",0x10,0xb,param_1[0x7f]);
    FUN_100376330(param_1,"ps_b",0x10,0xc,param_1[0x7f]);
  }
  local_8c = 0;
  uVar24 = 1;
  do {
    uVar23 = uVar24;
    pcVar11 = DAT_1011c6230;
    uVar17 = FUN_10036bd80(uVar23 - 1);
    iVar13 = (*pcVar11)(param_2,uVar17);
    if (iVar13 != -1) {
      uVar14 = FUN_100351740(param_11,param_8[0x2a],uVar23 - 1);
      (*DAT_1011c6d38)(iVar13,uVar14);
    }
    uVar24 = uVar23 + 1;
    local_8c = uVar23;
  } while (uVar23 < 0x14);
  FUN_10038e8c0(local_210);
  FUN_10038e8c0(local_c0);
LAB_100375e7d:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


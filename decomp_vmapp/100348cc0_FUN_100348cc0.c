
undefined4 FUN_100348cc0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  bool bVar29;
  bool bVar30;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  int local_108;
  uint local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  long local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  long local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  
  if (*(uint *)(param_2 + 4) < 0x3c) {
    return 9;
  }
  uVar17 = *(uint *)(param_2 + 8);
  puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar17 >> 0xc ^ uVar17) & 0xfff ^ uVar17 >> 0x18) * 8);
  while( true ) {
    if (puVar13 == (uint *)0x0) {
      return 7;
    }
    if (*puVar13 == uVar17) break;
    puVar13 = *(uint **)(puVar13 + 4);
  }
  lVar19 = *(long *)(puVar13 + 2);
  if (lVar19 == 0) {
    return 7;
  }
  lVar2 = *(long *)(lVar19 + 8);
  uVar21 = *(long *)(lVar2 + 0x48) - (long)*(long **)(lVar2 + 0x40);
  if ((uVar21 & 0x7fffffff8) == 0) {
    puVar13 = (uint *)(lVar2 + 8);
  }
  else {
    puVar13 = (uint *)(**(long **)(lVar2 + 0x40) + 0x1c);
  }
  uVar17 = *puVar13;
  local_c8 = uVar17;
  if ((int)uVar17 < 0x66) {
    local_c8 = 0;
    if (uVar17 != 1) {
      if (uVar17 == 3) {
        local_c8 = 2;
      }
      else {
        local_c8 = uVar17;
        if (uVar17 == 8) {
          local_c8 = 7;
        }
      }
    }
  }
  else if ((int)uVar17 < 0x6a) {
    if (uVar17 == 0x66) {
      local_c8 = 0x65;
    }
    else if (uVar17 == 0x68) {
      local_c8 = 0x67;
    }
  }
  else if (uVar17 == 0x6a) {
    local_c8 = 0x69;
  }
  else if (uVar17 == 0x72) {
    local_c8 = 0x71;
  }
  uVar23 = (ulong)local_c8;
  uVar1 = uVar23 - 0x78;
  uVar17 = *(uint *)(param_2 + 0x1c);
  if (uVar17 == 0) {
    uVar17 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar19 + 4));
    local_48 = *(int *)(param_2 + 0x10);
    local_44 = *(int *)(param_2 + 0x14);
    local_38 = *(int *)(param_2 + 0x18);
    iVar25 = *(int *)(param_2 + 0x30);
    iVar10 = *(int *)(param_2 + 0x24);
    local_40 = (iVar25 + local_48) - iVar10;
    local_3c = (*(int *)(param_2 + 0x34) + local_44) - *(int *)(param_2 + 0x28);
    local_34 = (*(int *)(param_2 + 0x38) + local_38) - *(int *)(param_2 + 0x2c);
    if (0x15 < uVar1) {
      if (*(int *)(lVar2 + 0x24) != 1) {
        FUN_10035e0e0(*(undefined8 *)(param_1 + 0x2778),lVar2,&local_48,uVar17,
                      *(undefined4 *)(param_2 + 0xc));
        return 0;
      }
      if (iVar25 - iVar10 != 0 && iVar10 <= iVar25) {
        (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
                  (*(long **)(param_1 + 0x2778),lVar2,**(undefined4 **)(lVar2 + 0x28),local_48,
                   iVar25 - iVar10,0);
        return 0;
      }
      return 0;
    }
    if (local_48 != 0) {
      return 0;
    }
    bVar12 = (byte)*(undefined4 *)(param_2 + 0xc);
    uVar18 = 1;
    if (*(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f) != 0) {
      uVar18 = *(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f);
    }
    if (local_40 != uVar18) {
      return 0;
    }
    iVar25 = *(int *)(lVar2 + 0x24);
    if ((iVar25 != 2) && (iVar25 != 7)) {
      if (local_44 != 0) {
        return 0;
      }
      uVar18 = 1;
      if (*(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f) != 0) {
        uVar18 = *(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f);
      }
      if (local_3c != uVar18) {
        return 0;
      }
      if (iVar25 == 5) {
        if (local_38 != 0) {
          return 0;
        }
        uVar18 = 1;
        if (*(uint *)(lVar2 + 0x14) >> (bVar12 & 0x1f) != 0) {
          uVar18 = *(uint *)(lVar2 + 0x14) >> (bVar12 & 0x1f);
        }
        if (local_34 != uVar18) {
          return 0;
        }
      }
    }
    puVar13 = (uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar17 * 4);
    *puVar13 = *puVar13 | 1 << (bVar12 & 0x1f);
    return 0;
  }
  puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar17 >> 0xc ^ uVar17) & 0xfff ^ uVar17 >> 0x18) * 8);
  while( true ) {
    if (puVar13 == (uint *)0x0) {
      return 7;
    }
    if (*puVar13 == uVar17) break;
    puVar13 = *(uint **)(puVar13 + 4);
  }
  lVar28 = *(long *)(puVar13 + 2);
  if (lVar28 == 0) {
    return 7;
  }
  lVar3 = *(long *)(lVar28 + 8);
  uVar14 = *(long *)(lVar3 + 0x48) - (long)*(long **)(lVar3 + 0x40);
  if ((uVar14 & 0x7fffffff8) == 0) {
    puVar13 = (uint *)(lVar3 + 8);
  }
  else {
    puVar13 = (uint *)(**(long **)(lVar3 + 0x40) + 0x1c);
  }
  uVar17 = *puVar13;
  local_b0 = uVar17;
  if ((int)uVar17 < 0x66) {
    local_b0 = 0;
    if (uVar17 != 1) {
      if (uVar17 == 3) {
        local_b0 = 2;
      }
      else {
        local_b0 = uVar17;
        if (uVar17 == 8) {
          local_b0 = 7;
        }
      }
    }
  }
  else if ((int)uVar17 < 0x6a) {
    if (uVar17 == 0x66) {
      local_b0 = 0x65;
    }
    else if (uVar17 == 0x68) {
      local_b0 = 0x67;
    }
  }
  else if (uVar17 == 0x6a) {
    local_b0 = 0x69;
  }
  else if (uVar17 == 0x72) {
    local_b0 = 0x71;
  }
  puVar13 = &DAT_100b3b630;
  uVar16 = 0;
  do {
    uVar15 = uVar16;
    if ((((*puVar13 == local_b0) || (uVar15 = uVar16 + 1, puVar13[3] == local_b0)) ||
        (uVar15 = uVar16 + 2, puVar13[6] == local_b0)) ||
       (uVar15 = uVar16 + 3, puVar13[9] == local_b0)) {
      uVar17 = *(uint *)(&UNK_100b3b634 + uVar15 * 0xc);
      break;
    }
    uVar16 = uVar16 + 4;
    puVar13 = puVar13 + 0xc;
    uVar17 = 0x8e;
  } while (uVar16 < 0x74);
  puVar13 = &DAT_100b3b630;
  uVar16 = 0;
  do {
    uVar15 = uVar16;
    if (((*puVar13 == local_c8) || (uVar15 = uVar16 + 1, puVar13[3] == local_c8)) ||
       ((uVar15 = uVar16 + 2, puVar13[6] == local_c8 ||
        (uVar15 = uVar16 + 3, puVar13[9] == local_c8)))) {
      uVar18 = *(uint *)(&UNK_100b3b634 + uVar15 * 0xc);
      if ((uVar17 == 0x52) && (bVar30 = true, uVar15 - 0x28 < 5)) goto LAB_10034910f;
      break;
    }
    uVar16 = uVar16 + 4;
    puVar13 = puVar13 + 0xc;
    uVar18 = 0x8e;
  } while (uVar16 < 0x74);
  bVar30 = false;
  uVar11 = uVar17 - 0x87;
  if (uVar11 < 5) {
    if ((0x16U >> (uVar11 & 0x1f) & 1) == 0) {
      if ((9U >> (uVar11 & 0x1f) & 1) == 0) {
        bVar30 = false;
        goto LAB_10034910f;
      }
      bVar30 = true;
      if ((uVar18 != 0x7f) && (uVar18 != 0x84)) {
        if ((uVar17 & 0xfffffffe) == 0x88) goto LAB_100349186;
        bVar30 = false;
      }
    }
    else {
LAB_100349186:
      bVar30 = uVar18 == 0x81;
    }
LAB_10034919d:
    bVar29 = false;
    uVar11 = uVar18 - 0x87;
    if (uVar11 < 5) {
      if ((0x16U >> (uVar11 & 0x1f) & 1) == 0) {
        if ((9U >> (uVar11 & 0x1f) & 1) != 0) {
          bVar29 = true;
          if ((uVar17 == 0x7f) || (uVar17 == 0x84)) goto LAB_10034921f;
          if ((uVar18 & 0xfffffffe) == 0x88) goto LAB_100349202;
        }
        bVar29 = false;
      }
      else {
LAB_100349202:
        bVar29 = uVar17 == 0x81;
      }
    }
  }
  else {
LAB_10034910f:
    if ((uVar17 != 0x7e) || (uVar18 != 0x52)) goto LAB_10034919d;
    bVar29 = true;
    uVar18 = 0x52;
  }
LAB_10034921f:
  if ((*(int *)(lVar3 + 0x24) == 1) && (*(int *)(lVar2 + 0x24) == 1)) {
    if (*(char *)(lVar3 + 0xb4) != '\0') {
      FUN_100362eb0(*(undefined8 *)(param_1 + 0x2778),lVar3,0,0);
    }
    if (*(int *)(param_2 + 0x24) < *(int *)(param_2 + 0x30)) {
      FUN_100363060(*(undefined8 *)(param_1 + 0x2778),lVar3,lVar2,*(int *)(param_2 + 0x24),
                    *(undefined4 *)(param_2 + 0x10));
      return 0;
    }
    return 0;
  }
  if (((*(uint3 *)(lVar2 + 0xb0) & 0x8000) != 0) && ((uVar14 & 0x7fffffff8) != 0)) {
    local_60 = *(int *)(param_2 + 0x24);
    local_5c = *(int *)(param_2 + 0x28);
    local_50 = *(int *)(param_2 + 0x2c);
    local_58 = *(int *)(param_2 + 0x30);
    local_54 = *(int *)(param_2 + 0x34);
    local_4c = *(int *)(param_2 + 0x38);
    local_78 = *(int *)(param_2 + 0x10);
    local_74 = *(int *)(param_2 + 0x14);
    local_68 = *(int *)(param_2 + 0x18);
    local_70 = (local_58 + local_78) - local_60;
    local_6c = (local_54 + local_74) - local_5c;
    local_64 = (local_4c + local_68) - local_50;
    uVar4 = *(undefined8 *)(param_1 + 0x2778);
    uVar5 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar28 + 4));
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    uVar6 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar19 + 4));
    FUN_100362f60(uVar4,lVar3,&local_60,uVar5,uVar7,lVar2,&local_78,uVar6,
                  *(undefined4 *)(param_2 + 0xc));
    return 0;
  }
  uVar21 = uVar21 & 0x7fffffff8;
  if (((((uVar14 & 0x7fffffff8) != 0) && (!(bool)(bVar29 ^ 1U))) && (uVar21 != 0)) &&
     (((10 < *(uint *)(lVar2 + 0x24) || ((0x460U >> (*(uint *)(lVar2 + 0x24) & 0x1f) & 1) == 0)) &&
      (((&DAT_100b3bba4)[uVar23 * 8] & 4) != 0)))) {
    local_88 = *(int *)(param_2 + 0x24);
    local_84 = *(int *)(param_2 + 0x28);
    local_80 = *(int *)(param_2 + 0x30);
    local_7c = *(int *)(param_2 + 0x34);
    local_98 = *(int *)(param_2 + 0x10);
    local_94 = *(int *)(param_2 + 0x14);
    local_90 = local_98 + (local_80 - local_88) * 4;
    local_8c = local_94 + (local_7c - local_84) * 4;
    uVar4 = *(undefined8 *)(param_1 + 0x2778);
    uVar7 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar28 + 4));
    FUN_100362fe0(uVar4,lVar3,&local_88,uVar7,*(undefined4 *)(param_2 + 0x20),lVar2,&local_98,
                  *(undefined4 *)(param_2 + 0xc));
    return 0;
  }
  if (((0x15 < uVar1) && (0x15 < (ulong)local_b0 - 0x78)) &&
     (((0xffffff < *(uint *)(&DAT_100b3bba4 + uVar23 * 8) && !bVar30) && !bVar29 &&
      (((local_b0 == local_c8 || (uVar17 != uVar18)) ||
       ((((uint3)*(ushort *)(lVar3 + 0xb0) | *(uint3 *)(lVar2 + 0xb0)) & 0x40) != 0)))))) {
    if ((uVar14 & 0x7fffffff8) == 0) {
      return 0;
    }
    if (uVar21 != 0) {
      local_130 = *(int *)(param_2 + 0x24);
      local_12c = *(int *)(param_2 + 0x28);
      local_120 = *(int *)(param_2 + 0x2c);
      local_128 = *(int *)(param_2 + 0x30);
      local_124 = *(int *)(param_2 + 0x34);
      local_11c = *(int *)(param_2 + 0x38);
      local_148 = *(int *)(param_2 + 0x10);
      local_144 = *(int *)(param_2 + 0x14);
      local_138 = *(int *)(param_2 + 0x18);
      local_140 = (local_128 + local_148) - local_130;
      local_13c = (local_124 + local_144) - local_12c;
      local_134 = (local_11c + local_138) - local_120;
      uVar7 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar28 + 4));
      uVar5 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar19 + 4));
      local_160 = 1;
      local_150 = 0;
      local_15c = 0;
      local_158 = 0x8e;
      FUN_10035f740(*(undefined8 *)(param_1 + 0x2778),lVar3,&local_130,uVar7,
                    *(undefined4 *)(param_2 + 0x20),lVar2,&local_148,uVar5,
                    *(undefined4 *)(param_2 + 0xc),&local_160);
      uVar17 = 1 << ((byte)uVar5 & 0x1f);
      if ((*(ushort *)(lVar2 + 0xb0) & 1) != 0) {
        uVar17 = 1;
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | uVar17;
      return 0;
    }
    return 0;
  }
  bVar12 = *(byte *)(param_2 + 0x20) & 0x1f;
  uStack_ac = *(uint *)(lVar3 + 0xc) >> bVar12;
  if (*(uint *)(lVar3 + 0xc) >> bVar12 == 0) {
    uStack_ac = 1;
  }
  bVar12 = *(byte *)(param_2 + 0x20) & 0x1f;
  local_a8 = *(uint *)(lVar3 + 0x10) >> bVar12;
  if (*(uint *)(lVar3 + 0x10) >> bVar12 == 0) {
    local_a8 = 1;
  }
  if (*(uint *)(&DAT_100b3bba4 + (ulong)local_b0 * 8) < 0x1000000) {
    local_a4 = 0;
    switch(local_b0) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5e:
    case 0x5f:
      local_a4 = uStack_ac * 2 + 3 & 0xfffffffc;
      break;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x62:
    case 99:
      local_a4 = uStack_ac + 3 & 0xfffffffc;
      break;
    case 0x5b:
    case 0x5c:
    case 0x60:
    case 0x61:
      local_a4 = uStack_ac << 2;
      break;
    case 0x5d:
      local_a4 = uStack_ac << 3;
      break;
    case 0x65:
    case 0x66:
    case 0x6b:
    case 0x6c:
    case 0x87:
    case 0x8a:
      local_a4 = uStack_ac * 2 + 6 & 0xfffffff8;
      break;
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6d:
    case 0x6e:
    case 0x88:
    case 0x89:
    case 0x8b:
      local_a4 = uStack_ac * 4 + 0xc & 0xfffffff0;
    }
  }
  else {
    local_a4 = (*(uint *)(&DAT_100b3bba4 + (ulong)local_b0 * 8) >> 0x18) * uStack_ac;
    if (3 < local_b0 - 0x73) {
      local_a4 = local_a4 + 3 & 0xfffffffc;
    }
  }
  bVar12 = *(byte *)(param_2 + 0xc) & 0x1f;
  uStack_c4 = *(uint *)(lVar2 + 0xc) >> bVar12;
  if (*(uint *)(lVar2 + 0xc) >> bVar12 == 0) {
    uStack_c4 = 1;
  }
  bVar12 = *(byte *)(param_2 + 0xc) & 0x1f;
  local_c0 = *(uint *)(lVar2 + 0x10) >> bVar12;
  if (*(uint *)(lVar2 + 0x10) >> bVar12 == 0) {
    local_c0 = 1;
  }
  uVar11 = *(uint *)(&DAT_100b3bba4 + uVar23 * 8);
  if (uVar11 < 0x1000000) {
    local_bc = 0;
    switch(local_c8) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5e:
    case 0x5f:
      local_bc = uStack_c4 * 2;
LAB_1003495ad:
      local_bc = local_bc + 3 & 0xfffffffc;
      break;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x62:
    case 99:
      local_bc = uStack_c4 + 3 & 0xfffffffc;
      break;
    case 0x5b:
    case 0x5c:
    case 0x60:
    case 0x61:
      local_bc = uStack_c4 << 2;
      break;
    case 0x5d:
      local_bc = uStack_c4 << 3;
      break;
    case 0x65:
    case 0x66:
    case 0x6b:
    case 0x6c:
    case 0x87:
    case 0x8a:
      local_bc = uStack_c4 * 2 + 6 & 0xfffffff8;
      break;
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6d:
    case 0x6e:
    case 0x88:
    case 0x89:
    case 0x8b:
      local_bc = uStack_c4 * 4 + 0xc & 0xfffffff0;
    }
  }
  else {
    local_bc = (uVar11 >> 0x18) * uStack_c4;
    if (3 < local_c8 - 0x73) goto LAB_1003495ad;
  }
  local_d8 = *(uint *)(param_2 + 0x24);
  uStack_d4 = *(uint *)(param_2 + 0x28);
  uStack_d0 = *(uint *)(param_2 + 0x30);
  uStack_cc = *(uint *)(param_2 + 0x34);
  local_e8 = *(uint *)(param_2 + 0x10);
  local_e4 = *(uint *)(param_2 + 0x14);
  local_e0 = 0;
  local_dc = 0;
  uVar7 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar28 + 4));
  uVar8 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar19 + 4));
  if ((int)((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40)) >> 3) != 0) {
    local_100 = *(undefined8 *)(param_2 + 0x24);
    local_f0 = *(undefined4 *)(param_2 + 0x2c);
    local_f8 = *(undefined8 *)(param_2 + 0x30);
    local_ec = *(undefined4 *)(param_2 + 0x38);
    FUN_10035e890(*(undefined8 *)(param_1 + 0x2778),lVar3,&local_100,uVar7,
                  *(undefined4 *)(param_2 + 0x20));
  }
  uVar9 = uVar17;
  if (uVar17 != uVar18) {
    uVar17 = local_c8;
    if (bVar30) {
      if (((&DAT_100b3bba4)[(ulong)local_b0 * 8] & 4) != 0) {
        uStack_ac = uStack_ac >> 2;
        local_a8 = local_a8 >> 2;
        local_d8 = local_d8 >> 2;
        uStack_d4 = uStack_d4 >> 2;
        uStack_d0 = uStack_d0 + 3 >> 2;
        uStack_cc = uStack_cc + 3 >> 2;
      }
      local_b0 = local_c8;
      uVar9 = local_b0;
    }
    else {
      uVar9 = local_b0;
      if (bVar29) {
        if (((&DAT_100b3bba4)[(ulong)local_c8 * 8] & 4) != 0) {
          uStack_c4 = uStack_c4 >> 2;
          local_c0 = local_c0 >> 2;
          local_e8 = local_e8 >> 2;
          local_e4 = local_e4 >> 2;
        }
        local_c8 = local_b0;
        uVar17 = local_c8;
      }
    }
  }
  local_b0 = uVar9;
  local_c8 = uVar17;
  uStack_110 = (uStack_d0 + local_e8) - local_d8;
  uStack_10c = (uStack_cc + local_e4) - uStack_d4;
  if (*(uint *)(&DAT_100b3bba4 + (ulong)local_b0 * 8) < 0x1000000) {
    uVar17 = 0;
    switch(local_b0) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      goto switchD_100349a4e_caseD_53;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5e:
    case 0x5f:
      uVar17 = local_a4 * local_a8 * 3 >> 1;
      break;
    case 0x5a:
      uVar17 = local_a4 * local_a8 * 2;
      break;
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      uVar17 = (local_a8 + 3 & 0xfffffffc) * local_a4 >> 2;
    }
  }
  else {
switchD_100349a4e_caseD_53:
    uVar17 = local_a8 * local_a4;
  }
  if (*(uint *)(&DAT_100b3bba4 + (ulong)local_c8 * 8) < 0x1000000) {
    uVar18 = 0;
    switch(local_c8) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      goto switchD_100349ab1_caseD_53;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5e:
    case 0x5f:
      uVar18 = local_bc * local_c0 * 3 >> 1;
      break;
    case 0x5a:
      uVar18 = local_bc * local_c0 * 2;
      break;
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      uVar18 = (local_c0 + 3 & 0xfffffffc) * local_bc >> 2;
    }
  }
  else {
switchD_100349ab1_caseD_53:
    uVar18 = local_c0 * local_bc;
  }
  local_108 = *(int *)(param_2 + 0x18);
  local_104 = (*(int *)(param_2 + 0x38) + local_108) - *(int *)(param_2 + 0x2c);
  local_118 = local_e8;
  uStack_114 = local_e4;
  if (**(int **)(lVar3 + 0x28) < 0) {
    return 0;
  }
  local_e0 = uStack_110;
  local_dc = uStack_10c;
  if (-1 < **(int **)(lVar2 + 0x28)) {
    lVar19 = *(long *)(*(long *)(param_1 + 0x2770) + 0x920);
    uVar9 = FUN_10032df60(lVar3,uVar7,*(undefined4 *)(param_2 + 0x20));
    local_a0 = (ulong)(*(int *)(param_2 + 0x2c) * uVar17) + (ulong)uVar9 + lVar19;
    lVar19 = *(long *)(*(long *)(param_1 + 0x2770) + 0x920);
    uVar9 = FUN_10032df60(lVar2,uVar8,*(undefined4 *)(param_2 + 0xc));
    local_b8 = (ulong)(*(int *)(param_2 + 0x18) * uVar18) + (ulong)uVar9 + lVar19;
    iVar25 = *(int *)(param_2 + 0x2c);
    if (iVar25 < *(int *)(param_2 + 0x38)) {
      do {
        iVar10 = FUN_1003c6660(&local_b0,&local_d8,&local_c8,&local_e8,1);
        if (iVar10 != 1) break;
        local_a0 = local_a0 + (ulong)uVar17;
        local_b8 = local_b8 + (ulong)uVar18;
        iVar25 = iVar25 + 1;
      } while (iVar25 < *(int *)(param_2 + 0x38));
    }
    if (0x15 < uVar1) {
      if (((uVar11 & 4) != 0) && (!(bool)(bVar29 ^ 1U))) {
        local_118 = local_118 << 2;
        uStack_114 = uStack_114 << 2;
        uStack_110 = uStack_110 << 2;
        uStack_10c = uStack_10c << 2;
      }
      FUN_10035e0e0(*(undefined8 *)(param_1 + 0x2778),lVar2,&local_118,uVar8,
                    *(undefined4 *)(param_2 + 0xc));
      return 0;
    }
    if (local_118 != 0) {
      return 0;
    }
    bVar12 = (byte)*(undefined4 *)(param_2 + 0xc);
    uVar17 = 1;
    if (*(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f) != 0) {
      uVar17 = *(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f);
    }
    if (uStack_110 != uVar17) {
      return 0;
    }
    iVar25 = *(int *)(lVar2 + 0x24);
    if ((iVar25 != 2) && (iVar25 != 7)) {
      if (uStack_114 != 0) {
        return 0;
      }
      uVar17 = 1;
      if (*(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f) != 0) {
        uVar17 = *(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f);
      }
      if (uStack_10c != uVar17) {
        return 0;
      }
      if (iVar25 != 5) goto LAB_10034a29e;
      if (local_108 != 0) {
        return 0;
      }
      goto LAB_10034a281;
    }
    goto LAB_10034a29e;
  }
  if (uStack_d0 <= local_d8) {
    return 0;
  }
  if (uStack_cc <= uStack_d4) {
    return 0;
  }
  if (*(int *)(param_2 + 0x38) <= *(int *)(param_2 + 0x2c)) {
    return 0;
  }
  lVar19 = *(long *)(*(long *)(param_1 + 0x2770) + 0x920);
  uVar11 = FUN_10032df60(lVar3,uVar7,*(undefined4 *)(param_2 + 0x20));
  iVar25 = *(int *)(param_2 + 0x2c);
  if (0xffffff < *(uint *)(&DAT_100b3bba4 + (ulong)local_b0 * 8)) {
    uVar21 = (ulong)((iVar25 * local_a8 + uStack_d4) * local_a4 +
                    (*(uint *)(&DAT_100b3bba4 + (ulong)local_b0 * 8) >> 0x18) * local_d8);
    goto switchD_100349d3a_caseD_7;
  }
  uVar21 = 0;
  uVar9 = 0;
  switch(local_b0 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar9 = local_a8 * local_a4;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar9 = local_a8 * local_a4 * 3 >> 1;
    break;
  case 7:
    goto switchD_100349d3a_caseD_7;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    uVar9 = (local_a8 + 3 & 0xfffffffc) * local_a4 >> 2;
  }
  switch(local_b0 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xd:
  case 0xe:
    uVar21 = (ulong)((local_d8 * 2 + 2 & 0xfffffffc) + uStack_d4 * local_a4 + uVar9 * iVar25);
    break;
  case 8:
  case 9:
    uVar26 = uStack_d4;
    uVar20 = local_d8;
    goto LAB_100349f49;
  case 10:
    uVar21 = (ulong)(uStack_d4 * local_a4 + local_d8 * 8 + uVar9 * iVar25);
    break;
  case 0xf:
  case 0x10:
    uVar21 = (ulong)(uStack_d4 * local_a4 + local_d8 + uVar9 * iVar25);
    break;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    uVar21 = (ulong)((uStack_d4 >> 2) * local_a4 + (local_d8 & 0x7ffffffc) * 2 + uVar9 * iVar25);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x35:
  case 0x36:
  case 0x38:
    uVar26 = uStack_d4 >> 2;
    uVar20 = local_d8 & 0x3ffffffc;
LAB_100349f49:
    uVar21 = (ulong)(uVar26 * local_a4 + uVar20 * 4 + uVar9 * iVar25);
  }
switchD_100349d3a_caseD_7:
  iVar10 = FUN_10032df60(lVar2,uVar8,*(undefined4 *)(param_2 + 0xc));
  iVar25 = *(int *)(param_2 + 0x18);
  if (*(uint *)(&DAT_100b3bba4 + (ulong)local_c8 * 8) < 0x1000000) {
    uVar9 = 0;
    iVar27 = 0;
    switch(local_c8 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      uVar9 = local_c0 * local_bc;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar9 = local_c0 * local_bc * 3 >> 1;
      break;
    case 7:
      goto switchD_100349fcd_caseD_7;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      uVar9 = (local_c0 + 3 & 0xfffffffc) * local_bc >> 2;
    }
    iVar27 = 0;
    switch(local_c8 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xd:
    case 0xe:
      iVar27 = (local_e8 * 2 + 2 & 0xfffffffc) + local_bc * local_e4 + uVar9 * iVar25;
      break;
    case 8:
    case 9:
      iVar27 = local_bc * local_e4 + local_e8 * 4 + uVar9 * iVar25;
      break;
    case 10:
      iVar27 = local_bc * local_e4 + local_e8 * 8 + uVar9 * iVar25;
      break;
    case 0xf:
    case 0x10:
      iVar27 = local_bc * local_e4 + local_e8 + uVar9 * iVar25;
      break;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      iVar27 = (local_e4 >> 2) * local_bc + (local_e8 & 0x7ffffffc) * 2 + uVar9 * iVar25;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
    case 0x35:
    case 0x36:
    case 0x38:
      iVar27 = (local_e4 >> 2) * local_bc + (local_e8 & 0x3ffffffc) * 4 + uVar9 * iVar25;
    }
  }
  else {
    iVar27 = (iVar25 * local_c0 + local_e4) * local_bc +
             (*(uint *)(&DAT_100b3bba4 + (ulong)local_c8 * 8) >> 0x18) * local_e8;
  }
switchD_100349fcd_caseD_7:
  iVar25 = *(int *)(param_2 + 0x2c);
  iVar22 = *(int *)(param_2 + 0x38);
  if (iVar25 < iVar22) {
    lVar19 = lVar19 + uVar21 + uVar11;
    bVar12 = (&UNK_100b3bba7)[(ulong)local_b0 * 8];
    iVar24 = uStack_d0 - local_d8;
    iVar27 = iVar27 + iVar10;
    uVar11 = local_dc;
    uVar9 = local_e4;
    do {
      uVar26 = 0;
      bVar30 = uVar11 != uVar9;
      lVar28 = lVar19;
      iVar10 = iVar27;
      uVar11 = uVar9;
      if (bVar30) {
        do {
          FUN_1002fcd60(*(undefined8 *)(param_1 + 0x2770),lVar28,iVar10,iVar24 * (uint)bVar12);
          lVar28 = lVar28 + (ulong)local_a4;
          iVar10 = iVar10 + local_bc;
          uVar26 = uVar26 + 1;
        } while (uVar26 < local_dc - local_e4);
        iVar22 = *(int *)(param_2 + 0x38);
        uVar11 = local_dc;
        uVar9 = local_e4;
      }
      lVar19 = lVar19 + (ulong)uVar17;
      iVar27 = iVar27 + uVar18;
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar22);
  }
  if (local_118 == 0) {
    bVar12 = (byte)*(undefined4 *)(param_2 + 0xc);
    uVar17 = 1;
    if (*(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f) != 0) {
      uVar17 = *(uint *)(lVar2 + 0xc) >> (bVar12 & 0x1f);
    }
    if (uStack_110 == uVar17) {
      iVar25 = *(int *)(lVar2 + 0x24);
      if ((iVar25 != 2) && (iVar25 != 7)) {
        if (uStack_114 != 0) {
          return 0;
        }
        uVar17 = 1;
        if (*(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f) != 0) {
          uVar17 = *(uint *)(lVar2 + 0x10) >> (bVar12 & 0x1f);
        }
        if (uStack_10c != uVar17) {
          return 0;
        }
        if (iVar25 == 5) {
          if (local_108 != 0) {
            return 0;
          }
LAB_10034a281:
          uVar17 = 1;
          if (*(uint *)(lVar2 + 0x14) >> (bVar12 & 0x1f) != 0) {
            uVar17 = *(uint *)(lVar2 + 0x14) >> (bVar12 & 0x1f);
          }
          if (local_104 != uVar17) {
            return 0;
          }
        }
      }
LAB_10034a29e:
      puVar13 = (uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar8 * 4);
      *puVar13 = *puVar13 | 1 << (bVar12 & 0x1f);
    }
  }
  return 0;
}


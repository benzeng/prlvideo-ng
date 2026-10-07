
void FUN_100382480(long *param_1,long param_2,long *param_3,uint param_4,uint param_5,ulong param_6)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  bool bVar24;
  ulong local_120;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  long local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  long local_88;
  undefined4 local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  long local_50;
  undefined8 local_48;
  uint local_40;
  uint uStack_3c;
  undefined8 local_38;
  
  uVar22 = (ulong)param_4;
  iVar5 = FUN_10032df60(param_2,uVar22,param_5);
  if (iVar5 < 0) {
    return;
  }
  if (((*(ushort *)(param_2 + 0xb0) & 0x40) != 0) && (*(char *)(DAT_1011c8478 + 0x6a) != '\0')) {
    return;
  }
  lVar18 = 0;
  if ((param_6 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3))
  {
    lVar18 = *(long *)(*(long *)(param_2 + 0x40) + (param_6 & 0xffffffff) * 8);
  }
  uVar2 = *(uint *)(lVar18 + 0x1c);
  uVar12 = (ulong)uVar2;
  uVar11 = *(uint *)(lVar18 + 0x20);
  iVar5 = *(int *)(param_2 + 0x24);
  bVar4 = (byte)param_5;
  uVar15 = *(uint *)(param_2 + 0xc) >> (bVar4 & 0x1f);
  if (*(uint *)(param_2 + 0xc) >> (bVar4 & 0x1f) == 0) {
    uVar15 = 1;
  }
  if (iVar5 == 7) {
    uVar6 = FUN_10032df20();
    iVar5 = *(int *)(param_2 + 0x24);
  }
  else {
    uVar7 = *(uint *)(param_2 + 0x10) >> (bVar4 & 0x1f);
    uVar6 = 1;
    if (uVar7 != 0) {
      uVar6 = uVar7;
    }
  }
  if (iVar5 - 8U < 3) {
    uVar7 = FUN_10032df20();
  }
  else {
    uVar7 = 1;
    if (*(uint *)(param_2 + 0x14) >> (bVar4 & 0x1f) != 0) {
      uVar7 = *(uint *)(param_2 + 0x14) >> (bVar4 & 0x1f);
    }
  }
  local_48 = 0;
  _local_40 = CONCAT44(uVar6,uVar15);
  local_38 = (ulong)uVar7 << 0x20;
  lVar23 = *(long *)(param_1[1] + 0x920);
  uVar8 = FUN_10032df60(param_2,param_4,param_5);
  local_120 = (ulong)uVar8;
  iVar5 = FUN_10032e340(param_2,param_4,param_5);
  uVar8 = *(int *)(lVar18 + 0x20) - 0x1b;
  if ((((uVar8 < 0x3c) && ((0xc20000000000001U >> ((ulong)uVar8 & 0x3f) & 1) != 0)) ||
      (param_3 == (long *)0x0)) || (*(int *)(lVar18 + 0x14) == 0x806f)) {
    uVar19 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar9 = uVar15;
    uVar8 = uVar7;
    uVar20 = uVar6;
  }
  else {
    lVar21 = *param_3;
    local_40 = (uint)param_3[1];
    if (uVar15 <= local_40) {
      local_40 = uVar15;
    }
    uStack_3c = (uint)((ulong)param_3[1] >> 0x20);
    if (uVar6 <= uStack_3c) {
      uStack_3c = uVar6;
    }
    local_38._4_4_ = (uint)((ulong)param_3[2] >> 0x20);
    if (uVar7 <= local_38._4_4_) {
      local_38._4_4_ = uVar7;
    }
    local_38._0_4_ = (uint)param_3[2];
    local_48._0_4_ = (uint)lVar21;
    if (local_40 <= (uint)local_48) {
      return;
    }
    local_48._4_4_ = (uint)((ulong)lVar21 >> 0x20);
    uVar19 = local_48._4_4_;
    if (uStack_3c <= local_48._4_4_) {
      return;
    }
    if (local_38._4_4_ <= (uint)local_38) {
      return;
    }
    uVar14 = (uint)local_48;
    if (((&DAT_100b3e3b4)[(ulong)uVar11 * 8] & 4) != 0) {
      local_48 = (ulong)local_48._4_4_ << 0x20;
      uVar14 = 0;
      local_40 = uVar15;
      lVar21 = local_48;
    }
    local_48 = lVar21;
    if (0xffffff < *(uint *)(&DAT_100b3e3b4 + uVar12 * 8)) {
      iVar17 = (*(uint *)(&DAT_100b3e3b4 + uVar12 * 8) >> 0x18) * uVar14;
      iVar10 = ((uint)local_38 * uVar6 + uVar19) * iVar5;
      goto LAB_100382922;
    }
    uVar16 = 0;
    uVar8 = 0;
    switch(uVar2 - 0x53) {
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
      uVar16 = iVar5 * uVar6;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar16 = uVar6 * iVar5 * 3 >> 1;
      break;
    case 7:
      goto switchD_10038274b_caseD_7;
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
      uVar16 = (uVar6 + 3 & 0xfffffffc) * iVar5 >> 2;
    }
    uVar8 = 0;
    switch(uVar2 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xd:
    case 0xe:
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = (uVar14 * 2 + 2 & 0xfffffffc) + uVar19 * iVar5;
      break;
    default:
      goto switchD_10038274b_caseD_7;
    case 8:
    case 9:
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = uVar19 * iVar5 + uVar14 * 4;
      break;
    case 10:
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = uVar19 * iVar5 + uVar14 * 8;
      break;
    case 0xf:
    case 0x10:
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = uVar19 * iVar5 + uVar14;
      break;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = (uVar19 >> 2) * iVar5 + (uVar14 & 0x7ffffffc) * 2;
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
      iVar17 = uVar16 * (uint)local_38;
      iVar10 = (uVar19 >> 2) * iVar5 + (uVar14 & 0x3ffffffc) * 4;
    }
LAB_100382922:
    uVar8 = iVar10 + iVar17;
switchD_10038274b_caseD_7:
    local_120 = local_120 + uVar8;
    uVar16 = (uint)local_38;
    uVar9 = local_40;
    uVar8 = local_38._4_4_;
    uVar20 = uStack_3c;
  }
  uVar9 = uVar9 - uVar14;
  iVar10 = *(int *)(param_2 + 0x24);
  if (uVar9 == uVar15) {
    bVar24 = true;
    if ((iVar10 == 2) || (iVar10 == 7)) goto LAB_1003827d1;
    if (uVar20 - uVar19 != uVar6) goto LAB_1003827cf;
    if (iVar10 != 5) goto LAB_1003827d1;
    bVar24 = uVar8 - uVar16 == uVar7;
  }
  else {
LAB_1003827cf:
    bVar24 = false;
LAB_1003827d1:
    if (iVar10 - 8U < 3) {
      uVar8 = param_4 + 1;
      local_38 = CONCAT44(uVar8,param_4);
      uVar16 = param_4;
    }
    else if (iVar10 == 7) {
      local_48 = CONCAT44(param_4,(uint)local_48);
      uVar20 = param_4 + 1;
      _local_40 = CONCAT44(uVar20,local_40);
      uVar19 = param_4;
    }
  }
  lVar23 = lVar23 + local_120;
  if (uVar2 == uVar11) {
    uVar9 = FUN_10038e380(iVar5,uVar12);
    lVar21 = lVar23;
    uVar20 = uVar6;
    goto LAB_100382cc0;
  }
  uVar20 = uVar20 - uVar19;
  uVar7 = *(uint *)(&DAT_100b3e3b4 + (ulong)uVar11 * 8);
  if (uVar7 < 0x1000000) {
    uVar14 = 0;
    switch(uVar11 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar14 = uVar9 * 2 + 3 & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar14 = uVar9 + 3 & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar14 = uVar9 * 4;
      break;
    case 10:
      uVar14 = uVar9 * 8;
      goto switchD_100382974_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar14 = uVar9 * 2 + 6 & 0xfffffff8;
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
      uVar14 = uVar9 * 4 + 0xc & 0xfffffff0;
    }
    uVar19 = 0;
    switch(uVar11 - 0x53) {
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
switchD_100382974_caseD_0:
      uVar19 = uVar14 * uVar20;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar19 = uVar14 * uVar20 * 3 >> 1;
      break;
    case 7:
      uVar19 = uVar14 * uVar20 * 2;
      break;
    case 0x11:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      break;
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
      uVar19 = uVar14 * (uVar20 + 3 & 0xfffffffc) >> 2;
      break;
    default:
      uVar19 = 0;
    }
  }
  else {
    uVar19 = (uVar7 >> 0x18) * uVar9;
    if (3 < uVar11 - 0x73) {
      uVar19 = uVar19 + 3 & 0xfffffffc;
    }
    uVar19 = uVar19 * uVar20;
  }
  if (*(uint *)(&DAT_100b3e3b4 + uVar12 * 8) < 0x1000000) {
    uVar14 = 0;
    uVar13 = 0;
    switch(uVar2 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar13 = uVar15 * 2 + 3 & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar13 = uVar15 + 3 & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar13 = uVar15 << 2;
      break;
    case 10:
      uVar13 = uVar15 << 3;
      goto switchD_100382afe_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar13 = uVar15 * 2 + 6 & 0xfffffff8;
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
      uVar13 = uVar15 * 4 + 0xc & 0xfffffff0;
    }
    switch(uVar2 - 0x53) {
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
switchD_100382afe_caseD_0:
      uVar14 = uVar13 * uVar6;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar14 = uVar6 * uVar13 * 3 >> 1;
      break;
    case 7:
      uVar14 = uVar6 * uVar13 * 2;
      break;
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
      uVar14 = uVar13 * (uVar6 + 3 & 0xfffffffc) >> 2;
    }
  }
  else {
    uVar15 = (*(uint *)(&DAT_100b3e3b4 + uVar12 * 8) >> 0x18) * uVar15;
    if (3 < uVar2 - 0x73) {
      uVar15 = uVar15 + 3 & 0xfffffffc;
    }
    uVar14 = uVar15 * uVar6;
  }
  plVar3 = (long *)param_1[3];
  lVar21 = *plVar3;
  local_60 = uVar2;
  local_5c = uVar9;
  local_58 = uVar20;
  local_54 = iVar5;
  local_50 = lVar23;
  if ((ulong)(plVar3[1] - lVar21) < (ulong)((uVar8 - uVar16) * uVar19)) {
    FUN_10005a320(plVar3);
    lVar21 = *plVar3;
  }
  *(undefined4 *)(plVar3 + 3) = 0;
  if (0xffffff < uVar7) {
    local_6c = (uVar7 >> 0x18) * uVar9;
    if (3 < uVar11 - 0x73) {
      local_6c = local_6c + 3;
      goto LAB_100382c02;
    }
    goto switchD_100382be1_caseD_64;
  }
  local_6c = 0;
  switch(uVar11) {
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x5e:
  case 0x5f:
    local_6c = uVar9 * 2 + 3;
    goto LAB_100382c02;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x62:
  case 99:
    local_6c = uVar9 + 3;
LAB_100382c02:
    local_6c = local_6c & 0xfffffffc;
    break;
  case 0x5b:
  case 0x5c:
  case 0x60:
  case 0x61:
    local_6c = uVar9 * 4;
    break;
  case 0x5d:
    local_6c = uVar9 * 8;
    break;
  case 0x65:
  case 0x66:
  case 0x6b:
  case 0x6c:
  case 0x87:
  case 0x8a:
    local_6c = uVar9 * 2 + 6 & 0xfffffff8;
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
    local_6c = uVar9 * 4 + 0xc & 0xfffffff0;
  }
switchD_100382be1_caseD_64:
  local_78 = uVar11;
  local_74 = uVar9;
  local_70 = uVar20;
  local_68 = lVar21;
  if (uVar8 != (uint)local_38) {
    uVar15 = 0;
    do {
      iVar10 = FUN_1003c6660(&local_60,0,&local_78,0,1);
      if (iVar10 != 1) {
        return;
      }
      local_50 = local_50 + (ulong)uVar14;
      local_68 = local_68 + (ulong)uVar19;
      uVar15 = uVar15 + 1;
    } while (uVar15 < local_38._4_4_ - (uint)local_38);
  }
LAB_100382cc0:
  local_80 = *(undefined4 *)(param_2 + 0x20);
  local_98 = uVar11;
  local_94 = uVar9;
  local_90 = uVar20;
  local_88 = lVar21;
  (**(code **)(*param_1 + 0x30))();
  if ((!bVar24) && ((*(uint *)(*(long *)(lVar18 + 0x88) + uVar22 * 4) >> (param_5 & 0x1f) & 1) == 0)
     ) {
    FUN_100383600(param_1,param_2);
  }
  puVar1 = (uint *)(*(long *)(lVar18 + 0x88) + uVar22 * 4);
  *puVar1 = *puVar1 | 1 << (bVar4 & 0x1f);
  (*DAT_1011c5768)(*(undefined4 *)(lVar18 + 0x14),*(undefined4 *)(lVar18 + 0xc));
  uVar11 = *(int *)(lVar18 + 0x20) - 0x1b;
  if (((uVar11 < 0x3c) && ((0xc20000000000001U >> ((ulong)uVar11 & 0x3f) & 1) != 0)) ||
     (*(int *)(lVar18 + 0x14) == 0x806f)) {
    FUN_1003818b0();
  }
  else {
    FUN_100383ac0();
  }
  (*DAT_1011c5768)(*(undefined4 *)(lVar18 + 0x14),0);
  if ((*(uint3 *)(param_2 + 0xb0) & 2) != 0) {
    *(undefined1 *)(param_2 + 0xac) = 1;
  }
  *(undefined1 *)(param_2 + 0xd0) = 0;
  if ((*(uint3 *)(param_2 + 0xb0) & 0x2000) == 0) {
    return;
  }
  if ((int)uVar2 < 0x3d) {
    if ((int)uVar2 < 0x2f) {
      if ((int)uVar2 < 0x28) {
        if ((uVar2 == 0x1f) || (uVar2 == 0x21)) {
          local_b0 = 0x20;
          goto LAB_100382eb9;
        }
      }
      else {
        local_b0 = 0x29;
        if ((uVar2 == 0x28) || (uVar2 == 0x2a)) goto LAB_100382eb9;
      }
    }
    else if (uVar2 == 0x2f) {
      local_b0 = 0x30;
      goto LAB_100382eb9;
    }
  }
  else if (uVar2 == 0x3d) {
    local_b0 = 0x3e;
    goto LAB_100382eb9;
  }
  local_b0 = uVar2;
LAB_100382eb9:
  local_c4 = local_40 - (uint)local_48;
  local_c0 = uStack_3c - local_48._4_4_;
  local_c8 = 0x39;
  local_bc = local_c4 * 0x10;
  local_b8 = *(undefined8 *)(param_2 + 0xb8);
  local_ac = local_c4;
  local_a8 = local_c0;
  local_a4 = iVar5;
  local_a0 = lVar23;
  FUN_1003c6660(&local_b0,0,&local_c8,0,1);
  return;
}


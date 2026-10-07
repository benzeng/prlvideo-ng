
void FUN_100389f90(long *param_1,long param_2,int *param_3,uint param_4,undefined4 param_5,
                  uint *param_6,int *param_7,undefined8 *param_8)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  bool bVar14;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar15;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  long local_60;
  uint5 local_58;
  undefined3 uStack_53;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar15 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  uVar10 = 0;
  if (*(int *)(param_2 + 0x24) != 5) {
    uVar10 = (ulong)param_4;
  }
  lVar11 = 0;
  uVar6 = uVar10;
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar6 = 0;
  }
  if (uVar6 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
    lVar11 = *(long *)(*(long *)(param_2 + 0x40) + uVar6 * 8);
  }
  if (param_3[2] - *param_3 == param_7[2] - *param_7) {
    bVar14 = param_3[3] - param_3[1] != param_7[3] - param_7[1];
  }
  else {
    bVar14 = true;
  }
  uVar3 = *(uint *)(lVar11 + 0x20);
  local_40 = *(undefined8 *)param_3;
  local_38 = *(undefined8 *)(param_3 + 2);
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  if ((bVar14) || ((*(byte *)(lVar11 + 0xac) & 0x14) != 0x10)) {
    uVar3 = FUN_10038e450(*param_6);
    cVar2 = FUN_10038e0e0(uVar3);
    if (cVar2 == '\0') {
      uVar3 = FUN_10038e600(*param_6);
    }
    local_40 = 0;
    local_38 = CONCAT44(param_7[3] - param_7[1],param_7[2] - *param_7);
    FUN_1003895c0(param_1);
    (**(code **)(*param_1 + 0x38))(param_1,param_1[5],0,0);
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    (*DAT_1011c5768)(*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0xc));
    if (*(char *)(DAT_1011c8478 + 0x84) == '\0') {
      if (((*(byte *)(lVar11 + 0xac) & 8) == 0) && (*(char *)(lVar11 + 0x6c) != '\0')) {
        *(undefined1 *)(lVar11 + 0x6c) = 0;
        *(byte *)(lVar11 + 0x75) = *(byte *)(lVar11 + 0x75) | 8;
      }
      FUN_100399630(lVar11);
    }
    else {
      (*DAT_1011c5760)(uVar4,(int)param_1[0x18]);
    }
    FUN_1003992d0(lVar11);
    local_48 = *(undefined4 *)(param_8 + 2);
    uStack_53 = (undefined3)((ulong)*param_8 >> 0x28);
    local_58 = (uint5)(uint)*param_8;
    local_50 = 0x8e;
    (*DAT_1011c5770)(*(undefined4 *)((long)param_1 + 0x44));
    iVar5 = (int)uVar10 + 0x8515;
    if (*(int *)(lVar11 + 0x14) != 0x8513) {
      iVar5 = *(int *)(lVar11 + 0x14);
    }
    bVar13 = (byte)param_5;
    uVar12 = *(uint *)(param_2 + 0xc) >> (bVar13 & 0x1f);
    if (*(uint *)(param_2 + 0xc) >> (bVar13 & 0x1f) == 0) {
      uVar12 = 1;
    }
    uVar9 = *(uint *)(param_2 + 0x10) >> (bVar13 & 0x1f);
    if (*(uint *)(param_2 + 0x10) >> (bVar13 & 0x1f) == 0) {
      uVar9 = 1;
    }
    uVar8 = *(uint *)(param_2 + 0x14) >> (bVar13 & 0x1f);
    if (*(uint *)(param_2 + 0x14) >> (bVar13 & 0x1f) == 0) {
      uVar8 = 1;
    }
    (**(code **)(*param_1 + 0x28))
              (param_1,iVar5,*(undefined4 *)(lVar11 + 0x1c),param_3,uVar10,param_5,
               CONCAT44(uVar15,uVar12),uVar9,uVar8,(*(ushort *)(param_2 + 0xb0) & 0x40) >> 6,
               (*(byte *)(lVar11 + 0xac) & 4) >> 2,param_1[5],&local_40,0,0,&local_58,uVar4);
    (*DAT_1011c5be8)(5,0,4);
    (*DAT_1011c5770)(0);
    (*DAT_1011c5768)(*(undefined4 *)(lVar11 + 0x14),0);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,lVar11,uVar10,param_5);
  }
  if ((uVar3 == *param_6) && (*(char *)((long)param_8 + 4) == '\0')) {
    FUN_100389b40();
    return;
  }
  plVar1 = (long *)param_1[3];
  iVar5 = (int)local_38 - (int)local_40;
  iVar7 = local_38._4_4_ - local_40._4_4_;
  uVar12 = *(uint *)(&DAT_100b3e3b4 + (ulong)uVar3 * 8);
  if (uVar12 < 0x1000000) {
    uVar9 = 0;
    uVar8 = 0;
    switch(uVar3 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar8 = iVar5 * 2 + 3U & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar8 = iVar5 + 3U & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar8 = iVar5 * 4;
      break;
    case 10:
      uVar8 = iVar5 * 8;
      goto switchD_10038a410_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar8 = iVar5 * 2 + 6U & 0xfffffff8;
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
      uVar8 = iVar5 * 4 + 0xcU & 0xfffffff0;
    }
    switch(uVar3 - 0x53) {
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
switchD_10038a410_caseD_0:
      uVar9 = uVar8 * iVar7;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar9 = iVar7 * uVar8 * 3 >> 1;
      break;
    case 7:
      uVar9 = iVar7 * uVar8 * 2;
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
      uVar9 = uVar8 * (iVar7 + 3U & 0xfffffffc) >> 2;
    }
  }
  else {
    uVar9 = (uVar12 >> 0x18) * iVar5;
    if (3 < uVar3 - 0x73) {
      uVar9 = uVar9 + 3 & 0xfffffffc;
    }
    uVar9 = uVar9 * iVar7;
  }
  local_60 = *plVar1;
  if ((ulong)(plVar1[1] - local_60) < (ulong)uVar9) {
    FUN_10005a320(plVar1);
    local_60 = *plVar1;
  }
  *(undefined4 *)(plVar1 + 3) = 0;
  iVar5 = (int)local_38 - (int)local_40;
  if (uVar12 < 0x1000000) {
    uVar12 = 0;
    switch(uVar3) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5e:
    case 0x5f:
      uVar12 = iVar5 * 2;
      goto LAB_10038a4b3;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x62:
    case 99:
      uVar12 = iVar5 + 3U & 0xfffffffc;
      break;
    case 0x5b:
    case 0x5c:
    case 0x60:
    case 0x61:
      uVar12 = iVar5 * 4;
      break;
    case 0x5d:
      uVar12 = iVar5 * 8;
      break;
    case 0x65:
    case 0x66:
    case 0x6b:
    case 0x6c:
    case 0x87:
    case 0x8a:
      uVar12 = iVar5 * 2 + 6U & 0xfffffff8;
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
      uVar12 = iVar5 * 4 + 0xcU & 0xfffffff0;
    }
  }
  else {
    uVar12 = (uVar12 >> 0x18) * iVar5;
    if (uVar3 - 0x73 < 4) goto switchD_10038a48e_caseD_64;
LAB_10038a4b3:
    uVar12 = uVar12 + 3 & 0xfffffffc;
  }
switchD_10038a48e_caseD_64:
  lVar11 = local_60;
  FUN_100389b40();
  local_78 = (int)local_38 - (int)local_40;
  local_74 = local_38._4_4_ - local_40._4_4_;
  local_80 = 0;
  local_7c = 0;
  local_90 = *param_7;
  local_8c = param_7[1];
  local_88 = param_7[2];
  local_84 = param_7[3];
  local_70 = uVar3;
  local_6c = local_78;
  local_68 = local_74;
  local_64 = uVar12;
  if (*(char *)((long)param_8 + 4) == '\0') {
    FUN_1003c6660(&local_70,&local_80,param_6,&local_90,1);
  }
  else {
    FUN_1003c8820(&local_70,&local_80,param_6,&local_90,*(undefined4 *)((long)param_8 + 0xc),
                  0xffffffff,lVar11);
  }
  return;
}


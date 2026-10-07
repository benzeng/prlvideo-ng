
void FUN_1003890c0(long *param_1,long param_2,uint *param_3,uint param_4,uint param_5,long param_6,
                  uint *param_7,uint param_8,undefined4 param_9,undefined8 param_10)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  long local_88;
  uint *local_80;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  ulong local_68;
  uint *local_60;
  uint local_58;
  undefined4 uStack_54;
  long local_50;
  ulong local_48;
  uint *local_40;
  uint local_38;
  uint uStack_34;
  
  uVar11 = (ulong)param_4;
  local_48 = 0;
  uVar8 = uVar11;
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar8 = local_48;
  }
  if (uVar8 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
    local_48 = *(ulong *)(*(long *)(param_2 + 0x40) + uVar8 * 8);
  }
  if (*(int *)(param_2 + 0x24) == 5) {
    param_4 = param_3[4];
  }
  uVar12 = (ulong)param_8;
  local_68 = 0;
  uVar8 = uVar12;
  if ((*(ushort *)(param_6 + 0xb0) & 1) != 0) {
    uVar8 = local_68;
  }
  if (uVar8 < (ulong)(*(long *)(param_6 + 0x48) - *(long *)(param_6 + 0x40) >> 3)) {
    local_68 = *(ulong *)(*(long *)(param_6 + 0x40) + uVar8 * 8);
  }
  local_60 = param_7;
  if (*(int *)(param_6 + 0x24) == 5) {
    param_8 = param_7[4];
  }
  uStack_54 = param_9;
  if ((*(uint *)(*(long *)(local_48 + 0x88) + uVar11 * 4) >> (param_5 & 0x1f) & 1) == 0) {
    return;
  }
  if (param_3[2] <= *param_3) {
    return;
  }
  if (param_3[3] <= param_3[1]) {
    return;
  }
  iVar9 = param_3[5] - param_3[4];
  if (param_3[5] < param_3[4] || iVar9 == 0) {
    return;
  }
  if (param_7[2] <= *param_7) {
    return;
  }
  if (param_7[3] <= param_7[1]) {
    return;
  }
  if (param_7[5] <= param_7[4]) {
    return;
  }
  iVar6 = 1;
  if ((*(int *)(param_2 + 0x24) == 5) && (iVar6 = 1, *(int *)(param_6 + 0x24) == 5)) {
    iVar6 = iVar9;
  }
  local_70 = param_6;
  local_58 = param_8;
  local_50 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  uStack_34 = param_5;
  uVar7 = (**(code **)(*param_1 + 0x40))(param_1,&local_50,&local_70);
  if ((uVar7 & 0xfffffffe) == 4) {
    bVar3 = (byte)param_5 & 0x1f;
    uVar4 = *(uint *)(param_2 + 0xc) >> bVar3;
    if (*(uint *)(param_2 + 0xc) >> bVar3 == 0) {
      uVar4 = 1;
    }
    bVar3 = (byte)param_5 & 0x1f;
    uVar5 = *(uint *)(param_2 + 0x10) >> bVar3;
    if (*(uint *)(param_2 + 0x10) >> bVar3 == 0) {
      uVar5 = 1;
    }
    FUN_1003895c0(param_1,uVar4,uVar5,*(undefined4 *)(local_48 + 0x20));
  }
  switch(uVar7) {
  case 1:
    (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
    (**(code **)(*param_1 + 0x38))(param_1,local_48,CONCAT44(uStack_34,local_38),uStack_34);
    (**(code **)(*param_1 + 0x48))(param_1);
    (*DAT_1011c5768)(*(undefined4 *)(local_68 + 0x14),*(undefined4 *)(local_68 + 0xc));
    iVar9 = local_58 + 0x8515;
    if (*(int *)(local_68 + 0x14) != 0x8513) {
      iVar9 = *(int *)(local_68 + 0x14);
    }
    (*DAT_1011c5ad8)(iVar9,uStack_54,*local_60,local_60[1],*local_40,local_40[1],
                     local_40[2] - *local_40,local_40[3] - local_40[1]);
    break;
  case 2:
    (**(code **)(*param_1 + 0x58))(param_1);
    plVar10 = &local_50;
    goto LAB_10038953f;
  case 3:
    (**(code **)(*param_1 + 0x30))(param_1,&local_50,&local_70,iVar6,param_10);
    goto switchD_10038929a_default;
  case 4:
    lVar2 = param_1[5];
    (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
    (**(code **)(*param_1 + 0x38))(param_1,local_48,CONCAT44(uStack_34,local_38),uStack_34);
    (**(code **)(*param_1 + 0x48))(param_1);
    (*DAT_1011c5768)(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0xc));
    iVar9 = 0x8515;
    if (*(int *)(lVar2 + 0x14) != 0x8513) {
      iVar9 = *(int *)(lVar2 + 0x14);
    }
    (*DAT_1011c5ad8)(iVar9,0,*param_3,param_3[1],*local_40,local_40[1],local_40[2] - *local_40,
                     local_40[3] - local_40[1]);
    (*DAT_1011c5768)(*(undefined4 *)(lVar2 + 0x14),0);
    (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
    (**(code **)(*param_1 + 0x38))(param_1,lVar2,0,0);
    (**(code **)(*param_1 + 0x48))(param_1);
    (*DAT_1011c5768)(*(undefined4 *)(local_68 + 0x14),*(undefined4 *)(local_68 + 0xc));
    iVar9 = local_58 + 0x8515;
    if (*(int *)(local_68 + 0x14) != 0x8513) {
      iVar9 = *(int *)(local_68 + 0x14);
    }
    (*DAT_1011c5ad8)(iVar9,uStack_54,*local_60,local_60[1],*param_3,param_3[1],param_3[2] - *param_3
                     ,param_3[3] - param_3[1]);
    break;
  case 5:
    local_88 = param_1[5];
    local_78 = 0;
    local_74 = 0;
    local_a8 = 1;
    local_98 = 0;
    local_a4 = 0;
    local_a0 = 0x8e;
    local_90 = param_2;
    local_80 = param_3;
    (**(code **)(*param_1 + 0x58))(param_1);
    plVar10 = &local_90;
    FUN_100388800(param_1,&local_50,plVar10,iVar6,&local_a8);
LAB_10038953f:
    FUN_100388800(param_1,plVar10,&local_70,iVar6,param_10);
    (**(code **)(*param_1 + 0x60))(param_1);
  default:
    goto switchD_10038929a_default;
  }
  (*DAT_1011c5768)(*(undefined4 *)(local_68 + 0x14),0);
switchD_10038929a_default:
  puVar1 = (uint *)(*(long *)(param_6 + 0x90) + uVar12 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_9 & 0x1f));
  if ((*(ushort *)(param_6 + 0xb0) & 2) != 0) {
    *(undefined1 *)(param_6 + 0xac) = 1;
  }
  *(undefined1 *)(param_6 + 0xd0) = 0;
  return;
}


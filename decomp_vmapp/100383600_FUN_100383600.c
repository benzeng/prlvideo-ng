
void FUN_100383600(long param_1,long param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long local_70;
  
  uVar7 = (ulong)param_3;
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar7 = 0;
  }
  local_70 = 0;
  if (uVar7 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
    local_70 = *(long *)(*(long *)(param_2 + 0x40) + uVar7 * 8);
  }
  iVar11 = *(int *)(param_2 + 0x24);
  if (iVar11 == 7) {
    uVar4 = FUN_10032df20(param_2);
    iVar11 = *(int *)(param_2 + 0x24);
  }
  else {
    uVar4 = 1;
    if (*(uint *)(param_2 + 0x10) >> (param_4 & 0x1f) != 0) {
      uVar4 = *(uint *)(param_2 + 0x10) >> (param_4 & 0x1f);
    }
  }
  uVar8 = *(uint *)(param_2 + 0xc) >> (param_4 & 0x1f);
  if (*(uint *)(param_2 + 0xc) >> (param_4 & 0x1f) == 0) {
    uVar8 = 1;
  }
  if (iVar11 - 8U < 3) {
    uVar5 = FUN_10032df20(param_2);
    iVar11 = *(int *)(param_2 + 0x24);
  }
  else {
    uVar5 = 1;
    if (*(uint *)(param_2 + 0x14) >> (param_4 & 0x1f) != 0) {
      uVar5 = *(uint *)(param_2 + 0x14) >> (param_4 & 0x1f);
    }
  }
  uVar9 = 0;
  if (iVar11 - 8U < 3) {
    uVar5 = param_3 + 1;
    uVar6 = param_3;
  }
  else if (iVar11 == 7) {
    uVar4 = param_3 + 1;
    uVar6 = 0;
    uVar9 = param_3;
  }
  else {
    uVar6 = 0;
  }
  uVar2 = *(uint *)(local_70 + 0x20);
  plVar3 = *(long **)(param_1 + 0x18);
  iVar11 = uVar4 - uVar9;
  if (0xffffff < *(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8)) {
    uVar8 = (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8) >> 0x18) * uVar8;
    if (3 < uVar2 - 0x73) {
      uVar8 = uVar8 + 3 & 0xfffffffc;
    }
    uVar4 = uVar8 * iVar11;
    goto switchD_1003837de_caseD_11;
  }
  uVar4 = 0;
  uVar9 = 0;
  switch(uVar2 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    uVar9 = uVar8 * 2 + 3 & 0xfffffffc;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
    uVar9 = uVar8 + 3 & 0xfffffffc;
    break;
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    uVar9 = uVar8 << 2;
    break;
  case 10:
    uVar9 = uVar8 << 3;
    goto switchD_1003837de_caseD_0;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    uVar9 = uVar8 * 2 + 6 & 0xfffffff8;
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
    uVar9 = uVar8 * 4 + 0xc & 0xfffffff0;
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
switchD_1003837de_caseD_0:
    uVar4 = uVar9 * iVar11;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar4 = iVar11 * uVar9 * 3 >> 1;
    break;
  case 7:
    uVar4 = iVar11 * uVar9 * 2;
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
    uVar4 = uVar9 * (iVar11 + 3U & 0xfffffffc) >> 2;
  }
switchD_1003837de_caseD_11:
  uVar4 = (uVar5 - uVar6) * uVar4;
  if (*(uint *)(plVar3 + 3) < uVar4) {
    lVar10 = *plVar3;
    if ((ulong)(plVar3[1] - lVar10) < (ulong)uVar4) {
      FUN_10005a320(plVar3);
      lVar10 = *plVar3;
    }
    ___bzero(lVar10,(ulong)uVar4);
    *(uint *)(plVar3 + 3) = uVar4;
  }
  (*DAT_1011c5768)(*(undefined4 *)(local_70 + 0x14),*(undefined4 *)(local_70 + 0xc));
  FUN_100383ac0();
  puVar1 = (uint *)(*(long *)(local_70 + 0x88) + (ulong)param_3 * 4);
  *puVar1 = *puVar1 | 1 << (param_4 & 0x1f);
  (*DAT_1011c5768)(*(undefined4 *)(local_70 + 0x14),0);
  return;
}


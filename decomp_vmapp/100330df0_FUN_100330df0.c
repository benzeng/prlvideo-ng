
undefined1 FUN_100330df0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  if ((*(byte *)(param_2 + 0x45) & 0x20) != 0) {
    lVar4 = FUN_10032ebe0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x48));
    if (lVar4 == 0) {
      return 0;
    }
    if (*(long **)(lVar4 + 0x48) != *(long **)(lVar4 + 0x40)) {
      lVar4 = **(long **)(lVar4 + 0x40);
      if (lVar4 != 0) {
        FUN_1002fc960(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar4 + 0xc),
                      *(undefined4 *)(lVar4 + 0x14));
        return 1;
      }
      return 0;
    }
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar7 = (ulong)*(uint *)(param_2 + 0x24) + *(long *)(lVar4 + 0x920);
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 0x59565955) {
    if (((iVar1 - 0x15U < 2) || (iVar1 == 0x32315659)) || (iVar1 == 0x32595559)) goto LAB_100330f7e;
  }
  else if (iVar1 == 0x59565955) goto LAB_100330f7e;
  uVar3 = (ulong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x28)) * 4;
  uVar6 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
  if (uVar3 < uVar6 || uVar3 - uVar6 == 0) {
    if ((uVar3 < uVar6) &&
       (lVar4 = *(long *)(param_1 + 0x78) + uVar3, *(long *)(param_1 + 0x80) != lVar4)) {
      *(long *)(param_1 + 0x80) = lVar4;
    }
  }
  else {
    FUN_1003324b0((undefined8 *)(param_1 + 0x78));
    iVar1 = *(int *)(param_2 + 0x34);
  }
  piVar5 = &DAT_100b3ab94;
  uVar3 = 0;
  local_40 = 0x8e;
  do {
    if (*piVar5 == iVar1) {
      local_40 = *(undefined4 *)(&DAT_100b3ab90 + uVar3 * 0x24);
      break;
    }
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + 9;
  } while (uVar3 < 0x3d);
  local_54 = *(int *)(param_2 + 0x28);
  local_50 = *(undefined4 *)(param_2 + 0x2c);
  local_34 = *(undefined4 *)(param_2 + 0x30);
  local_58 = 0;
  local_4c = local_54 << 2;
  local_48 = *(undefined8 *)(param_1 + 0x78);
  local_3c = local_54;
  local_38 = local_50;
  local_30 = lVar7;
  iVar2 = FUN_1003c6660(&local_40,0,&local_58,0,1);
  if (iVar2 != 1) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x78);
  iVar2 = local_4c;
LAB_100330f7e:
  FUN_1002fc6d0(lVar4,lVar7,iVar2);
  return 1;
}


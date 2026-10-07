
undefined8 FUN_1003636d0(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_44;
  
  if (*(int *)(param_2 + 4) == 0) {
    puVar3 = &DAT_1011c5bc0;
  }
  else {
    puVar3 = &DAT_1011c5c78;
  }
  (*(code *)*puVar3)(0xb71);
  (*DAT_1011c5ba0)(*(int *)(param_2 + 8) == 1);
  if (7 < *(int *)(param_2 + 0xc) - 1U) {
    return 3;
  }
  if (*(int *)(param_2 + 0xc) == 0x301) {
    return 3;
  }
  (*DAT_1011c5b98)();
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar3 = &DAT_1011c5bc0;
  }
  else {
    puVar3 = &DAT_1011c5c78;
  }
  (*(code *)*puVar3)(0xb90);
  (*DAT_1011c6b18)(*(undefined1 *)(param_2 + 0x1d));
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  iVar7 = 0x1e00;
  iVar2 = 0x1e00;
  uVar8 = 0x1e00;
  iVar5 = 0x207;
  if (*(int *)(param_2 + 0x14) != 0) {
    if (7 < *(int *)(param_2 + 0x2c) - 1U) {
      return 3;
    }
    iVar5 = *(int *)(param_2 + 0x2c) + 0x1ff;
    if (iVar5 == 0x500) {
      return 3;
    }
    uVar4 = *(int *)(param_2 + 0x20) - 1;
    iVar2 = 0x500;
    iVar7 = 0x500;
    if (uVar4 < 8) {
      iVar7 = *(int *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
    }
    uVar4 = *(int *)(param_2 + 0x24) - 1;
    if (uVar4 < 8) {
      iVar2 = *(int *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
    }
    uVar4 = *(int *)(param_2 + 0x28) - 1;
    if (7 < uVar4) {
      return 3;
    }
    if (iVar7 == 0x500) {
      return 3;
    }
    if (iVar2 == 0x500) {
      return 3;
    }
    uVar8 = *(undefined4 *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
  }
  local_44 = 0x1e00;
  iVar6 = 0x207;
  (*DAT_1011c6b10)(0x404,iVar5,param_3);
  (*DAT_1011c6b30)(0x404,iVar7,iVar2,uVar8);
  iVar7 = 0x1e00;
  uVar8 = 0x1e00;
  if (*(int *)(param_2 + 0x18) != 0) {
    if (7 < *(int *)(param_2 + 0x3c) - 1U) {
      return 3;
    }
    iVar6 = *(int *)(param_2 + 0x3c) + 0x1ff;
    if (iVar6 == 0x500) {
      return 3;
    }
    uVar4 = *(int *)(param_2 + 0x30) - 1;
    iVar7 = 0x500;
    local_44 = 0x500;
    if (uVar4 < 8) {
      local_44 = *(int *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
    }
    uVar4 = *(int *)(param_2 + 0x34) - 1;
    if (uVar4 < 8) {
      iVar7 = *(int *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
    }
    uVar4 = *(int *)(param_2 + 0x38) - 1;
    if (7 < uVar4) {
      return 3;
    }
    if (local_44 == 0x500) {
      return 3;
    }
    if (iVar7 == 0x500) {
      return 3;
    }
    uVar8 = *(undefined4 *)(&DAT_100b3cee0 + (long)(int)uVar4 * 4);
  }
  (*DAT_1011c6b10)(0x405,iVar6,param_3,uVar1);
  (*DAT_1011c6b30)(0x405,local_44,iVar7,uVar8);
  return 0;
}


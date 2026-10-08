
undefined8 FUN_100bcea60(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x48) == 0x4000)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  if ((uVar3 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar3 | 1;
    FUN_100bd2dc0(param_1,1,0);
    if (*(int *)(*(long *)(param_1 + 0x80) + 0x1d4) != 0) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x80) + 0x1d4) == 0) {
    if ((uVar3 & 2) == 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0,0,0,0);
      uVar3 = *(uint *)(param_1 + 0x44);
      if ((uVar3 & 2) == 0) {
        return 0xffffffff;
      }
      goto LAB_100bceb13;
    }
  }
  else {
    iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(param_1);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x44);
LAB_100bceb13:
  if ((uVar3 != 3) || (uVar2 = 1, *(int *)(*(long *)(param_1 + 0x80) + 0x1d4) != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}


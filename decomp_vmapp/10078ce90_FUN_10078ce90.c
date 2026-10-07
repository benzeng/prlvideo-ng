
undefined8 FUN_10078ce90(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  uint local_20;
  
  local_20 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  if ((local_20 - *(int *)(param_1 + 8) < param_2) &&
     (uVar3 = 0xfffffffe, *(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = local_20;
    do {
      uVar2 = uVar2 * 2;
    } while (uVar2 < *(int *)(param_1 + 8) + param_2);
    local_28 = *(undefined8 *)(param_1 + 0x10);
    iVar1 = FUN_10078cba0(&local_28);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_28;
      *(uint *)(param_1 + 0x18) = local_20;
      uVar3 = 0;
    }
  }
  return uVar3;
}


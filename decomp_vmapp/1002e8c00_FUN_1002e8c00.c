
undefined4 FUN_1002e8c00(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x128) - *(uint *)(param_1 + 0x147);
  if (*(uint *)(param_2 + 0x43c) < uVar3) {
    uVar3 = *(uint *)(param_2 + 0x43c);
  }
  _memcpy((void *)(param_2 + 0x4d8),
          (void *)((ulong)*(uint *)(param_1 + 0x147) + *(long *)(param_1 + 0x50)),(ulong)uVar3);
  uVar2 = *(int *)(param_1 + 0x147) + uVar3;
  *(uint *)(param_1 + 0x147) = uVar2;
  *(undefined4 *)(param_2 + 0x468) = 0;
  *(uint *)(param_2 + 0x454) = uVar3;
  uVar1 = 4;
  if (uVar2 < *(uint *)(param_1 + 0x128)) {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
  }
  return uVar1;
}


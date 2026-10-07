
undefined8 FUN_100824fd0(long param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    if (CARRY8(param_3 * 8,*(ulong *)(param_1 + 0x40))) {
      lVar3 = lVar3 + 1;
      *(long *)(param_1 + 0x48) = lVar3;
    }
    pvVar1 = (void *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x48) = (param_3 >> 0x3d) + lVar3;
    *(ulong *)(param_1 + 0x40) = param_3 * 8 + *(ulong *)(param_1 + 0x40);
    uVar2 = (ulong)*(uint *)(param_1 + 0xd0);
    if (uVar2 != 0) {
      uVar4 = 0x80 - uVar2;
      if (param_3 < uVar4) {
        _memcpy((void *)(uVar2 + (long)pvVar1),param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      _memcpy((void *)(uVar2 + (long)pvVar1),param_2,uVar4);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - uVar4;
      param_2 = (void *)((long)param_2 + uVar4);
      _sha512_block_data_order(param_1,pvVar1,1);
    }
    uVar2 = param_3;
    if (0x7f < param_3) {
      _sha512_block_data_order(param_1,param_2,param_3 >> 7);
      uVar2 = param_3 & 0x7f;
      param_2 = (void *)((long)param_2 + (param_3 - uVar2));
    }
    if (uVar2 != 0) {
      _memcpy(pvVar1,param_2,uVar2);
      *(int *)(param_1 + 0xd0) = (int)uVar2;
    }
  }
  return 1;
}


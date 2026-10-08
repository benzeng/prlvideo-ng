
undefined8 FUN_100bf9460(long param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar2 = (int)param_3 * 8;
    iVar3 = *(int *)(param_1 + 0x14);
    if (CARRY4(uVar2,*(uint *)(param_1 + 0x10))) {
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x14) = iVar3;
    }
    *(int *)(param_1 + 0x14) = (int)(param_3 >> 0x1d) + iVar3;
    *(uint *)(param_1 + 0x10) = uVar2 + *(uint *)(param_1 + 0x10);
    uVar4 = (ulong)*(uint *)(param_1 + 0x58);
    if (uVar4 != 0) {
      pvVar1 = (void *)(param_1 + 0x18 + uVar4);
      if ((uVar4 + param_3 | param_3) < 0x40) {
        _memcpy(pvVar1,param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _memcpy(pvVar1,param_2,0x40 - uVar4);
      _md5_block_asm_data_order(param_1,(undefined8 *)(param_1 + 0x18),1);
      param_2 = (void *)((long)param_2 + (0x40 - uVar4));
      param_3 = param_3 - (0x40 - uVar4);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      _md5_block_asm_data_order(param_1,param_2,uVar4);
      param_2 = (void *)((long)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      _memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}


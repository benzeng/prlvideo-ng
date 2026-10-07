
ulong FUN_1002e5a30(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(int *)(param_1 + 0xc) - *(uint *)(param_1 + 8);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    uVar2 = (ulong)uVar1;
    _memcpy(param_2,(void *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8)),uVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar1;
  }
  return uVar2;
}


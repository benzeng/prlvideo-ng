
uint FUN_10074ac90(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4018);
  uVar2 = 0x10000;
  if (param_3 < 0x10001) {
    uVar2 = param_3;
  }
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  _memmove(param_2,(void *)(((ulong)uVar1 - (long)(int)uVar2) + *(long *)(param_1 + 0x4008)),
           (long)(int)uVar2);
  *(void **)(param_1 + 0x4008) = param_2;
  *(uint *)(param_1 + 0x4018) = uVar2;
  return uVar2;
}



long FUN_10074e8b0(long param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  
  pvVar2 = *(void **)(param_1 + 0x4010);
  uVar1 = *(uint *)(param_1 + 0x4018);
  uVar3 = 0x10000;
  if ((ulong)uVar1 < 0x10000) {
    uVar3 = uVar1;
  }
  sVar4 = (size_t)(int)uVar3;
  _memmove(pvVar2,(void *)((uVar1 - sVar4) + *(long *)(param_1 + 0x4008)),sVar4);
  *(void **)(param_1 + 0x4008) = pvVar2;
  *(uint *)(param_1 + 0x4018) = uVar3;
  return sVar4 + *(long *)(param_1 + 0x4010);
}



ulong FUN_100c599b0(long param_1,void *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)param_3;
  puVar1 = *(ulong **)(param_1 + 0x30);
  FUN_100c58810(param_1,0xf);
  if ((int)uVar5 < 0) {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = *puVar1;
    uVar6 = uVar2;
    if ((ulong)(long)(int)uVar5 <= uVar2) {
      uVar6 = param_3;
    }
    uVar5 = (uint)uVar6;
    if ((param_2 != (void *)0x0) && (0 < (int)uVar5)) {
      sVar3 = (size_t)(int)uVar5;
      _memcpy(param_2,(void *)puVar1[1],sVar3);
      uVar2 = *puVar1;
      *puVar1 = uVar2 - sVar3;
      pvVar4 = (void *)(sVar3 + (long)puVar1[1]);
      if ((*(byte *)(param_1 + 0x21) & 2) == 0) {
        _memmove((void *)puVar1[1],pvVar4,uVar2 - sVar3);
        return uVar6 & 0xffffffff;
      }
      puVar1[1] = (ulong)pvVar4;
      return uVar6 & 0xffffffff;
    }
  }
  uVar6 = (ulong)uVar5;
  if (uVar2 == 0) {
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if (uVar5 != 0) {
      FUN_100c58830(param_1,9);
      uVar6 = (ulong)uVar5;
    }
  }
  return uVar6;
}


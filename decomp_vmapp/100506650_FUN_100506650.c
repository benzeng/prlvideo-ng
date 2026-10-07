
bool FUN_100506650(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar4 + 4);
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 >= uVar2) {
    _memcpy((void *)*param_2,(void *)(lVar4 + *(long *)(lVar4 + 0x10)),(ulong)uVar2);
    *(uint *)(param_2 + 1) = (int)param_2[1] - uVar2;
    *param_2 = *param_2 + (ulong)uVar2;
    puVar1 = (uint *)(*(long *)(param_1 + 8) + 0x34);
    *puVar1 = *puVar1 | 2;
  }
  return uVar3 < uVar2;
}


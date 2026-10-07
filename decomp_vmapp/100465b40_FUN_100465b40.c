
ulong FUN_100465b40(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar4 = puVar3[1] - uVar1;
  if (param_3 <= uVar4) {
    uVar4 = param_3;
  }
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_1 + 0x18,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = *(uint **)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  _memcpy(param_2,(void *)((ulong)uVar1 + *(long *)(puVar3 + 4) + (long)puVar3),(ulong)uVar4);
  iVar2 = *(int *)(param_1 + 0x20) + uVar4;
  *(int *)(param_1 + 0x20) = iVar2;
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == iVar2) {
    *(undefined4 *)(param_1 + 4) = 4;
  }
  return (ulong)uVar4;
}


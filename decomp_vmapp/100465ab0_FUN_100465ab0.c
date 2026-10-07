
ulong FUN_100465ab0(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_3;
  puVar3 = *(uint **)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (puVar3[1] < uVar1 + param_3) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    uVar4 = 0;
  }
  else {
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData(param_1 + 8,puVar3[1] + 1,puVar3[2] >> 0x1f);
      puVar3 = *(uint **)(param_1 + 8);
      uVar1 = *(uint *)(param_1 + 0x10);
    }
    _memcpy((void *)((ulong)uVar1 + *(long *)(puVar3 + 4) + (long)puVar3),param_2,uVar4);
    iVar2 = *(int *)(param_1 + 0x10) + param_3;
    *(int *)(param_1 + 0x10) = iVar2;
    if (*(int *)(*(long *)(param_1 + 8) + 4) == iVar2) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  return uVar4;
}


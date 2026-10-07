
void FUN_10040e050(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *local_48;
  void *local_40;
  int local_38;
  int local_34;
  
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x60);
  uVar3 = *(int *)(lVar2 + 0x68) - *(int *)(lVar2 + 100) & *(uint *)(lVar2 + 0x70);
  uVar5 = *param_2;
  if (uVar3 < *param_2) {
    *param_2 = uVar3;
    uVar5 = uVar3;
  }
  FUN_1007d7220(lVar2 + 0x5c,uVar5,&local_40,&local_34,&local_48,&local_38);
  uVar3 = local_34 * iVar1;
  uVar5 = iVar1 * local_38;
  *param_2 = local_38 + local_34;
  pvVar4 = *(void **)(param_3 + 0x10);
  if (uVar3 != 0) {
    _memcpy(pvVar4,local_40,(ulong)uVar3);
    pvVar4 = (void *)((long)pvVar4 + (ulong)uVar3);
  }
  if (uVar5 != 0) {
    _memcpy(pvVar4,local_48,(ulong)uVar5);
  }
  *(uint *)(param_3 + 0xc) = uVar5 + uVar3;
  lVar2 = *(long *)(param_1 + 8);
  *(uint *)(lVar2 + 100) = *param_2 + *(int *)(lVar2 + 100) & *(uint *)(lVar2 + 0x70);
  return;
}


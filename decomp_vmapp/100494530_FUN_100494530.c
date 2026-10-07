
undefined8 FUN_100494530(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  void *pvVar4;
  void **ppvVar5;
  
  puVar2 = *(uint **)(param_1 + 0x60);
  ppvVar5 = (void **)(param_1 + 0x60);
  if (*(int *)(param_2 + 4) != 7) {
    if (1 < *puVar2) {
      FUN_1004968a0(ppvVar5,puVar2[1]);
      puVar2 = *ppvVar5;
    }
    puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar2) {
        FUN_1004968a0(ppvVar5,puVar2[1]);
        puVar2 = *ppvVar5;
      }
      if (puVar2 + (long)(int)puVar2[3] * 2 + 4 == puVar3) break;
      if (*(int *)(param_2 + 4) == *(int *)(*(long *)puVar3 + 4)) {
        return CONCAT71((int7)((ulong)(puVar2 + (long)(int)puVar2[3] * 2 + 4) >> 8),1);
      }
      puVar3 = puVar3 + 2;
    }
    goto LAB_100494665;
  }
  if (1 < *puVar2) {
    FUN_1004968a0(ppvVar5,puVar2[1]);
    puVar2 = *ppvVar5;
  }
  puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar2) {
      FUN_1004968a0(ppvVar5,puVar2[1]);
      puVar2 = *ppvVar5;
    }
    if (puVar2 + (long)(int)puVar2[3] * 2 + 4 == puVar3) goto LAB_100494665;
    pvVar4 = *(void **)puVar3;
    if ((*(int *)(param_2 + 4) == *(int *)((long)pvVar4 + 4)) &&
       (*(int *)(param_2 + 0xc) == *(int *)((long)pvVar4 + 0xc))) break;
    puVar3 = puVar3 + 2;
  }
  if (*puVar2 < 2) {
LAB_1004945f9:
    operator_delete(pvVar4);
  }
  else {
    uVar1 = puVar2[2];
    FUN_1004968a0(ppvVar5,puVar2[1]);
    pvVar4 = *(void **)((long)*ppvVar5 +
                       ((long)(int)((ulong)((long)puVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >>
                                   3) + (long)*(int *)((long)*ppvVar5 + 8)) * 8 + 0x10);
    if (pvVar4 != (void *)0x0) goto LAB_1004945f9;
  }
  QListData::erase(ppvVar5);
LAB_100494665:
  FUN_1004961e0(ppvVar5,param_2);
  return 0;
}


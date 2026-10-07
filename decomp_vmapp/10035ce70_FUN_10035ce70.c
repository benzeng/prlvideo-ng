
void FUN_10035ce70(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x18);
  while (*plVar4 != 0) {
    lVar1 = *(long *)(*plVar4 + 0x28);
    pvVar2 = *(void **)(lVar1 + 0x60);
    if (pvVar2 != (void *)0x0) {
      lVar3 = *(long *)((long)pvVar2 + 0x10);
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)pvVar2 + 8);
      *(long *)(*(long *)((long)pvVar2 + 8) + 0x10) = lVar3;
      *(void **)((long)pvVar2 + 8) = pvVar2;
      *(void **)((long)pvVar2 + 0x10) = pvVar2;
      FUN_100365cd0(pvVar2,0);
      operator_delete(pvVar2);
      plVar4 = *(long **)(param_1 + 0x18);
    }
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    (*DAT_1011c5b50)(1,(long)pvVar2 + 0x28);
    (*DAT_1011c5b50)(1,(long)pvVar2 + 0x30);
    operator_delete(pvVar2);
    return;
  }
  return;
}


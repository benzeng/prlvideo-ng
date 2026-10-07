
void FUN_10032d600(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  plVar1 = (long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = *plVar1;
  }
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 0x18) = lVar2;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *plVar1 = 0;
  pvVar3 = *(void **)(param_1 + 8);
  iVar4 = *(int *)((long)pvVar3 + 0x80) + -1;
  *(int *)((long)pvVar3 + 0x80) = iVar4;
  if ((pvVar3 != (void *)0x0) && (iVar4 == 0)) {
    FUN_10032d700(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


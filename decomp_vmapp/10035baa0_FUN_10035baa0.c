
void FUN_10035baa0(long param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  
  while (pvVar2 = (void *)**(undefined8 **)(param_1 + 0x38), pvVar2 != (void *)0x0) {
    FUN_10035bc70(param_1,pvVar2);
    lVar1 = *(long *)((long)pvVar2 + 0x48);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)((long)pvVar2 + 0x40);
    *(long *)(*(long *)((long)pvVar2 + 0x40) + 0x10) = lVar1;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 8);
  while (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar2 + 0x30);
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x38) = *(undefined8 *)((long)pvVar2 + 0x38);
    }
    if (*(long *)((long)pvVar2 + 0x38) != 0) {
      *(void **)(*(long *)((long)pvVar2 + 0x38) + 0x30) = pvVar3;
    }
    *(undefined4 *)((long)pvVar2 + 0x28) = 0;
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    *(undefined8 *)((long)pvVar2 + 0x30) = 0;
    (*DAT_1011c5b50)(1,(long)pvVar2 + 8);
    if (*(long *)((long)pvVar2 + 0x10) != 0) {
      (*DAT_1011c7540)();
    }
    if (*(int *)((long)pvVar2 + 0x18) != 0) {
      (*DAT_1011c7458)(1,(long)pvVar2 + 0x18);
    }
    operator_delete(pvVar2);
    *(void **)(param_1 + 8) = pvVar3;
    pvVar2 = pvVar3;
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  while (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar2 + 0x30);
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x38) = *(undefined8 *)((long)pvVar2 + 0x38);
    }
    if (*(long *)((long)pvVar2 + 0x38) != 0) {
      *(void **)(*(long *)((long)pvVar2 + 0x38) + 0x30) = pvVar3;
    }
    *(undefined4 *)((long)pvVar2 + 0x28) = 0;
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    *(undefined8 *)((long)pvVar2 + 0x30) = 0;
    (*DAT_1011c5b50)(1,(long)pvVar2 + 8);
    if (*(long *)((long)pvVar2 + 0x10) != 0) {
      (*DAT_1011c7540)();
    }
    if (*(int *)((long)pvVar2 + 0x18) != 0) {
      (*DAT_1011c7458)(1,(long)pvVar2 + 0x18);
    }
    operator_delete(pvVar2);
    *(void **)(param_1 + 0x18) = pvVar3;
    pvVar2 = pvVar3;
  }
  return;
}


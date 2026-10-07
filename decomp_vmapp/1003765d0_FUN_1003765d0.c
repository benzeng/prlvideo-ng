
void FUN_1003765d0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_100bbc250;
  if ((long *)param_1[0x83] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x83] + 8))();
  }
  if ((void *)param_1[0x84] != (void *)0x0) {
    operator_delete__((void *)param_1[0x84]);
  }
  if ((void *)param_1[0x85] != (void *)0x0) {
    operator_delete__((void *)param_1[0x85]);
  }
  lVar3 = 0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar3 + 0x3d8);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)param_1 + lVar3 + 0x3e0);
      if (pvVar2 != pvVar1) {
        *(ulong *)((long)param_1 + lVar3 + 0x3e0) =
             (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
      }
      operator_delete(pvVar1);
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x180);
  pvVar1 = (void *)param_1[0x4b];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x4c];
    if (pvVar2 != pvVar1) {
      param_1[0x4c] =
           (void *)(~((ulong)((long)pvVar2 + (-0x1c - (long)pvVar1)) / 0x1c) * 0x1c + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x48];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x49];
    if (pvVar2 != pvVar1) {
      param_1[0x49] =
           (void *)(~((ulong)((long)pvVar2 + (-0x1c - (long)pvVar1)) / 0x1c) * 0x1c + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  FUN_1003737e0(param_1 + 2);
  FUN_10036cfe0(param_1);
  return;
}


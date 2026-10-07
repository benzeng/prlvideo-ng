
void FUN_100484cd0(undefined8 *param_1)

{
  ulong *puVar1;
  void *pvVar2;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    *param_1 = 0;
    if ((*puVar1 & 1) != 0) {
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar1);
  }
  pvVar2 = (void *)param_1[2];
  if (pvVar2 != (void *)0x0) {
    param_1[2] = 0;
    FUN_10047e550(pvVar2);
    operator_delete(pvVar2);
    pvVar2 = (void *)param_1[2];
    if (pvVar2 != (void *)0x0) {
      FUN_10047e550(pvVar2);
      operator_delete(pvVar2);
    }
  }
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    if ((*puVar1 & 1) != 0) {
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar1);
    return;
  }
  return;
}


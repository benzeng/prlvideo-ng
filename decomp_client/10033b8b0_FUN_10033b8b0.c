
void FUN_10033b8b0(QObject *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10220c810;
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_100a40720(pvVar1);
    operator_delete(pvVar1);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}


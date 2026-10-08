
void FUN_1003494d0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021efac0;
  FUN_100d797c0(param_1 + 0x30);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QObject::~QObject(param_1);
  return;
}


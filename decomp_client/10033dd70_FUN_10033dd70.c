
void FUN_10033dd70(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220ca48;
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}


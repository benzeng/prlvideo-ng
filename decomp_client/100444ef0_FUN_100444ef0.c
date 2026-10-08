
void FUN_100444ef0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f26f0;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  QObject::~QObject(param_1);
  return;
}


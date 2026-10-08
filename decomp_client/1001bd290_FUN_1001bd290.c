
void FUN_1001bd290(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021eec60;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QNetworkProxy::~QNetworkProxy((QNetworkProxy *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}


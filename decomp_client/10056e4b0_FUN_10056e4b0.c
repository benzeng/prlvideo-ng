
void FUN_10056e4b0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3620;
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f34a0;
  FUN_10056e3a0(param_1 + 0x30);
  QAbstractItemModel::~QAbstractItemModel((QAbstractItemModel *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}


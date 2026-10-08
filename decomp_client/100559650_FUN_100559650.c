
void FUN_100559650(QAbstractItemModel *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2e00;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QAbstractItemModel::~QAbstractItemModel(param_1);
  operator_delete(param_1);
  return;
}



void FUN_100576330(QAbstractTableModel *param_1)

{
  int *piVar1;
  
  *(undefined **)param_1 = &DAT_1021f3730;
  CPortForwarding::~CPortForwarding((CPortForwarding *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QAbstractTableModel::~QAbstractTableModel(param_1);
  operator_delete(param_1);
  return;
}


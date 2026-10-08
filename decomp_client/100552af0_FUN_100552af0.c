
void FUN_100552af0(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x18);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar1;
    *(QObject **)(param_1 + 0x20) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(piVar1);
    }
  }
  QAbstractItemModel::beginResetModel();
  QAbstractItemModel::endResetModel();
  return;
}


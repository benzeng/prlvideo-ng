
void FUN_100552c50(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2f80;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100552c9e;
      piVar1 = *(int **)(param_1 + 0x68);
    }
    FUN_1001c45d0(param_1 + 0x68,piVar1);
  }
LAB_100552c9e:
  FUN_1000fe670(param_1 + 0x60);
  pQVar2 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100552cd7;
      pQVar2 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100552cd7:
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f2e00;
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  QAbstractItemModel::~QAbstractItemModel((QAbstractItemModel *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}


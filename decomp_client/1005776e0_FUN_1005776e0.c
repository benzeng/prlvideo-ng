
void FUN_1005776e0(QObject *param_1)

{
  int *piVar1;
  Data *pDVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f38f8;
  QVariant::~QVariant((QVariant *)(param_1 + 0x38));
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  pDVar2 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10057774c;
      pDVar2 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar2);
  }
LAB_10057774c:
  QObject::~QObject(param_1);
  return;
}


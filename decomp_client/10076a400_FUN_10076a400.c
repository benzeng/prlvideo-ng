
void FUN_10076a400(QObject *param_1)

{
  int *piVar1;
  Data *pDVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f6820;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  pDVar2 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10076a463;
      pDVar2 = *(Data **)(param_1 + 0x18);
    }
    QListData::dispose(pDVar2);
  }
LAB_10076a463:
  QObject::~QObject(param_1);
  return;
}


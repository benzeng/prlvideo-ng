
void FUN_100a66c40(QObject *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102239080;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239100;
  FUN_100a4a070(param_1 + 0x10);
  QTimer::~QTimer((QTimer *)(param_1 + 0x40));
  pQVar2 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100a66caa;
      pQVar2 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a66caa:
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}


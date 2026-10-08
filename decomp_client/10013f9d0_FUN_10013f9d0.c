
void FUN_10013f9d0(QWidget *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fb7a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb950;
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x90);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10013fa3a;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x90);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10013fa3a:
  QTimer::~QTimer((QTimer *)(param_1 + 0x50));
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x40));
    }
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  QWidget::~QWidget(param_1);
  return;
}


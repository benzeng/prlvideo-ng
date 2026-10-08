
void FUN_1007335a0(QObject *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5d70;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100733627;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x18);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100733627:
  QObject::~QObject(param_1);
  return;
}


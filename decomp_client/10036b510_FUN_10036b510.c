
void FUN_10036b510(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  QObject *pQVar3;
  
  if (param_2 != (QObject *)0x0) {
    if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) {
      piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
      piVar2 = *(int **)(param_1 + 0x28);
      if (piVar2 != piVar1) {
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          piVar2 = *(int **)(param_1 + 0x28);
        }
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x28));
          }
        }
        *(int **)(param_1 + 0x28) = piVar1;
        *(QObject **)(param_1 + 0x30) = param_2;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          operator_delete(piVar1);
        }
      }
    }
    pQVar3 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pQVar3 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pQVar3 = *(QObject **)(param_1 + 0x30);
    }
    if (pQVar3 == param_2) {
      QMainWindow::setCentralWidget(*(QWidget **)(param_1 + 0x10));
    }
  }
  return;
}


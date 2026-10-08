
undefined8 FUN_1002f41e0(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  QPoint *pQVar5;
  
  pQVar1 = operator_new(0x70);
  FUN_1006f4ae0(pQVar1,(int *)(param_1 + 0x30),0);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
    }
    *(int **)(param_1 + 0x20) = piVar2;
    *(QObject **)(param_1 + 0x28) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  QWidget::setAttribute(uVar4,0x37,1);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1006f4d50(uVar4,0);
  if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
    pQVar5 = (QPoint *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (pQVar5 = (QPoint *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      pQVar5 = *(QPoint **)(param_1 + 0x28);
    }
    QWidget::move(pQVar5);
  }
  QWidget::show();
  return 0;
}



undefined8 FUN_10072a200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (lVar1 = *(long *)(param_1 + 0x18), lVar1 == 0)) {
    pQVar2 = operator_new(0x78);
    FUN_10072a430(pQVar2,param_1,param_2,param_3);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    piVar4 = *(int **)(param_1 + 0x10);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x10);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x10));
        }
      }
      *(int **)(param_1 + 0x10) = piVar3;
      *(QObject **)(param_1 + 0x18) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
    QWidget::show();
    pQVar6 = (QWidget *)0x0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (pQVar6 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      pQVar6 = *(QWidget **)(param_1 + 0x18);
    }
    WidgetUtils::cascadeWindow(pQVar6);
  }
  else {
    QLabel::setText(*(QString **)(*(long *)(lVar1 + 0x60) + 0x48));
    QWidget::layout();
    QLayout::contentsMargins();
    (**(code **)(**(long **)(*(long *)(lVar1 + 0x60) + 0x48) + 0x70))();
    QWidget::setMinimumWidth((int)lVar1);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar5;
}


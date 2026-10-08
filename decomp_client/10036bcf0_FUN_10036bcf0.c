
QWidget * FUN_10036bcf0(long param_1)

{
  undefined8 *puVar1;
  QWidget *pQVar2;
  int *piVar3;
  QWidget *pQVar4;
  
  pQVar4 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar4 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar2 = *(QWidget **)(param_1 + 0x30);
    pQVar4 = (QWidget *)0x0;
    if (pQVar2 != (QWidget *)0x0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      QWidget::setParent(pQVar2);
      piVar3 = (int *)*puVar1;
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && ((void *)*puVar1 != (void *)0x0)) {
          operator_delete((void *)*puVar1);
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
        *puVar1 = 0;
      }
      QMainWindow::setCentralWidget(*(QWidget **)(param_1 + 0x10));
      pQVar4 = pQVar2;
    }
  }
  return pQVar4;
}


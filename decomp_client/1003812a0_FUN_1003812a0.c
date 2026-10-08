
void FUN_1003812a0(long param_1,long param_2)

{
  QWidget *pQVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    if (*(long *)(lVar2 + 0x20) != 0) {
      pQVar1 = (QWidget *)QWidget::layout();
      QLayout::removeWidget(pQVar1);
      lVar2 = *(long *)(param_1 + 0x60);
    }
    *(long *)(lVar2 + 0x20) = param_2;
    pQVar1 = (QWidget *)QWidget::layout();
    QLayout::addWidget(pQVar1);
    return;
  }
  return;
}


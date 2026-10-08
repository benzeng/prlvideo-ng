
void FUN_10054e6b0(long param_1,int param_2)

{
  QWidget *pQVar1;
  
  pQVar1 = *(QWidget **)(*(long *)(param_1 + 0x18) + 0x80);
  if (param_2 != 0) {
    QStackedWidget::setCurrentWidget(pQVar1);
    return;
  }
  QStackedWidget::setCurrentWidget(pQVar1);
  return;
}



void FUN_100578590(long param_1,int param_2)

{
  QWidget *pQVar1;
  
  pQVar1 = *(QWidget **)(*(long *)(param_1 + 0x18) + 0x28);
  if (param_2 != 0) {
    QStackedWidget::setCurrentWidget(pQVar1);
    return;
  }
  QStackedWidget::setCurrentWidget(pQVar1);
  return;
}


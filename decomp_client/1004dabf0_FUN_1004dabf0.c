
void FUN_1004dabf0(long *param_1)

{
  int iVar1;
  long *plVar2;
  QWidget *pQVar3;
  
  while( true ) {
    (**(code **)(*param_1 + 0x220))(param_1);
    iVar1 = QStackedWidget::count();
    if (iVar1 == 0) break;
    iVar1 = (**(code **)(*param_1 + 0x220))(param_1);
    plVar2 = (long *)QStackedWidget::widget(iVar1);
    pQVar3 = (QWidget *)(**(code **)(*param_1 + 0x220))(param_1);
    QStackedWidget::removeWidget(pQVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  return;
}


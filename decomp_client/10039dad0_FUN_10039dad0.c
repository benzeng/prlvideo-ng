
void FUN_10039dad0(QObject *param_1)

{
  int iVar1;
  long *plVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f1b90;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  }
  FUN_1003b0b40(param_1 + 0x20,1);
  while( true ) {
    iVar1 = QStackedWidget::count();
    if (iVar1 < 1) break;
    plVar2 = (long *)QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0x38));
    QStackedWidget::removeWidget(*(QWidget **)(param_1 + 0x38));
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  FUN_10039dbd0(param_1);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  QMacToolBar::~QMacToolBar((QMacToolBar *)(param_1 + 0x60));
  FUN_1003b0910(param_1 + 0x20);
  QObject::~QObject(param_1);
  return;
}


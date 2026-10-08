
void FUN_1003a3460(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  QStackedWidget::currentWidget();
  plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  iVar1 = 0;
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3);
  }
  if (iVar1 == param_2) {
    QStackedWidget::currentWidget();
    plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,0);
    }
    FUN_1003a2a50(param_1,uVar2);
    return;
  }
  return;
}


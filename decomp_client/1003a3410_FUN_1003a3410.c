
void FUN_1003a3410(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  QStackedWidget::currentWidget();
  plVar2 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,0);
  }
  FUN_1003a2a50(param_1,uVar1);
  return;
}


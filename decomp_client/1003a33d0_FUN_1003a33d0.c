
void FUN_1003a33d0(void)

{
  undefined4 uVar1;
  long *plVar2;
  
  QStackedWidget::currentWidget();
  plVar2 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x1d0))(plVar2);
    AppHelpUtils::openHelpTopic(uVar1,0);
    return;
  }
  return;
}


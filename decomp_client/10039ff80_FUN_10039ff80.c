
undefined8 FUN_10039ff80(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  QStackedWidget::currentWidget();
  plVar1 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1003a4db0(lVar2);
      return uVar3;
    }
  }
  return 0xffffffff;
}


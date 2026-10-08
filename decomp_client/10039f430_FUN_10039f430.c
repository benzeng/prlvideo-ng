
undefined8 FUN_10039f430(void)

{
  long *plVar1;
  undefined8 uVar2;
  
  QStackedWidget::currentWidget();
  plVar1 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010039f458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
    return uVar2;
  }
  return 0;
}


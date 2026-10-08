
undefined8 FUN_1003a3980(void)

{
  long *plVar1;
  undefined8 uVar2;
  
  QStackedWidget::currentWidget();
  plVar1 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003a39ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
    return uVar2;
  }
  return 0;
}


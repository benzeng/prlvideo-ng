
void FUN_100591100(void)

{
  char cVar1;
  long *plVar2;
  
  QStackedWidget::currentWidget();
  plVar2 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
  if (plVar2 != (long *)0x0) {
    cVar1 = FUN_100525ab0(plVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100591141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1c0))(plVar2);
      return;
    }
  }
  return;
}


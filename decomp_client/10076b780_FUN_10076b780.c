
void * FUN_10076b780(undefined8 param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  FUN_100060bb0();
  uVar1 = QMetaObject::className();
  FUN_100060e80(uVar1,param_1);
  pvVar2 = (void *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_102229aa0);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x78);
    FUN_10076b820(pvVar2,param_1,0);
  }
  QWidget::showNormal();
  QWidget::raise();
  QWidget::activateWindow();
  return pvVar2;
}


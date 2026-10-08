
undefined8 FUN_10039fef0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = QStackedWidget::count();
    uVar2 = 0;
    if (param_2 < iVar1) {
      QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0x38));
      uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    }
  }
  return uVar2;
}


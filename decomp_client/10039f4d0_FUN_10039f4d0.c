
undefined8 * FUN_10039f4d0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  iVar2 = 0;
  while( true ) {
    iVar1 = QStackedWidget::count();
    if (iVar1 <= iVar2) break;
    QStackedWidget::widget((int)*(undefined8 *)(param_2 + 0x38));
    local_40[0] = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    if (local_40[0] != 0) {
      FUN_1003a4a30(param_1,local_40);
    }
    iVar2 = iVar2 + 1;
  }
  return param_1;
}


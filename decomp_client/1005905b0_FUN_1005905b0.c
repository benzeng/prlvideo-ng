
long FUN_1005905b0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = QStackedWidget::count();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
      lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
      if ((lVar2 != 0) && (iVar1 = FUN_1005259e0(lVar2), iVar1 == param_2)) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = QStackedWidget::count();
    } while (iVar3 < iVar1);
  }
  return 0;
}


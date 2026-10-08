
void FUN_100379270(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100326190(uVar2);
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0);
  if (lVar1 != 0) {
    QWidget::setWindowOpacity(0.0);
    return;
  }
  return;
}


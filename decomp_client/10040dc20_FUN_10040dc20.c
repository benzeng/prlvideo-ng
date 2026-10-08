
void FUN_10040dc20(void)

{
  long lVar1;
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
  if (lVar1 != 0) {
    QSpinBox::setMinimum((int)lVar1);
    QSpinBox::setMaximum((int)lVar1);
    QAbstractSpinBox::setKeyboardTracking(SUB81(lVar1,0));
    return;
  }
  return;
}


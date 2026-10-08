
void FUN_10040dc70(void)

{
  long lVar1;
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1338);
  if (lVar1 != 0) {
    QDoubleSpinBox::setMinimum(0.0);
    QDoubleSpinBox::setMaximum(DAT_100e1d2d0);
    QAbstractSpinBox::setKeyboardTracking(SUB81(lVar1,0));
    return;
  }
  return;
}


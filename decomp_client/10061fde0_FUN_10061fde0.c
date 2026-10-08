
void FUN_10061fde0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = QVariant::userType();
  uVar2 = QMetaType::typeFlags(iVar1);
  if ((uVar2 & 8) == 0) {
    iVar1 = QVariant::userType();
    if (iVar1 == 0x27) {
      QVariant::constData();
    }
    else {
      QVariant::convert(param_1,(void *)0x27);
    }
  }
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1520);
  return;
}


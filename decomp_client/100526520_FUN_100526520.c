
undefined8 FUN_100526520(QObject *param_1,QEvent *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QVariant local_38;
  
  QObject::property((char *)&local_38);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  if ((((cVar1 != '\0') &&
       (lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350), lVar2 != 0)) &&
      (cVar1 = QAbstractButton::isChecked(), cVar1 != '\0')) &&
     ((*(ushort *)(param_3 + 0x10) & 0xfffe) == 2)) {
    return 1;
  }
  uVar3 = QObject::eventFilter(param_1,param_2);
  return uVar3;
}


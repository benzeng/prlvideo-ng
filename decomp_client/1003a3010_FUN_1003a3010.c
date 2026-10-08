
void FUN_1003a3010(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  QVariant local_28;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1370);
  if (lVar1 != 0) {
    QObject::property((char *)&local_28);
    uVar2 = QVariant::toInt((bool *)&local_28);
    QVariant::~QVariant(&local_28);
    FUN_10039fc50(param_1,uVar2);
  }
  return;
}


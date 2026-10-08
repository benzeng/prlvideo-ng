
void FUN_100590bf0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  QVariant local_30;
  char local_19;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1370);
  if (lVar1 != 0) {
    local_19 = '\x01';
    QObject::property((char *)&local_30);
    uVar2 = QVariant::toInt((bool *)&local_30);
    QVariant::~QVariant(&local_30);
    if (local_19 != '\0') {
      FUN_100590670(param_1,uVar2);
    }
  }
  return;
}


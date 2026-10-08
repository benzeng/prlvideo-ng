
undefined4 FUN_100060e10(long param_1)

{
  undefined4 uVar1;
  QVariant local_20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    QObject::property((char *)&local_20);
    uVar1 = QVariant::toInt((bool *)&local_20);
    QVariant::~QVariant(&local_20);
  }
  return uVar1;
}



undefined4 FUN_1003a4d50(void)

{
  undefined4 uVar1;
  QVariant local_20;
  
  QObject::property((char *)&local_20);
  uVar1 = QVariant::toUInt((bool *)&local_20);
  QVariant::~QVariant(&local_20);
  return uVar1;
}


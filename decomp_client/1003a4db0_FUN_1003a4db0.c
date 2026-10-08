
undefined4 FUN_1003a4db0(void)

{
  undefined4 uVar1;
  QVariant local_20;
  
  QObject::property((char *)&local_20);
  uVar1 = QVariant::toInt((bool *)&local_20);
  QVariant::~QVariant(&local_20);
  return uVar1;
}


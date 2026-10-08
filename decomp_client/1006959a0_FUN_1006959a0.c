
void FUN_1006959a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QVariant local_20;
  
  QObject::property((char *)&local_20);
  uVar1 = QVariant::toInt((bool *)&local_20);
  QVariant::~QVariant(&local_20);
  uVar2 = FUN_1006b9420();
  FUN_1006b9680(uVar2,uVar1);
  return;
}


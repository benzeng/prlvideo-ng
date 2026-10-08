
void FUN_10006eba0(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  QVariant local_48;
  QVariant local_38;
  
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    QObject::sender();
    QObject::property((char *)&local_38);
    QVariant::~QVariant(&local_38);
    if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
      QObject::sender();
      QObject::property((char *)&local_48);
      uVar2 = QVariant::toInt((bool *)&local_48);
      bVar3 = 1;
      if (param_2 < 5) {
        bVar3 = (byte)param_2 & 1;
      }
      FUN_10006c960(param_1,uVar2,bVar3);
      QVariant::~QVariant(&local_48);
    }
  }
  return;
}


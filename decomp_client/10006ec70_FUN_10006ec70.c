
void FUN_10006ec70(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  QVariant local_30;
  
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    QObject::sender();
    QObject::property((char *)&local_30);
    if ((local_30.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
      QVariant::~QVariant(&local_30);
    }
    else {
      QObject::sender();
      QObject::property((char *)&local_40);
      QVariant::~QVariant(&local_40);
      QVariant::~QVariant(&local_30);
      if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
        QObject::sender();
        QObject::property((char *)&local_50);
        uVar2 = QVariant::toInt((bool *)&local_50);
        QVariant::~QVariant(&local_50);
        QObject::sender();
        QObject::property((char *)&local_60);
        uVar3 = QVariant::toInt((bool *)&local_60);
        QVariant::~QVariant(&local_60);
        FUN_10083c020(*(undefined8 *)(param_1 + 0x10),uVar2,uVar3);
      }
    }
  }
  return;
}


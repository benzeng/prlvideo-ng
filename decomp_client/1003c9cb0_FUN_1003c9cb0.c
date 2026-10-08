
void FUN_1003c9cb0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  QVariant local_40;
  QVariant local_30;
  
  uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  MappingHelpers::getFirstValue((QHash *)&local_30);
  uVar1 = QVariant::toLongLong((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  uVar3 = 3;
  if (uVar1 != 2) {
    uVar3 = (ulong)uVar1;
  }
  QVariant::QVariant(&local_40,uVar3);
  QComboBox::findData(uVar2,&local_40,0x100,0x10);
  QComboBox::setCurrentIndex((int)uVar2);
  QVariant::~QVariant(&local_40);
  return;
}


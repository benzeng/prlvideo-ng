
void FUN_1003dc170(void)

{
  int iVar1;
  undefined8 uVar2;
  QVariant local_40;
  QVariant local_30;
  
  uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  MappingHelpers::getFirstValue((QHash *)&local_30);
  iVar1 = QVariant::toLongLong((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  QVariant::QVariant(&local_40,iVar1);
  QComboBox::findData(uVar2,&local_40,0x100,0x10);
  QComboBox::setCurrentIndex((int)uVar2);
  QVariant::~QVariant(&local_40);
  return;
}


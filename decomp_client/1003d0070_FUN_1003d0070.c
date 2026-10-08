
void FUN_1003d0070(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  QVariant local_40;
  QVariant local_30;
  
  uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
    uVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    cVar1 = FUN_1001754c0(uVar4,8);
    uVar5 = 3;
    if (cVar1 != '\0') {
      MappingHelpers::getFirstValue((QHash *)&local_30);
      uVar5 = QVariant::toLongLong((bool *)&local_30);
      QVariant::~QVariant(&local_30);
      uVar5 = uVar5 & 0xffffffff;
    }
    QVariant::QVariant(&local_40,uVar5);
    QComboBox::findData(uVar2,&local_40,0x100,0x10);
    QComboBox::setCurrentIndex((int)uVar2);
    QVariant::~QVariant(&local_40);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  return;
}


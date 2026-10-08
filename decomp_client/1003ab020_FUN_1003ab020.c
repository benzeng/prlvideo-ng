
void FUN_1003ab020(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QVariant local_48;
  QVariant local_38;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_102201a10);
  if ((param_2 != -0x7ffffd8b) && (lVar1 != 0)) {
    QObject::property((char *)&local_38);
    uVar3 = QVariant::toLongLong((bool *)&local_38);
    QVariant::~QVariant(&local_38);
    QObject::property((char *)&local_48);
    uVar4 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    FUN_1003b5610(uVar2,uVar3,uVar4);
    uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    FUN_1003b6570(uVar2,uVar3);
    FUN_100836910(*(undefined8 *)(param_1 + 0x10),uVar3,uVar4);
  }
  return;
}


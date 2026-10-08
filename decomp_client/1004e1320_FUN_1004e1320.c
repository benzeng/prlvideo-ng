
void FUN_1004e1320(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  QVariant local_30;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1500);
  if (lVar2 != 0) {
    lVar2 = FUN_1004dddd0(param_1);
    if (lVar2 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
      return;
    }
    QAction::data();
    uVar1 = QVariant::toUInt((bool *)&local_30);
    QVariant::~QVariant(&local_30);
    uVar3 = FUN_1003b0b00(*(undefined8 *)(param_1 + 0x40));
    uVar1 = FUN_1003b1cd0(uVar1);
    FUN_1003adb30(uVar3,uVar1);
  }
  return;
}


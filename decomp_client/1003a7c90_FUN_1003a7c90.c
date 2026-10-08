
void FUN_1003a7c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_30;
  
  lVar1 = FUN_1003b7b00(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x1d0);
    uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    FUN_10041fc10(pvVar2,uVar3);
    QWidget::setAttribute(pvVar2,0x37,1);
    FUN_10041fee0(pvVar2,lVar1,param_3);
    QObject::connect(&local_30,pvVar2,"2finished(int)",param_1,"1onDlgFinished(int)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    FUN_10041fe80(pvVar2);
  }
  return;
}


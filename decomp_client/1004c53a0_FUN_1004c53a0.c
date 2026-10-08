
void FUN_1004c53a0(long param_1)

{
  long lVar1;
  long in_RAX;
  undefined8 uVar2;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_18 = in_RAX;
    uVar2 = FUN_10044e620();
    QObject::connect(&local_18,lVar1,"2memoryChanged(int)",uVar2,"1onPreprocessedValueChanged()",0);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  return;
}



void FUN_10045afe0(long param_1)

{
  undefined8 uVar1;
  long in_RAX;
  undefined8 uVar2;
  long local_18;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
  local_18 = in_RAX;
  uVar2 = FUN_10044e620();
  QObject::connect(&local_18,uVar1,"2currentIndexChanged(int)",uVar2,"1onPreprocessedValueChanged()"
                   ,0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}



void FUN_1003a8b90(long param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_30;
  
  pvVar1 = operator_new(0x70);
  uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  FUN_1002bf1c0(pvVar1,param_2,uVar2,uVar3);
  QObject::connect(&local_30,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onChangeVmExpirationTaskFinished(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return;
}


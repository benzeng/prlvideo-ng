
undefined8 FUN_1002e9c50(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar1 = operator_new(0x40);
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001554a0(uVar2);
  uVar3 = FUN_10015cb20(uVar2,param_1 + 0x18);
  local_30 = 3;
  local_28 = local_28 & 0xffffff00;
  uStack_2c = 0;
  uStack_24 = 0xffff;
  local_20 = 0;
  uStack_1c = uStack_1c & 0xffffff00;
  lVar5 = (ulong)uStack_1c << 0x20;
  uVar2 = 3;
  uVar4 = CONCAT44(0xffff,local_28);
  FUN_1002c08d0(pvVar1,uVar3);
  QObject::connect(&local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0,uVar2,uVar4,lVar5);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return 0;
}


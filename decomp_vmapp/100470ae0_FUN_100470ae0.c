
void FUN_100470ae0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_40;
  long local_38;
  
  FUN_100472a00();
  *param_1 = &PTR_FUN_100bc1f90;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  puVar3 = PTR_shared_null_100ba2180;
  auVar5._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar5._0_8_ = PTR_shared_null_100ba2180;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar5;
  param_1[5] = puVar3;
  *param_1 = &PTR_FUN_100bc18e0;
  puVar1 = param_1 + 8;
  FUN_100472f30(puVar1);
  param_1[8] = &PTR_FUN_100bc14b0;
  FUN_10046bd50();
  FUN_10046bd50(param_1 + 0x14);
  FUN_10046dda0(param_1 + 0x1a);
  FUN_1004730a0(param_1 + 0x1a,param_1);
  uVar4 = FUN_100472fa0(puVar1);
  FUN_1004730a0(uVar4,param_1);
  FUN_1004730a0(param_1 + 0xe,param_1);
  FUN_1004730a0(param_1 + 0x14,puVar1);
  lVar2 = *(long *)(param_2 + 0xf0);
  param_1[6] = lVar2;
  param_1[7] = *(undefined8 *)(lVar2 + 0x10);
  QObject::connect(&local_38,lVar2,"2sigClientAttached(const IOService::ClientDesc)",param_1,
                   "1onClientAttached(const IOService::ClientDesc)",1);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,param_1[6],"2sigClientDetached(const IOService::ClientDesc)",param_1,
                   "1onClientDetached(const IOService::ClientDesc)",1);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}



void FUN_10042f520(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 auStack_50 [16];
  undefined *local_40;
  undefined1 local_31;
  
  pvVar3 = operator_new(0x88);
  uVar4 = FUN_100795100(0);
  puVar2 = PTR_shared_null_100ba20d0;
  local_58 = PTR_shared_null_100ba20d0;
  auStack_50._8_4_ = (int)PTR_shared_null_100ba20d0;
  auStack_50._0_8_ = PTR_shared_null_100ba20d0;
  auStack_50._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_40 = PTR_shared_null_100ba2188;
  FUN_1007985d0(pvVar3,uVar4,1,&local_58);
  FUN_100431a70(param_1,pvVar3);
  FUN_1000697c0(&local_58);
  *param_1 = &PTR_FUN_100bc0a10;
  piVar1 = (int *)*param_2;
  param_1[0x855] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[0x856] = puVar2;
  param_1[0x85d] = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  param_1[0x85b] = 0;
  param_1[0x85a] = 0;
  param_1[0x859] = 0;
  param_1[0x858] = 0;
  param_1[0x857] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x85e),0);
  param_1[0x85f] = 0xffffffff;
  param_1[0x860] = 0xffffffffffffffff;
  param_1[0x861] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x862) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x863),0);
  QObject::connect(&local_60,param_1,"2sigSendMouseCursor(int)",param_1,"1sendMouseCursor(int)",2);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,param_1,"2sigSendMousePosition(bool)",param_1,
                   "1sendMousePosition(bool)",2);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QThread::start(param_1 + 5,7);
  QObject::connect(&local_70,param_1[2],
                   "2onClientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1clientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,param_1[2],"2onClientDisconnected(IOSender::Handle)",param_1,
                   "1clientDisconnected(IOSender::Handle)",1);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,param_1[2],
                   "2onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1handlePackage(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_80 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,param_1[2],
                   "2onAfterSend(IOServerInterface*, IOSender::Handle, IOSendJob::Result, const SmartPtr<IOPackage>)"
                   ,param_1,
                   "1handleAfterSend(IOServerInterface*, IOSender::Handle, IOSendJob::Result, const SmartPtr<IOPackage>)"
                   ,1);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}


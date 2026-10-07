
void FUN_100038ea0(QObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100ba9b70;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9bf8;
  QMutex::QMutex((QMutex *)(param_1 + 0x38),0);
  puVar1 = PTR_shared_null_100ba2188;
  auVar2._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar2._0_8_ = PTR_shared_null_100ba2188;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  *(undefined **)(param_1 + 0x50) = puVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  param_1[0x58] = (QObject)0x0;
  FUN_1004c0790(param_1 + 0x10,0x9000,0x9000);
  QObject::connect(local_40,*(undefined8 *)
                             (*(long *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18) + 0x10),
                   "2onClientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1handleClientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_40[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  return;
}


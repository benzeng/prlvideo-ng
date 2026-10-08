
void FUN_100a5da70(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  QObject QVar1;
  undefined8 uVar2;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_1022389f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102238a70;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(QObject **)(param_1 + 0x28) = param_2;
  param_1[0x30] = (QObject)0x1;
  param_1[0x35] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_10009c520("SmartPChar",0,0);
  QObject::connect(local_38,param_1,"2sigQueueToGuiThread(const SmartPChar, unsigned)",param_1,
                   "1onDataReceived(const SmartPChar, unsigned)",2);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,param_1,"2sigDeferredVmActiveStateChanged(bool)",param_1,
                   "1onDeferredVmActiveStateChanged(bool)",2);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,param_1,"2sigToolStatus(bool)",param_1,"1onToolStatus(bool)",2);
  QMetaObject::Connection::~Connection(local_48);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar2 = FUN_100319390(uVar2);
  QObject::connect(local_50,uVar2,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                   "1configurationChanged(const CVmConfiguration &)",0);
  QMetaObject::Connection::~Connection(local_50);
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getKeyboardLayoutSync();
  QVar1 = (QObject)CVmKeyboardLayoutSync::isEnabled();
  param_1[0x30] = QVar1;
  FUN_100a4a120(param_1 + 0x10,param_3,0xb);
  uVar2 = FUN_100a5eef0(param_1);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


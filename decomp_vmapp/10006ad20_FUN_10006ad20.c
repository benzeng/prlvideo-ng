
void FUN_10006ad20(QObject *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long local_88;
  long local_80;
  QArrayData *local_78;
  long *local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa050;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x120) = 0;
  CDispCommonPreferences::CDispCommonPreferences((CDispCommonPreferences *)(param_1 + 0x128));
  CParallelsNetworkConfig::CParallelsNetworkConfig((CParallelsNetworkConfig *)(param_1 + 0x288));
  QMutex::QMutex((QMutex *)(param_1 + 0x360),0);
  *(undefined **)(param_1 + 0x368) = PTR_shared_null_100ba2180;
  *(undefined4 *)(param_1 + 0x370) = 0;
  pvVar3 = operator_new(0x4320);
  FUN_10042f940(pvVar3,param_2 + 0x18);
  *(void **)(param_1 + 0x18) = pvVar3;
  pvVar4 = operator_new(0x109f8);
  FUN_1000a3530(pvVar4,pvVar3,param_1);
  *(void **)(param_1 + 0x20) = pvVar4;
  QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   "2onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1handleIOPackage(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   "2onClientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1handleIOClientAttached(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   "2onClientDisconnected(IOSender::Handle)",param_1,
                   "1handleIOClientDisconnected(IOSender::Handle)",1);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   "2onAfterSend(IOServerInterface*, IOSender::Handle, IOSendJob::Result, const SmartPtr<IOPackage>)"
                   ,param_1,
                   "1handleIOAfterSend(IOServerInterface*, IOSender::Handle, IOSendJob::Result, const SmartPtr<IOPackage>)"
                   ,1);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x18),
                   "2sigLightWeightClientAttachedDetached(bool, unsigned int)",param_1,
                   "1handleLightWeightClientAttachedDetached(bool, unsigned int)",1);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  FUN_100430e90(*(undefined8 *)(param_1 + 0x18));
  lVar5 = *(long *)(param_1 + 0x20);
  local_78 = (QArrayData *)QString::fromAscii_helper("parallels.GuestOSInfo.guest.cross",0x21);
  FUN_100477170(&local_70,lVar5 + 0x10840,&local_78);
  lVar5 = 0;
  if (local_70 != (long *)0x0) {
    lVar5 = local_70[2];
  }
  QObject::connect(&local_68,lVar5,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onGuestOSRecordFilled(const CTISBase::Record, const CTISBase::RecordFields)",2
                  );
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006b03b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10006b03b:
  QObject::connect(&local_80,param_1,"2sigStartConnStatTimer()",param_1,"1onStartConnStatTimer()",2)
  ;
  bVar2 = 1;
  if (local_80 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  if (bVar2 != 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","bConnected",
                  "CVmCommandsHandler.cpp",0xc5,"CVmCommandsHandler");
  }
  QObject::connect(&local_88,param_1,"2sigKillConnStatTimer()",param_1,"1onKillConnStatTimer()",2);
  bVar2 = 1;
  if (local_88 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  if (bVar2 != 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","bConnected",
                  "CVmCommandsHandler.cpp",0xca,"CVmCommandsHandler");
  }
  return;
}


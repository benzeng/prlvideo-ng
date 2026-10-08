
undefined8 FUN_1002b5450(long param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint *puVar4;
  long local_1f8;
  CHostHardwareInfo local_1f0 [456];
  
  puVar4 = *(uint **)(param_1 + 0x30);
  if (puVar4[3] == puVar4[2]) {
    uVar3 = 0;
  }
  else {
    pvVar2 = operator_new(0x2a0);
    if (1 < *puVar4) {
      FUN_100036c40((undefined8 *)(param_1 + 0x30),puVar4[1]);
      puVar4 = *(uint **)(param_1 + 0x30);
    }
    uVar1 = puVar4[2];
    CHostHardwareInfo::CHostHardwareInfo(local_1f0);
    FUN_100285460(pvVar2,puVar4 + (long)(int)uVar1 * 2 + 4,2,local_1f0);
    CHostHardwareInfo::~CHostHardwareInfo(local_1f0);
    QObject::connect(&local_1f8,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onDetectOsFinished(PRL_RESULT)",0);
    if (local_1f8 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_1f8);
    CAbstractTask::execute();
    uVar3 = 1;
  }
  return uVar3;
}


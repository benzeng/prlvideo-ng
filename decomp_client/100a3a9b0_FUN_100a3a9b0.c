
void FUN_100a3a9b0(long param_1,undefined8 param_2)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  long local_48;
  CTaskGenericId local_40 [24];
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    pCVar1 = (CTaskGenericId *)CTaskManager::instance();
    FUN_1001d3460(local_40,param_2);
    uVar2 = CTaskManager::getTaskById(pCVar1);
    CTaskGenericId::~CTaskGenericId(local_40);
    QObject::connect(&local_48,uVar2,"2taskFinished(PRL_RESULT)",param_1,"1onVmDesktopOpened()",0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  return;
}


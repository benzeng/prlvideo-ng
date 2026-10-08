
undefined8 FUN_1006e9e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  void *pvVar3;
  long local_50;
  undefined **local_48 [3];
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_48,0x3e);
  local_48[0] = &PTR_FUN_1022735c0;
  cVar1 = CTaskManager::isTaskRunning(pCVar2);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_48);
  if (cVar1 == '\0') {
    pvVar3 = operator_new(200);
    FUN_1002f3fb0(pvVar3,param_2,param_3);
    QObject::connect(&local_50,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onTaskRequestFreeUpgradeFinished(PRL_RESULT)",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    CAbstractTask::execute();
  }
  else if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,
                  "A task to request free product upgrade is already running. Skip another request."
                 );
  }
  return 0x80000013;
}


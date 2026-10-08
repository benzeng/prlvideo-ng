
void FUN_1007ebaf0(long param_1)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  byte bVar3;
  long local_40;
  CTaskGenericId local_38 [24];
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100178ec0(local_38,param_1 + 0x18);
  CTaskManager::getTaskById(pCVar1);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102207a10);
  CTaskGenericId::~CTaskGenericId(local_38);
  if (lVar2 != 0) {
    QObject::connect(&local_40,lVar2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onTaskTaskManageAntivirusFinished()",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    bVar3 = CAbstractTask::isFinished();
    FUN_1007ec330(param_1,bVar3 ^ 1);
  }
  return;
}


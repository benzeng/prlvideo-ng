
void FUN_1003ad550(undefined8 param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  void *pvVar3;
  long local_58;
  undefined4 local_4c;
  Data *local_48;
  undefined **local_40 [3];
  undefined1 local_21;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_40,0x99);
  local_40[0] = &PTR_FUN_10226c630;
  cVar1 = CTaskManager::isTaskRunning(pCVar2);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_40);
  if (cVar1 != '\0') {
    return;
  }
  pvVar3 = operator_new(0x30);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_4c = 0;
  FUN_100129840(&local_48,&local_4c);
  FUN_100069840(pvVar3,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ad600;
    }
    QListData::dispose(local_48);
  }
LAB_1003ad600:
  QObject::connect(&local_58,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onManageOpenInIEPluginTaskFinished(PRL_RESULT)",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  CAbstractTask::execute();
  return;
}



void FUN_1001b9c70(undefined8 param_1,long param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  void *pvVar4;
  long local_60;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_58,param_2);
  FUN_1001bace0(local_50,&local_58);
  plVar3 = (long *)CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b9d05;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001b9d05:
  if ((plVar3 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
  }
  pvVar4 = operator_new(0x40);
  FUN_100297c00(pvVar4,param_2,param_3,param_4,param_5);
  QObject::connect(&local_60,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1togglePresentationModeFinished(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  CAbstractTask::execute();
  return;
}


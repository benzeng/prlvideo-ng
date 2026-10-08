
void FUN_1007c84b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  void *pvVar6;
  long local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0x30000004) {
    return;
  }
  uVar3 = FUN_10018f5c0(*(undefined8 *)(param_1 + 0x18));
  iVar2 = FUN_1007c7cf0(uVar3);
  if (iVar2 != 1) {
    return;
  }
  FUN_100188480(&local_50,*(undefined8 *)(param_1 + 0x18));
  FUN_1002d2cd0(local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c853f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007c853f:
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  lVar5 = CTaskManager::getTaskById(pCVar4);
  if ((lVar5 == 0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pvVar6 = operator_new(0x40);
    FUN_1002d1e30(pvVar6,*(undefined8 *)(param_1 + 0x18));
    QObject::connect(&local_58,pvVar6,"2taskFinished(PRL_RESULT)",param_1,
                     "1onNetworkSettingsReceived(PRL_RESULT)",0);
    if (local_58 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    CAbstractTask::execute();
  }
  CTaskGenericId::~CTaskGenericId(local_48);
  return;
}


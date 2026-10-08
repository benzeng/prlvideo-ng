
undefined8 FUN_1002eb960(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  undefined8 uVar4;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  CTaskGenericId local_58 [24];
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  cVar1 = UpgradeUtils::isNeedToInstallUpdateOnAppStart((int *)0x0);
  if (cVar1 != '\0') {
    return 0x80015355;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_40,0x5f);
  lVar3 = CTaskManager::getTaskById(pCVar2);
  if (lVar3 != 0) {
    CTaskGenericId::~CTaskGenericId(local_40);
    return 0x80015388;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_58,0x72);
  lVar3 = CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_58);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (lVar3 != 0) {
    return 0x80015388;
  }
  FUN_1002eb2b0(param_1);
  FUN_100060bb0();
  lVar3 = FUN_100061a60(param_1 + 0x30);
  if (lVar3 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar4 = CTaskManager::instance();
    local_98 = (QArrayData *)QString::fromAscii_helper("onVmListReceived",0x10);
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    FUN_100a1c6b0(local_90,&local_98,param_1,&local_a8);
    CTaskManager::addTaskWatcher(uVar4,local_90,0x6a,4);
    QVariant::~QVariant(local_70);
    if (local_90[0] != (int *)0x0) {
      LOCK();
      *local_90[0] = *local_90[0] + -1;
      local_21 = *local_90[0] != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_90[0] != (int *)0x0)) {
        operator_delete(local_90[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002ebb15;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_1002ebb15:
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}


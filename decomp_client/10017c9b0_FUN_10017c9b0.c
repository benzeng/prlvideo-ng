
void FUN_10017c9b0(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  void *pvVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [24];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_1001548f0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017ca21;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017ca21:
  if (lVar3 == 0) {
    return;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  FUN_1001884b0(&local_50,lVar3);
  FUN_100188480(&local_58,lVar3);
  FUN_10017cde0(local_48,&local_50,&local_58);
  cVar1 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017caa3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10017caa3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017cad3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10017cad3:
  if (cVar1 == '\0') {
    pvVar5 = operator_new(0x40);
    FUN_100227250(pvVar5,lVar3,0,4,0);
    CAbstractTask::execute();
  }
  return;
}


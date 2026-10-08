
byte FUN_1007c9220(long param_1)

{
  byte bVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  QArrayData *local_38;
  CTaskGenericId local_30 [31];
  undefined1 local_11;
  
  FUN_100188480(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  FUN_1002d8420(local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007c9279;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007c9279:
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  lVar3 = CTaskManager::getTaskById(pCVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = CAbstractTask::isFinished();
    bVar1 = bVar1 ^ 1;
  }
  CTaskGenericId::~CTaskGenericId(local_30);
  return bVar1;
}


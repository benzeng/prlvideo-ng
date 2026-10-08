
undefined1 FUN_1006af190(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  long lVar4;
  QArrayData *local_38;
  CTaskGenericId local_30 [31];
  undefined1 local_11;
  
  iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
  if ((iVar2 != 0x30000004) &&
     (iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20)), iVar2 != 0x30000005)) {
    return 0;
  }
  FUN_100188480(&local_38,*(undefined8 *)(param_1 + 0x20));
  FUN_1002d39d0(local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006af208;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006af208:
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  lVar4 = CTaskManager::getTaskById(pCVar3);
  uVar1 = 1;
  if (lVar4 != 0) {
    uVar1 = CAbstractTask::isFinished();
  }
  CTaskGenericId::~CTaskGenericId(local_30);
  return uVar1;
}


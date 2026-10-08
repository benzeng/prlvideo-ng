
undefined8 FUN_1002183c0(long param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_50,uVar3);
  FUN_1002126f0(local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100218437;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100218437:
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  cVar1 = CTaskManager::isTaskRunning(pCVar2);
  if (cVar1 == '\0') goto LAB_10021852c;
  local_90 = (QArrayData *)QString::fromAscii_helper("onExternalEditVmTaskFinished",0x1c);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002184dc;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002184dc:
  uVar3 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar3,local_88,local_48,4);
  CAbstractTask::setWaitForSubTaskCompletion();
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_29 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
LAB_10021852c:
  CTaskGenericId::~CTaskGenericId(local_48);
  return 0;
}


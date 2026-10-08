
void FUN_1001ba360(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_90;
  CTaskGenericId local_88 [24];
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("taskSwitchViewModeFinished",0x1a);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  FUN_100a1c6b0(local_58,&local_60,param_1,&local_70);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001ba404;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001ba404:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100188480(&local_90,uVar1);
  FUN_100033dd0(local_88,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001ba470;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001ba470:
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = CTaskManager::instance();
    CTaskManager::removeTaskWatcher(uVar1,local_58,local_88,0x24);
  }
  else {
    uVar1 = CTaskManager::instance();
    CTaskManager::addTaskWatcher(uVar1,local_58,local_88,0x24);
  }
  CTaskGenericId::~CTaskGenericId(local_88);
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  return;
}


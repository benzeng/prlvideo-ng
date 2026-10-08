
void FUN_100235690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *local_90;
  CTaskGenericId local_88 [24];
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar1 = CTaskManager::instance();
  uVar2 = CMessageManager::instance();
  local_70 = (QArrayData *)QString::fromAscii_helper("1showMessageBox(const QVariant&)",0x20);
  FUN_100a1c600(local_68,uVar2,&local_70,param_2);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_90,uVar2);
  FUN_100033dd0(local_88,&local_90);
  CTaskManager::addTaskWatcher(uVar1,local_68,local_88,4);
  CTaskGenericId::~CTaskGenericId(local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100235764;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100235764:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}


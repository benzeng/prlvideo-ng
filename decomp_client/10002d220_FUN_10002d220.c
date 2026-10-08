
void FUN_10002d220(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  CTaskGenericId local_f8 [24];
  Data_conflict local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  QVariant local_a8 [2];
  CTaskGenericId local_90 [24];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("2reqUpdateSystemUIVisibility()",0x1e);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(local_60,param_1,&local_68,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002d2a7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10002d2a7:
  uVar2 = CTaskManager::instance();
  FUN_100033dd0(local_90,param_2);
  CTaskManager::addTaskWatcher(uVar2,local_60,local_90,0x22);
  CTaskGenericId::~CTaskGenericId(local_90);
  local_d0 = (QArrayData *)QString::fromAscii_helper("1onSwitchViewModeFinished()",0x1b);
  local_d8 = 0x80000000;
  local_e0.field7 = 0;
  FUN_100a1c600(&local_c8,param_1,&local_d0,&local_e0);
  QVariant::~QVariant((QVariant *)&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002d36e;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10002d36e:
  uVar2 = CTaskManager::instance();
  FUN_100033dd0(local_f8,param_2);
  CTaskManager::addTaskWatcher(uVar2,&local_c8,local_f8,0x24);
  CTaskGenericId::~CTaskGenericId(local_f8);
  QVariant::~QVariant(local_a8);
  piVar1 = (int *)CONCAT71(uStack_c7,local_c8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)CONCAT71(uStack_c7,local_c8) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_c7,local_c8));
    }
  }
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_c8 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_c8) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return;
}


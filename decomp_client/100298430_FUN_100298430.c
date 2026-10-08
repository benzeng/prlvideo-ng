
undefined8 FUN_100298430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *local_98;
  CTaskGenericId local_90 [24];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    FUN_100df99c0("","prl_client_app",2,"Vm instance is null.");
    return 0x80000009;
  }
  uVar1 = FUN_10018c280();
  uVar1 = FUN_100319cb0(uVar1);
  FUN_100334ca0(uVar1,1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("taskSwitchViewModeStarted",0x19);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c6b0(local_60,&local_68,param_1,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002984fc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002984fc:
  uVar2 = CTaskManager::instance();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_98,uVar1);
  FUN_100033dd0(local_90,&local_98);
  CTaskManager::addTaskWatcher(uVar2,local_60,local_90,0x22);
  CTaskGenericId::~CTaskGenericId(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100298594;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100298594:
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return 0;
}


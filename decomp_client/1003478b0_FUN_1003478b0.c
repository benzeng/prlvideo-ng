
void FUN_1003478b0(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  QArrayData *local_c8;
  CTaskGenericId local_c0 [24];
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  long local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  uVar3 = FUN_10098ae20();
  QObject::connect(&local_30,uVar3,"2battStateChanged( BattWatcher::BatteryState )",param_1,
                   "1onBattStateChanged( BattWatcher::BatteryState )",2);
  bVar1 = 1;
  if (local_30 != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_38,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged( VIRTUAL_MACHINE_STATE )",0);
  if ((bVar1 == 0) && (local_38 != 0)) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2timeout()",param_1,
                     "1onResumeAutopausedVmTimeout()",0);
    if ((cVar2 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,param_1 + 0x30,"2displayStatusChanged()",param_1,
                       "1onDisplayStateChanged()",2);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,param_1 + 0x30,"2displayStatusChanged()",param_1,
                       "1onDisplayStateChanged()",2);
      if ((cVar2 != '\0') && (local_48 != 0)) {
        cVar2 = QMetaObject::Connection::isConnected_helper();
        goto LAB_100347a95;
      }
    }
    cVar2 = '\0';
  }
  else {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar2 = '\0';
    QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x28),"2timeout()",param_1,
                     "1onResumeAutopausedVmTimeout()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,param_1 + 0x30,"2displayStatusChanged()",param_1,
                     "1onDisplayStateChanged()",2);
  }
LAB_100347a95:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018c280(uVar3);
  uVar3 = FUN_100319bf0(uVar3);
  local_50 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.win",0x2b);
  lVar4 = FUN_10032d8b0(uVar3,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100347b19;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100347b19:
  if (lVar4 != 0) {
    QObject::connect(&local_58,lVar4,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onDesktopUtilitiesTISRecordChanged()",0);
    bVar6 = cVar2 != '\0';
    cVar2 = '\0';
    if (bVar6) {
      if (local_58 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","ok",
                  "VmDesktop/Logics/CVmPowerOptimizationLogic.cpp",0x6c,"setupSignals");
  }
  local_98 = (QArrayData *)QString::fromAscii_helper("1onSwitchViewModeFinished()",0x1b);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100347c4e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100347c4e:
  uVar5 = CTaskManager::instance();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_c8,uVar3);
  FUN_100033dd0(local_c0,&local_c8);
  CTaskManager::addTaskWatcher(uVar5,local_90,local_c0,0x24);
  CTaskGenericId::~CTaskGenericId(local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100347ce9;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100347ce9:
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
  return;
}


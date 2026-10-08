
void FUN_100367520(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_d8;
  CTaskGenericId local_d0 [24];
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100323e00(uVar3);
  uVar4 = FUN_100319be0(uVar3);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_38,uVar3,
                   "2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",param_1,
                   "1updateWidgetResizeMode()",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_40,uVar3,"2scaleFactorChanged(qreal, qreal)",param_1,
                   "1onVmDisplayScaleFactorChanged(qreal,qreal)",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100323dd0(uVar3);
  cVar1 = '\0';
  QObject::connect(&local_48,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,uVar4,
                   "2vmScreenSizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE )",param_1,
                   "1onVmScreenSizeChanged(const QString&, PRL_IO_DISPLAY_SCREEN_SIZE)",0);
  if ((cVar1 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,uVar4,
                     "2vmScreenRegionChanged(const QString&, PRL_IO_DISPLAY_SCREEN_REGION)",param_1,
                     "1onVmScreenRegionChanged(const QString&, PRL_IO_DISPLAY_SCREEN_REGION)",0);
LAB_1003677f2:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect((Connection *)&local_60,uVar4,
                     "2vmDynResToolStatusChanged( const QString&, PRL_BOOL)",param_1,
                     "1updateWidgetResizeMode()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = FUN_10037a510(*(undefined8 *)(param_1 + 0x20));
LAB_100367842:
    QObject::connect(&local_68,uVar3,"2transitionStateChanged()",param_1,"1updateWidgetResizeMode()"
                     ,0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,uVar4,
                     "2vmScreenRegionChanged(const QString&, PRL_IO_DISPLAY_SCREEN_REGION)",param_1,
                     "1onVmScreenRegionChanged(const QString&, PRL_IO_DISPLAY_SCREEN_REGION)",0);
    if ((cVar1 == '\0') || (local_58 == 0)) goto LAB_1003677f2;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,uVar4,"2vmDynResToolStatusChanged( const QString&, PRL_BOOL)",param_1
                     ,"1updateWidgetResizeMode()",0);
    if ((cVar1 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = FUN_10037a510(*(undefined8 *)(param_1 + 0x20));
      goto LAB_100367842;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = FUN_10037a510(*(undefined8 *)(param_1 + 0x20));
    QObject::connect(&local_68,uVar3,"2transitionStateChanged()",param_1,"1updateWidgetResizeMode()"
                     ,0);
    if ((cVar1 != '\0') && (local_68 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  local_a8 = (QArrayData *)QString::fromAscii_helper("updateWidgetResizeMode",0x16);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  FUN_100a1c6b0(local_a0,&local_a8,param_1,&local_b8);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003678df;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003678df:
  uVar4 = CTaskManager::instance();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_d8,uVar3);
  FUN_100033dd0(local_d0,&local_d8);
  CTaskManager::addTaskWatcher(uVar4,local_a0,local_d0,0x26);
  CTaskGenericId::~CTaskGenericId(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036797a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10036797a:
  QVariant::~QVariant(local_80);
  if (local_a0[0] != (int *)0x0) {
    LOCK();
    *local_a0[0] = *local_a0[0] + -1;
    local_29 = *local_a0[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_a0[0] != (int *)0x0)) {
      operator_delete(local_a0[0]);
    }
  }
  return;
}


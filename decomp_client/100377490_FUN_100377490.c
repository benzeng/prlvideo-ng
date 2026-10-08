
void FUN_100377490(long param_1)

{
  CSlotInfo *pCVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long local_128;
  Data_conflict local_120;
  undefined4 local_118;
  QArrayData *local_110;
  int *local_108 [4];
  QVariant local_e8 [2];
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  uVar4 = CHostDesktopWorkspacesController::instance();
  QObject::connect(&local_30,uVar4,"2aboutToUpdateWorkspaces()",param_1,"1showVmNameSplash()",2);
  if (local_30 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x38),"2liveVmVisibleChanged(bool)",param_1,
                   "1onLiveVmVisibleChanged(bool)",0);
  if ((cVar2 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x38),
                     "2liveVmRectChanged(const QRect&)",param_1,"1onLiveVmRectChanged(const QRect&)"
                     ,0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
LAB_100377656:
    cVar2 = '\0';
    QObject::connect(&local_48,uVar4,"2visibleChanged(bool)",param_1,
                     "1onOverlayVisibilityChanged(bool)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x38),"2liveVmRectChanged(const QRect&)",
                     param_1,"1onLiveVmRectChanged(const QRect&)",0);
    if ((cVar2 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_100377656;
    }
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar2 = '\0';
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x38),"2visibleChanged(bool)",param_1,
                     "1onOverlayVisibilityChanged(bool)",0);
    if (cVar3 != '\0') {
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100323dd0(uVar4);
  cVar3 = '\0';
  QObject::connect(&local_50,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1updateConsolePaintBlocked()",0);
  if (cVar2 != '\0') {
    if (local_50 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x58),"2windowWillEnterFullScreen()",param_1,
                   "1onWindowWillEnterFullScreen()",0);
  if ((cVar3 == '\0') || (local_58 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect((Connection *)&local_60,*(undefined8 *)(param_1 + 0x58),
                     "2windowDidEnterFullScreen()",param_1,"1onWindowDidEnterFullScreen()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
LAB_100377910:
    QObject::connect((Connection *)&local_68,uVar4,"2windowWillExitFullScreen()",param_1,
                     "1onWindowWillExitFullScreen()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
LAB_10037793c:
    QObject::connect((Connection *)&local_70,uVar4,"2windowDidExitFullScreen()",param_1,
                     "1onWindowDidExitFullScreen()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
LAB_100377968:
    QObject::connect((Connection *)&local_78,uVar4,
                     "2startWindowCustomAnimationToEnterFullScreenWithDuration(uint)",param_1,
                     "1onStartWindowCustomAnimationToEnterFullScreenWithDuration(uint)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
LAB_100377994:
    cVar2 = '\0';
    QObject::connect(&local_80,uVar4,"2startWindowCustomAnimationToExitFullScreenWithDuration(uint)"
                     ,param_1,"1onStartWindowCustomAnimationToExitFullScreenWithDuration(uint)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x58),"2windowDidEnterFullScreen()",param_1
                     ,"1onWindowDidEnterFullScreen()",0);
    if ((cVar2 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_100377910;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x58),"2windowWillExitFullScreen()",param_1
                     ,"1onWindowWillExitFullScreen()",0);
    if ((cVar2 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_10037793c;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x58),"2windowDidExitFullScreen()",param_1,
                     "1onWindowDidExitFullScreen()",0);
    if ((cVar2 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_100377968;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x58),
                     "2startWindowCustomAnimationToEnterFullScreenWithDuration(uint)",param_1,
                     "1onStartWindowCustomAnimationToEnterFullScreenWithDuration(uint)",0);
    if ((cVar2 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_100377994;
    }
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    cVar2 = '\0';
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x58),
                     "2startWindowCustomAnimationToExitFullScreenWithDuration(uint)",param_1,
                     "1onStartWindowCustomAnimationToExitFullScreenWithDuration(uint)",0);
    if (cVar3 != '\0') {
      if (local_80 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  pCVar1 = *(CSlotInfo **)(param_1 + 0x58);
  local_c0 = (QArrayData *)QString::fromAscii_helper("customWindowsToEnterFullScreen",0x1e);
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  FUN_100a1c6b0(local_b8,&local_c0,param_1,&local_d0);
  CMacFullScreenDelegate::setEnterFullScreenWindowsGetter(pCVar1);
  QVariant::~QVariant(local_98);
  if (local_b8[0] != (int *)0x0) {
    LOCK();
    *local_b8[0] = *local_b8[0] + -1;
    local_21 = *local_b8[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_b8[0] != (int *)0x0)) {
      operator_delete(local_b8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100377a7e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100377a7e:
  pCVar1 = *(CSlotInfo **)(param_1 + 0x58);
  local_110 = (QArrayData *)QString::fromAscii_helper("customWindowsToExitFullScreen",0x1d);
  local_118 = 0x80000000;
  local_120.field7 = 0;
  FUN_100a1c6b0(local_108,&local_110,param_1,&local_120);
  CMacFullScreenDelegate::setExitFullScreenWindowsGetter(pCVar1);
  QVariant::~QVariant(local_e8);
  if (local_108[0] != (int *)0x0) {
    LOCK();
    *local_108[0] = *local_108[0] + -1;
    local_21 = *local_108[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_108[0] != (int *)0x0)) {
      operator_delete(local_108[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_120);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_21 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100377b54;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100377b54:
  if (*(long *)(param_1 + 0x30) != 0) {
    QObject::connect(&local_128,*(long *)(param_1 + 0x30),"2aliveChanged(bool)",param_1,
                     "1updateConsolePaintBlocked()",0);
    if ((cVar2 != '\0') && (local_128 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_128);
  }
  return;
}


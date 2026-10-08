
void FUN_100349710(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  QArrayData *local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319bf0(uVar3);
  local_30 = (QArrayData *)QString::fromAscii_helper("parallels.WindowsUpdate.guest.win",0x21);
  lVar4 = FUN_10032d8b0(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100349793;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100349793:
  if (lVar4 != 0) {
    QObject::connect(&local_38,lVar4,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onWinUpdateRecordChanged(SdkHandleWrap, PRL_UINT32)",0);
    if (local_38 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      if (cVar1 != '\0') goto LAB_100349828;
    }
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                  "VmDesktop/Logics/CVmDesktopWinUpdateLogic.cpp",0x80,"connectSignals");
  }
LAB_100349828:
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319bf0(uVar3);
  local_40 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.win",0x2b);
  lVar4 = FUN_10032d8b0(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10034989b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10034989b:
  if (lVar4 != 0) {
    QObject::connect(&local_48,lVar4,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onUtilityToolRecordChanged()",0);
    if (local_48 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      if (cVar1 != '\0') goto LAB_100349930;
    }
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                  "VmDesktop/Logics/CVmDesktopWinUpdateLogic.cpp",0x87,"connectSignals");
  }
LAB_100349930:
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = FUN_100319390(uVar3);
  if (lVar4 == 0) goto LAB_100349a84;
  QObject::connect(&local_50,lVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_50 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,lVar4,
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,"1onVmConfigChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     0);
LAB_100349a11:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
LAB_100349a16:
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                  "VmDesktop/Logics/CVmDesktopWinUpdateLogic.cpp",0x90,"connectSignals");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,lVar4,
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,"1onVmConfigChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     0);
    if ((cVar1 == '\0') || (local_58 == 0)) goto LAB_100349a11;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    if (cVar1 == '\0') goto LAB_100349a16;
  }
  FUN_10018c2b0(lVar4);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getWinMaintenance();
  uVar2 = CVmWinMaintenance::isEnabled();
  *(undefined1 *)(param_1 + 0x30) = uVar2;
LAB_100349a84:
  uVar3 = CMessageManager::instance();
  QObject::connect(&local_60,uVar3,"2notificationClicked(PRL_RESULT,QString)",param_1,
                   "1onNotificationClicked(PRL_RESULT,QString)",0);
  if (local_60 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_60);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                "VmDesktop/Logics/CVmDesktopWinUpdateLogic.cpp",0x95,"connectSignals");
  return;
}


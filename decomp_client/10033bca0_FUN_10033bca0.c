
void FUN_10033bca0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
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
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033bd27;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10033bd27:
  cVar2 = '\x01';
  if (lVar4 != 0) {
    QObject::connect(&local_48,lVar4,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onDesktopUtilitiesTISRecordChanged( SdkHandleWrap, PRL_UINT32 )",0);
    if (local_48 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      cVar2 = '\0';
      QObject::connect(&local_50,lVar4,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                       "1onDesktopUtilitiesTISRecordRemoved( SdkHandleWrap )",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      cVar2 = '\0';
      QObject::connect(&local_50,lVar4,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                       "1onDesktopUtilitiesTISRecordRemoved( SdkHandleWrap )",0);
      if (cVar1 != '\0') {
        if (local_50 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
  }
  local_58 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesUser.guest.win",0x28);
  lVar4 = FUN_10032d8b0(uVar3,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033be4b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10033be4b:
  if (lVar4 != 0) {
    QObject::connect(&local_60,lVar4,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onDesktopUtilitiesTISRecordChanged( SdkHandleWrap, PRL_UINT32 )",0);
    if ((cVar2 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      cVar2 = '\0';
      QObject::connect(&local_68,lVar4,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                       "1onDesktopUtilitiesTISRecordRemoved( SdkHandleWrap )",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      cVar2 = '\0';
      QObject::connect(&local_68,lVar4,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                       "1onDesktopUtilitiesTISRecordRemoved( SdkHandleWrap )",0);
      if (cVar1 != '\0') {
        if (local_68 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319be0(uVar3);
  QObject::connect(&local_70,uVar3,
                   "2toolsDesktopControlsVisibilityChanged( const QString&, PRL_IO_DESKTOP_UTILITIES_STATE )"
                   ,param_1,
                   "1onDesktopControlsVisibilityChanged( const QString&, PRL_IO_DESKTOP_UTILITIES_STATE )"
                   ,0);
  if ((cVar2 == '\0') || (local_70 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    cVar2 = '\0';
    QObject::connect(&local_78,uVar3,"2vmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",
                     param_1,"1onVmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    cVar2 = '\0';
    QObject::connect(&local_78,uVar3,"2vmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",
                     param_1,"1onVmDesktopIOStateChanged( const QString&, PRL_IO_STATE )",0);
    if (cVar1 != '\0') {
      if (local_78 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c00(uVar3);
  QObject::connect(&local_80,uVar3,"2coherenceAboutToStart()",param_1,"1onBeforeCoherenceStarted()",
                   0);
  if ((cVar2 == '\0') || (local_80 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,uVar3,"2coherenceStartFailed(unsigned int)",param_1,
                     "1onCoherenceStartFailed(unsigned int)",0);
LAB_10033c197:
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,uVar3,"2coherenceStopped( bool, unsigned int )",param_1,
                     "1onCoherenceStopped()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,uVar3,"2coherenceStartFailed(unsigned int)",param_1,
                     "1onCoherenceStartFailed(unsigned int)",0);
    if ((cVar2 == '\0') || (local_88 == 0)) goto LAB_10033c197;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,uVar3,"2coherenceStopped( bool, unsigned int )",param_1,
                     "1onCoherenceStopped()",0);
    if ((cVar2 != '\0') && (local_90 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_90);
      QObject::connect(&local_98,uVar3,"2indentsChanged()",param_1,"1onCoherenceIndentsChanged()",0)
      ;
      if ((cVar2 != '\0') && (local_98 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10033c1ed;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  QObject::connect(&local_98,uVar3,"2indentsChanged()",param_1,"1onCoherenceIndentsChanged()",0);
LAB_10033c1ed:
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  return;
}


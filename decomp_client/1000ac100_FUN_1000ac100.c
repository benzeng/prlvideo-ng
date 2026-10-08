
void FUN_1000ac100(undefined8 *param_1,char *param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  Connection local_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  QArrayData *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  QVariant local_90;
  Data_conflict local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_1000a75f0();
  *param_1 = &PTR_FUN_1021f8a10;
  FUN_1000fff10();
  puVar1 = PTR_shared_null_1021e15e8;
  auVar6._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar6._0_8_ = PTR_shared_null_1021e15e8;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar6;
  param_1[0xf] = puVar1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_10005a0b0((long)param_1 + 0x95);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"CSharedAppsDsp_p constructor");
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      return;
    }
    *param_2 = '\0';
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Application preferences",0x17);
  QSettings::beginGroup((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ac21c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000ac21c:
  local_68 = (QArrayData *)QString::fromAscii_helper("SGA Icon Version",0x10);
  QVariant::QVariant(&local_78,0);
  QSettings::value((QString *)&local_60,&local_48);
  uVar3 = QVariant::toInt((bool *)&local_60);
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ac2a5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000ac2a5:
  *(bool *)((long)param_1 + 0x94) = *(int *)(param_1 + 0x12) != 2;
  if (*(int *)(param_1 + 0x12) != 2) {
    *(undefined4 *)(param_1 + 0x12) = 2;
    local_80.field7 = QString::fromAscii_helper("SGA Icon Version",0x10);
    QVariant::QVariant(&local_90,*(int *)(param_1 + 0x12));
    QSettings::setValue((QString *)&local_48,(QVariant *)&local_80);
    QVariant::~QVariant(&local_90);
    if (*(int *)local_80.field15 != -1) {
      if (*(int *)local_80.field15 != 0) {
        LOCK();
        *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
        local_31 = *(int *)local_80.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ac33e;
      }
      QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
    }
  }
LAB_1000ac33e:
  FUN_1000b7bb0();
  FUN_1000b7bc0();
  QObject::connect(&local_98,param_1,
                   "2sigDockBeginConfigure(const QString, const QString, const PRL_RESULT)",param_1,
                   "1onDockBeginConfigure(const QString, const QString, const PRL_RESULT)",2);
  bVar2 = 1;
  if (local_98 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (bVar2 != 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect self signals and slots");
    goto LAB_1000ac6f5;
  }
  QObject::connect(&local_a0,param_1,"2sigDockSetAppsFolderAddedFlag(const QString, const bool)",
                   param_1,"1onDockSetAppsFolderAddedFlag(const QString, const bool)",2);
  bVar2 = 1;
  if (local_a0 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  if (bVar2 != 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect self signals and slots");
    goto LAB_1000ac6f5;
  }
  uVar4 = FUN_100d752c0();
  QObject::connect(&local_a8,uVar4,"2sigAppsStateChanged(bool)",param_1,
                   "1parentalSettingsChanged(bool)",2);
  bVar2 = 1;
  if (local_a8 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  if (bVar2 != 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect parental control signals and slots");
    goto LAB_1000ac6f5;
  }
  pvVar5 = operator_new(0x20);
  local_b0 = (QArrayData *)QString::fromAscii_helper("127.0.0.1",9);
  FUN_10003d450(pvVar5,&local_b0,0,0);
  param_1[0x10] = pvVar5;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ac527;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1000ac527:
  FUN_10003d580(param_1[0x10]);
  QObject::connect(&local_b8,param_1[0x10],
                   "2sigPackageReceived(const ProcessSerialNumber, const int, const QString, const QByteArray)"
                   ,param_1,
                   "1packageReceived(const ProcessSerialNumber, const int, const QString, const QByteArray)"
                   ,0);
  bVar2 = 1;
  if (local_b8 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  if (bVar2 == 0) {
    QObject::connect(&local_c0,param_1[0x10],
                     "2sigClientDisconnected(const ProcessSerialNumber, const QString)",param_1,
                     "1clientDisconnected(const ProcessSerialNumber, const QString)",0);
    bVar2 = 1;
    if (local_c0 != 0) {
      bVar2 = QMetaObject::Connection::isConnected_helper();
      bVar2 = bVar2 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_c0);
    if (bVar2 == 0) {
      pvVar5 = operator_new(0x10);
      FUN_100055c80(pvVar5);
      param_1[0x11] = pvVar5;
      QObject::connect(&local_c8,pvVar5,"2sigAppTerminated(const QString)",param_1,
                       "1onAppTerminated(const QString)",2);
      bVar2 = 1;
      if (local_c8 != 0) {
        bVar2 = QMetaObject::Connection::isConnected_helper();
        bVar2 = bVar2 ^ 1;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_c8);
      if (bVar2 != 0) {
        FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect apps notification signals");
      }
      QObject::connect(local_d0,param_1,"2sigBeforeClientRemoved(const QString)",param_1,
                       "1onBeforeClientRemoved(const QString)",1);
      QMetaObject::Connection::~Connection(local_d0);
      FUN_1000aaef0(&DAT_102310898,param_1);
      if (param_2 != (char *)0x0) {
        *param_2 = '\x01';
      }
    }
    else {
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect stub server signals and slots");
    }
  }
  else {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to connect stub server signals and slots");
  }
LAB_1000ac6f5:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}


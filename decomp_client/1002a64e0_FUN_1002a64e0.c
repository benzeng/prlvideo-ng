
undefined8 FUN_1002a64e0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 local_c0 [16];
  long local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QFileInfo local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  undefined *local_58;
  QArrayData *local_50;
  undefined *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  FileDownloadInfo::destinationFilePath();
  cVar2 = QFile::exists(&local_38);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Antivirus uninstaller file does not exist : %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a68f9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1002a68f9:
    puVar1 = PTR_shared_null_1021e15e8;
    local_48 = PTR_shared_null_1021e15e8;
    FUN_1002a0af0(&local_50,param_1);
    FUN_1000341d0(&local_48,&local_50);
    local_58 = puVar1;
    FUN_1002a17d0(param_1,0x80015256,&local_48,&local_58);
    FUN_100039a80(&local_58);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a6972;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002a6972:
    FUN_100039a80(&local_48);
    goto LAB_1002a697b;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("%1/%2.mnt",9);
  FileUtils::tempPath();
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  QFileInfo::QFileInfo(local_88,&local_38);
  QFileInfo::fileName();
  QString::arg(&local_60,&local_68,&local_80,0,0x20);
  QString::operator=((QString *)(param_1 + 0xc0),&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a65c2;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002a65c2:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a65f2;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002a65f2:
  QFileInfo::~QFileInfo(local_88);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a662b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002a662b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a665b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002a665b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a668b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002a668b:
  local_a0 = (QArrayData *)
             QString::fromAscii_helper
                       ("hdiutil attach \"%1\" -mountpoint \"%2/\" -nobrowse -readonly",0x39);
  QString::arg(&local_98,&local_a0,&local_38,0,0x20);
  QString::arg(&local_90,&local_98,(QString *)(param_1 + 0xc0),0,0x20);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a6716;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002a6716:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a674c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002a674c:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"\n%s",local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a67cd;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_1002a67cd:
  QObject::connect(&local_b0,param_1 + 0x48,"2finished()",param_1,"1onMountImageFinished()",0);
  if (local_b0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  FUN_1002a98c0(local_c0,FUN_1002a6cf0,&local_90);
  FUN_1002a9990(param_1 + 0x48,local_c0);
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_1002a9d80(local_c0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a697b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002a697b:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}


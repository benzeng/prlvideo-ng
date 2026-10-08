
undefined8 FUN_1007e1f30(QObject *param_1)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QProcess *this;
  QStringList *pQVar4;
  long local_148;
  long local_140;
  AnonymousUnion0 local_138;
  QString local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  undefined *local_f8;
  QArrayData *local_f0;
  QFileInfo local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  undefined1 local_68 [32];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FileDownloadInfo::destinationFilePath();
  cVar1 = QFile::exists(&local_48);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Parallels Toolbox file does not exist : %s",
                  (QArrayData *)(local_68._24_8_ + *(long *)(local_68._24_8_ + 0x10)));
    if (*(int *)local_68._24_8_ != -1) {
      if (*(int *)local_68._24_8_ != 0) {
        LOCK();
        *(int *)local_68._24_8_ = *(int *)local_68._24_8_ + -1;
        local_31 = *(int *)local_68._24_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e25b8;
      }
      QArrayData::deallocate((QArrayData *)local_68._24_8_,1,8);
    }
LAB_1007e25b8:
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar2 = CMessageManager::instance();
    local_68._0_8_ = PTR_shared_null_1021e15e8;
    pQVar4 = (QStringList *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar4 = *(QStringList **)(param_1 + 0x20);
    }
    local_68._16_8_ = PTR_shared_null_1021e15e8;
    QMetaObject::tr(local_68 + 8,(char *)&PTR_staticMetaObject_10222ee00,0x1e02538);
    FUN_1000341d0(local_68 + 0x10,local_68 + 8);
    local_a8 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    FUN_100a1c600(local_a0,param_1,&local_a8,&local_b8);
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015472,pQVar4,(QStringList *)(local_68 + 0x10),
               (CSlotInfo *)local_68,SUB81(local_a0,0));
    QVariant::~QVariant(local_80);
    if (local_a0[0] != (int *)0x0) {
      LOCK();
      *local_a0[0] = *local_a0[0] + -1;
      local_31 = *local_a0[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_a0[0] != (int *)0x0)) {
        operator_delete(local_a0[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_b8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e2707;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1007e2707:
    FUN_100039a80(local_68);
    if (*(int *)local_68._8_8_ != -1) {
      if (*(int *)local_68._8_8_ != 0) {
        LOCK();
        *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
        local_31 = *(int *)local_68._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e2740;
      }
      QArrayData::deallocate((QArrayData *)local_68._8_8_,2,8);
    }
LAB_1007e2740:
    FUN_100039a80(local_68 + 0x10);
    goto LAB_1007e2804;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("%1/%2.mnt",9);
  FileUtils::tempPath();
  QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
  QFileInfo::QFileInfo(local_e8,&local_48);
  QFileInfo::fileName();
  QString::arg(&local_c0,&local_c8,&local_e0,0,0x20);
  QString::operator=((QString *)(param_1 + 0x68),&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e203d;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1007e203d:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e2073;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1007e2073:
  QFileInfo::~QFileInfo(local_e8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e20b5;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007e20b5:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e20eb;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1007e20eb:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e2121;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1007e2121:
  local_f0 = (QArrayData *)QString::fromAscii_helper("/bin/sh",7);
  local_f8 = PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("-c",2);
  local_100 = pQVar3;
  FUN_1000341d0(&local_f8,&local_100);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e21a3;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007e21a3:
  local_118 = (QArrayData *)
              QString::fromAscii_helper
                        ("yes | hdiutil attach \"%1\" -mountpoint \"%2/\" -nobrowse -readonly > /dev/null"
                         ,0x4b);
  QString::arg(&local_110,&local_118,&local_48,0,0x20);
  QString::arg(&local_108,&local_110,param_1 + 0x68,0,0x20);
  FUN_1000341d0(&local_f8,&local_108);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e2244;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1007e2244:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e227a;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1007e227a:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e22b0;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1007e22b0:
  if (1 < DAT_10230ffd0) {
    local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f0;
    if (1 < *(int *)local_f0 + 1U) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
    QString::append(&local_130);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e2334;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1007e2334:
    pQVar3 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_138.field0,(QChar *)&local_f8,
               (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
    local_128.field0_0x0 = local_130.field0_0x0;
    if (1 < *(int *)local_130.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_128);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_120 + *(long *)(local_120 + 0x10));
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e240d;
      }
      QArrayData::deallocate(local_120,1,8);
    }
LAB_1007e240d:
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e2443;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
LAB_1007e2443:
    if (*(int *)local_138.field1 != -1) {
      if (*(int *)local_138.field1 != 0) {
        LOCK();
        *(int *)local_138.field1 = *(int *)local_138.field1 + -1;
        local_31 = *(int *)local_138.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e2479;
      }
      QArrayData::deallocate((QArrayData *)local_138.field1,2,8);
    }
LAB_1007e2479:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e24a6;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1007e24a6:
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_31 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e24dc;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
  }
LAB_1007e24dc:
  CAbstractTask::setWaitForSubTaskCompletion();
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_140,this,"2finished(int, QProcess::ExitStatus)",param_1,
                   "1onMountImageFinished(int, QProcess::ExitStatus)",0);
  if (local_140 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_140);
  QObject::connect(&local_148,this,"2finished(int,QProcess::ExitStatus)",this,"1deleteLater()",0);
  if ((cVar1 != '\0') && (local_148 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_148);
  QProcess::start(this,&local_f0,&local_f8,3);
  FUN_100039a80(&local_f8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e2804;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1007e2804:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0;
}


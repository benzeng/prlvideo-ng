
undefined8 FUN_1002c37b0(QObject *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  QProcess *this;
  Data *pDVar4;
  QArrayData *pQVar5;
  QStringList *pQVar6;
  long lVar7;
  long local_108;
  long local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QFileInfo local_d8 [8];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  undefined1 local_58 [32];
  QString local_38;
  undefined1 local_29;
  
  FileDownloadInfo::destinationFilePath();
  cVar2 = QFile::exists(&local_38);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"ATIfM file does not exist : %s",
                  (QArrayData *)(local_58._24_8_ + *(long *)(local_58._24_8_ + 0x10)));
    if (*(int *)local_58._24_8_ != -1) {
      if (*(int *)local_58._24_8_ != 0) {
        LOCK();
        *(int *)local_58._24_8_ = *(int *)local_58._24_8_ + -1;
        local_29 = *(int *)local_58._24_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3bbb;
      }
      QArrayData::deallocate((QArrayData *)local_58._24_8_,1,8);
    }
LAB_1002c3bbb:
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    local_58._0_8_ = PTR_shared_null_1021e15e8;
    pQVar6 = (QStringList *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar6 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar6 = *(QStringList **)(param_1 + 0x20);
    }
    local_58._16_8_ = PTR_shared_null_1021e15e8;
    QMetaObject::tr(local_58 + 8,(char *)&PTR_staticMetaObject_102208970,0x1de4237);
    FUN_1000341d0(local_58 + 0x10,local_58 + 8);
    local_98 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015472,pQVar6,(QStringList *)(local_58 + 0x10),
               (CSlotInfo *)local_58,SUB81(local_90,0));
    QVariant::~QVariant(local_70);
    if (local_90[0] != (int *)0x0) {
      LOCK();
      *local_90[0] = *local_90[0] + -1;
      local_29 = *local_90[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_90[0] != (int *)0x0)) {
        operator_delete(local_90[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3d05;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1002c3d05:
    uVar1 = local_58._0_8_;
    if (*(int *)local_58._0_8_ != -1) {
      if (*(int *)local_58._0_8_ != 0) {
        LOCK();
        *(int *)local_58._0_8_ = *(int *)local_58._0_8_ + -1;
        local_29 = *(int *)local_58._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3d91;
      }
      iVar3 = *(int *)(local_58._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_58._0_8_ + 8)) {
        lVar7 = (long)*(int *)(local_58._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar4 = (Data *)(local_58._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar5 = *(QArrayData **)pDVar4;
          if (*(int *)pQVar5 == 0) {
LAB_1002c3d70:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar5 = *(QArrayData **)pDVar4;
              goto LAB_1002c3d70;
            }
          }
          pDVar4 = pDVar4 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar1);
    }
LAB_1002c3d91:
    if (*(int *)local_58._8_8_ != -1) {
      if (*(int *)local_58._8_8_ != 0) {
        LOCK();
        *(int *)local_58._8_8_ = *(int *)local_58._8_8_ + -1;
        local_29 = *(int *)local_58._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3dc1;
      }
      QArrayData::deallocate((QArrayData *)local_58._8_8_,2,8);
    }
LAB_1002c3dc1:
    uVar1 = local_58._16_8_;
    if (*(int *)local_58._16_8_ != -1) {
      if (*(int *)local_58._16_8_ != 0) {
        LOCK();
        *(int *)local_58._16_8_ = *(int *)local_58._16_8_ + -1;
        local_29 = *(int *)local_58._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3ef9;
      }
      iVar3 = *(int *)(local_58._16_8_ + 0xc);
      if (iVar3 != *(int *)(local_58._16_8_ + 8)) {
        lVar7 = (long)*(int *)(local_58._16_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar4 = (Data *)(local_58._16_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar5 = *(QArrayData **)pDVar4;
          if (*(int *)pQVar5 == 0) {
LAB_1002c3e30:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar5 = *(QArrayData **)pDVar4;
              goto LAB_1002c3e30;
            }
          }
          pDVar4 = pDVar4 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar1);
    }
    goto LAB_1002c3ef9;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("%1/%2.mnt",9);
  FileUtils::tempPath();
  QString::arg(&local_b8,&local_c0,&local_c8,0,0x20);
  QFileInfo::QFileInfo(local_d8,&local_38);
  QFileInfo::fileName();
  QString::arg(&local_b0,&local_b8,&local_d0,0,0x20);
  QString::operator=((QString *)(param_1 + 0x68),&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c38b9;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002c38b9:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c38ef;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002c38ef:
  QFileInfo::~QFileInfo(local_d8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c3931;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002c3931:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c3967;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1002c3967:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c399d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002c399d:
  local_f0 = (QArrayData *)
             QString::fromAscii_helper
                       ("hdiutil attach \"%1\" -mountpoint \"%2/\" -nobrowse -readonly",0x39);
  QString::arg(&local_e8,&local_f0,&local_38,0,0x20);
  QString::arg(&local_e0,&local_e8,param_1 + 0x68,0,0x20);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c3a28;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1002c3a28:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c3a5e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1002c3a5e:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_f8 + *(long *)(local_f8 + 0x10));
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c3adf;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
  }
LAB_1002c3adf:
  CAbstractTask::setWaitForSubTaskCompletion();
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_100,this,"2finished(int, QProcess::ExitStatus)",param_1,
                   "1onMountImageFinished(int, QProcess::ExitStatus)",0);
  if (local_100 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_100);
  QObject::connect(&local_108,this,"2finished(int,QProcess::ExitStatus)",this,"1deleteLater()",0);
  if ((cVar2 != '\0') && (local_108 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_108);
  QProcess::start(this,&local_e0,3);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c3ef9;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1002c3ef9:
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


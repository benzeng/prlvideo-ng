
undefined8 FUN_1002a2c90(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  CTaskLaunchUpdater *pCVar5;
  long local_148;
  long local_140;
  QArrayData *local_138;
  undefined *local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  undefined *local_68;
  undefined *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)QString::fromAscii_helper("ctl",3);
  FUN_10011c040(&local_40,&local_38,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a2d06;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002a2d06:
  cVar2 = QFile::exists(&local_40);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"An updater file %s is not found.",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3636;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002a3636:
    FUN_1001c72e0(&local_58);
    local_60 = PTR_shared_null_1021e15e8;
    local_68 = PTR_shared_null_1021e15e8;
    FUN_1000341d0(&local_68,&local_58);
    FUN_1002a17d0(param_1,0x80015206,&local_60,&local_68);
    FUN_100039a80(&local_68);
    FUN_100039a80(&local_60);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a36b2;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
  else {
    local_98 = (QArrayData *)QString::fromAscii_helper("\"%1\" %2 %3 %4 %5",0x10);
    QString::arg(&local_90,&local_98,&local_40,0,0x20);
    local_a0 = (QArrayData *)QString::fromAscii_helper("install",7);
    QString::arg(&local_88,&local_90,&local_a0,0,0x20);
    local_b8 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
    local_c0 = (QArrayData *)QString::fromAscii_helper("--update",8);
    QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
    QString::arg(&local_a8,&local_b0,&local_38,0,0x20);
    QString::arg(&local_80,&local_88,&local_a8,0,0x20);
    local_d8 = (QArrayData *)QString::fromAscii_helper("%1 \"%2\"",7);
    local_e0 = (QArrayData *)QString::fromAscii_helper("--file",6);
    QString::arg(&local_d0,&local_d8,&local_e0,0,0x20);
    FileDownloadInfo::destinationFilePath();
    QString::arg(&local_c8,&local_d0,&local_e8,0,0x20);
    QString::arg(&local_78,&local_80,&local_c8,0,0x20);
    local_f0 = (QArrayData *)QString::fromAscii_helper("--not-check-postinstall",0x17);
    QString::arg(&local_70,&local_78,&local_f0,0,0x20);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a2f1c;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1002a2f1c:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a2f4c;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002a2f4c:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a2f82;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1002a2f82:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a2fb8;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1002a2fb8:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a2fee;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1002a2fee:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3024;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1002a3024:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a305a;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1002a305a:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a308a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002a308a:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a30c0;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1002a30c0:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a30f6;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1002a30f6:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a312c;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1002a312c:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3162;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1002a3162:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3192;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002a3192:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a31c8;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1002a31c8:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a31fe;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002a31fe:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3234;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1002a3234:
    if (*(int *)(*(long *)(param_1 + 0xa8) + 4) != 0) {
      local_108 = (QArrayData *)QString::fromAscii_helper(" %1 \"%2\"",8);
      local_110 = (QArrayData *)QString::fromAscii_helper("--package",9);
      QString::arg(&local_100,&local_108,&local_110,0,0x20);
      QString::arg(&local_f8,&local_100,param_1 + 0xa8,0,0x20);
      QString::append(&local_70);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_29 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002a32ff;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1002a32ff:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_29 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002a3335;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1002a3335:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_29 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002a336b;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1002a336b:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_29 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002a33a1;
        }
        QArrayData::deallocate(local_108,2,8);
      }
    }
LAB_1002a33a1:
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Install command: %s",
                  local_118 + *(long *)(local_118 + 0x10));
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a3410;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_1002a3410:
    CAbstractTask::setWaitForSubTaskCompletion();
    pCVar5 = operator_new(0x50);
    local_138 = (QArrayData *)local_70.field0_0x0;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    local_130 = puVar1;
    iVar4 = *(int *)puVar1;
    if (1 < iVar4 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      iVar4 = *(int *)puVar1;
    }
    local_128 = 1;
    local_127 = 0;
    local_120 = puVar1;
    if (1 < iVar4 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
    }
    CTaskLaunchUpdater::CTaskLaunchUpdater(pCVar5,&local_138);
    FUN_1002a9b70(&local_138);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 == 0) {
LAB_1002a34b4:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
      else {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_1002a34b4;
      }
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_29 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002a34f9;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
    }
LAB_1002a34f9:
    QObject::connect(&local_140,pCVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1onInstallKasperskyFinished(PRL_RESULT)",0);
    bVar3 = 1;
    if (local_140 != 0) {
      bVar3 = QMetaObject::Connection::isConnected_helper();
      bVar3 = bVar3 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_140);
    QObject::connect(&local_148,pCVar5,"2progress(int)",param_1,"2installProgress(int)",0);
    if ((bVar3 == 0) && (local_148 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_148);
    CAbstractTask::execute();
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a36b2;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_1002a36b2:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a36e2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002a36e2:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}



undefined8 FUN_1002a7790(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined2 uVar4;
  size_t sVar5;
  CElevatedProcessLauncher *this;
  QArrayData *pQVar6;
  void *pvVar7;
  QFutureInterfaceBase *pQVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined *local_260;
  QArrayData *local_258;
  undefined *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QUrl local_230 [8];
  QArrayData *local_228;
  undefined1 local_220 [80];
  undefined1 local_1d0 [8];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  undefined1 local_1b8 [80];
  undefined1 local_168 [8];
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  undefined1 local_138 [16];
  long local_128;
  QArrayData *local_120;
  undefined1 local_118 [80];
  undefined1 local_c8 [8];
  QArrayData *local_c0;
  long local_b8;
  QString local_b0;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined *local_78;
  QArrayData *local_70;
  undefined *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = QDir::separator();
    local_58 = *(QArrayData **)(param_1 + 0xc0);
    if (1 < *(uint *)local_58 + 1) {
      LOCK();
      *(uint *)local_58 = *(uint *)local_58 + 1;
      local_31 = *(uint *)local_58 != 0;
      UNLOCK();
    }
    uVar10 = *(uint *)(local_58 + 4);
    if ((1 < *(uint *)local_58) || ((*(uint *)(local_58 + 8) & 0x7fffffff) < uVar10 + 2)) {
      QString::reallocData((uint)&local_58,SUB41(uVar10 + 2,0));
      uVar10 = *(uint *)(local_58 + 4);
    }
    *(uint *)(local_58 + 4) = uVar10 + 1;
    *(undefined2 *)(local_58 + (long)(int)uVar10 * 2 + *(long *)(local_58 + 0x10)) = uVar4;
    *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10))
         = 0;
    if (1 < *(uint *)local_58 + 1) {
      LOCK();
      *(uint *)local_58 = *(uint *)local_58 + 1;
      local_31 = *(uint *)local_58 != 0;
      UNLOCK();
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
    QString::fromUtf8_helper((char *)&local_40,0x1de34c4);
    QString::append(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a7eb5;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002a7eb5:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a7ee5;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002a7ee5:
    cVar3 = QFile::exists(&local_50);
    if (cVar3 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"File does not exist : %s",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a8379;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1002a8379:
      puVar2 = PTR_shared_null_1021e15e8;
      local_68 = PTR_shared_null_1021e15e8;
      FUN_1002a0af0(&local_70,param_1);
      FUN_1000341d0(&local_68,&local_70);
      local_78 = puVar2;
      FUN_1002a17d0(param_1,0x80015256,&local_68,&local_78);
      FUN_100039a80(&local_78);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a83f2;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1002a83f2:
      FUN_100039a80(&local_68);
    }
    else {
      local_88 = (QArrayData *)QString::fromAscii_helper("\"%1\"",4);
      QString::arg(&local_80,&local_88,&local_50,0,0x20);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a7f54;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1002a7f54:
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"\n%s");
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a7fc3;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_1002a7fc3:
      this = operator_new(0x30);
      local_98.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/sh",7);
      local_a0.field1 = (Data *)PTR_shared_null_1021e15e8;
      pQVar6 = (QArrayData *)QString::fromAscii_helper("-c",2);
      local_a8 = pQVar6;
      FUN_1000341d0(&local_a0,&local_a8);
      FUN_1000341d0(&local_a0,&local_80);
      local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      CElevatedProcessLauncher::CElevatedProcessLauncher
                (this,&local_98,(QStringList *)&local_a0.field0,&local_b0,
                 (AuthorizationOpaqueRef *)0x0);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a80a5;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_1002a80a5:
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a80d3;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_1002a80d3:
      FUN_100039a80(&local_a0);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a8115;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1002a8115:
      QObject::connect(&local_b8,this,"2processFinished(PRL_RESULT, int, QProcess::ExitStatus)",
                       param_1,
                       "1onUninstallKasperskyFinished(PRL_RESULT, int, QProcess::ExitStatus)",0);
      if (local_b8 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b8);
      QThread::start(this,7);
      CAbstractTask::setWaitForSubTaskCompletion();
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a83fb;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_1002a83fb:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a842b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    goto LAB_1002a842b;
  }
  lVar1 = param_1 + 0x18;
  FUN_1002a0c20(local_118,lVar1);
  puVar2 = PTR__WEB_STORE_AV_UNINSTALLER_FILE_NAME_1021e1260;
  pcVar12 = *(char **)PTR__WEB_STORE_AV_UNINSTALLER_FILE_NAME_1021e1260;
  iVar11 = -1;
  if (pcVar12 != (char *)0x0) {
    sVar5 = _strlen(pcVar12);
    iVar11 = (int)sVar5;
  }
  local_120 = (QArrayData *)QString::fromAscii_helper(pcVar12,iVar11);
  FUN_10002c180(&local_c0,local_c8,&local_120);
  iVar11 = *(int *)(local_c0 + 4);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a784b;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002a784b:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7881;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1002a7881:
  FUN_100252e70(local_118);
  if (iVar11 == 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    pvVar7 = operator_new(0x20);
    FUN_1002a97c0(pvVar7,param_1);
    QObject::connect(&local_128,pvVar7,"2finished()",param_1,"1onHostAntivirusMoveToTrashFinished()"
                     ,0);
    if (local_128 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_128);
    CAntivirusInfo::info(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
    CAntivirusInfo::installationPath();
    pQVar8 = operator_new(0x30);
    QFutureInterfaceBase::QFutureInterfaceBase(pQVar8,0);
    *(undefined ***)pQVar8 = &PTR_FUN_102272168;
    QFutureInterfaceBase::refT();
    *(undefined4 *)(pQVar8 + 0x18) = 0;
    *(undefined ***)pQVar8 = &PTR_FUN_102272b58;
    *(undefined ***)(pQVar8 + 0x10) = &PTR_FUN_102272b88;
    *(code **)(pQVar8 + 0x20) = FUN_1002a8d50;
    *(QArrayData **)(pQVar8 + 0x28) = local_140;
    if (1 < *(int *)local_140 + 1U) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + 1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
    }
    uVar9 = QThreadPool::globalInstance();
    FUN_100287870(local_138,pQVar8,uVar9);
    FUN_1002a9840(pvVar7,local_138);
    FUN_100286490(local_138);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a842b;
      }
      QArrayData::deallocate(local_140,2,8);
    }
    goto LAB_1002a842b;
  }
  FUN_1002a0c20(local_1b8,lVar1);
  pcVar12 = *(char **)PTR__WEB_STORE_AV_INSTALLATION_FOLDER_NAME_1021e1248;
  iVar11 = -1;
  if (pcVar12 != (char *)0x0) {
    sVar5 = _strlen(pcVar12);
    iVar11 = (int)sVar5;
  }
  local_1c0 = (QArrayData *)QString::fromAscii_helper(pcVar12,iVar11);
  FUN_10002c180(&local_160,local_168,&local_1c0);
  QString::fromUtf8_helper((char *)&local_158,0x1de35d1);
  QString::append(&local_158);
  uVar4 = QDir::separator();
  local_150 = (QArrayData *)local_158.field0_0x0;
  if (1 < *(uint *)local_158.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_158.field0_0x0 = *(uint *)local_158.field0_0x0 + 1;
    local_31 = *(uint *)local_158.field0_0x0 != 0;
    UNLOCK();
  }
  uVar10 = *(uint *)(local_158.field0_0x0 + 4);
  if ((1 < *(uint *)local_158.field0_0x0) ||
     ((*(uint *)(local_158.field0_0x0 + 8) & 0x7fffffff) < uVar10 + 2)) {
    QString::reallocData((uint)&local_150,SUB41(uVar10 + 2,0));
    uVar10 = *(uint *)(local_150 + 4);
  }
  *(uint *)(local_150 + 4) = uVar10 + 1;
  *(undefined2 *)(local_150 + (long)(int)uVar10 * 2 + *(long *)(local_150 + 0x10)) = uVar4;
  *(undefined2 *)(local_150 + (long)(int)*(uint *)(local_150 + 4) * 2 + *(long *)(local_150 + 0x10))
       = 0;
  FUN_1002a0c20(local_220,lVar1);
  pcVar12 = *(char **)puVar2;
  iVar11 = -1;
  if (pcVar12 != (char *)0x0) {
    sVar5 = _strlen(pcVar12);
    iVar11 = (int)sVar5;
  }
  local_228 = (QArrayData *)QString::fromAscii_helper(pcVar12,iVar11);
  FUN_10002c180(&local_1c8,local_1d0,&local_228);
  local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_150;
  if (1 < *(uint *)local_150 + 1) {
    LOCK();
    *(uint *)local_150 = *(uint *)local_150 + 1;
    local_31 = *(uint *)local_150 != 0;
    UNLOCK();
  }
  QString::append(&local_148);
  QString::operator=(&local_48,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7a62;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1002a7a62:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7a98;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1002a7a98:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7ace;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1002a7ace:
  FUN_100252e70(local_220);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7b10;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1002a7b10:
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7b46;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_1002a7b46:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7b7c;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1002a7b7c:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7bb2;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1002a7bb2:
  FUN_100252e70(local_1b8);
  local_240 = (QArrayData *)QString::fromAscii_helper("file:///%1",10);
  QString::arg(&local_238,&local_240,&local_48,0,0x20);
  QUrl::QUrl(local_230,&local_238,0);
  cVar3 = QDesktopServices::openUrl(local_230);
  QUrl::~QUrl(local_230);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7c5a;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1002a7c5a:
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7c90;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_1002a7c90:
  if (cVar3 != '\0') goto LAB_1002a842b;
  QString::toUtf8();
  pQVar6 = local_248;
  lVar1 = *(long *)(local_248 + 0x10);
  cVar3 = QFile::exists(&local_48);
  pcVar12 = "not exist";
  if (cVar3 != '\0') {
    pcVar12 = "exist";
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to run : %s file is %s",pQVar6 + lVar1,pcVar12);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7d2d;
    }
    QArrayData::deallocate(local_248,1,8);
  }
LAB_1002a7d2d:
  puVar2 = PTR_shared_null_1021e15e8;
  local_250 = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(&local_258,param_1);
  FUN_1000341d0(&local_250,&local_258);
  local_260 = puVar2;
  FUN_1002a17d0(param_1,0x80015256,&local_250,&local_260);
  FUN_100039a80(&local_260);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a7dc4;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1002a7dc4:
  FUN_100039a80(&local_250);
LAB_1002a842b:
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


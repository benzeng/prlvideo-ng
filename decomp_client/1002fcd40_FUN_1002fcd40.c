
undefined8 FUN_1002fcd40(long param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  CElevatedProcessLauncher *this;
  QArrayData **ppQVar7;
  Data *pDVar8;
  long lVar9;
  undefined8 uVar10;
  long local_a0;
  long local_98;
  long local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  QString local_38;
  undefined1 local_29;
  
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!ParallelsDirs::isSandboxMode()","Tasks/CTaskInitializeAppBundle.cpp",0x244,
                  "initializeBundle");
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/sh",7);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  MacUtils::getBundlePath();
  local_50 = *(QArrayData **)(param_1 + 0x70);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  cVar3 = FUN_1001247f0(&local_50);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Failed to start command [%s].",
                  local_58 + *(long *)(local_58 + 0x10));
    uVar10 = 0x80015431;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fd235;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
  else {
    if ((*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) &&
       (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) {
      FUN_1000341d0(&local_40,&local_50);
      pQVar4 = (QArrayData *)QString::fromAscii_helper("init",4);
      local_78 = pQVar4;
      FUN_1000341d0(&local_40,&local_78);
      pQVar5 = (QArrayData *)QString::fromAscii_helper("-b",2);
      local_80 = pQVar5;
      FUN_1000341d0(&local_40,&local_80);
      FUN_1000341d0(&local_40,&local_48);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fd07a;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_1002fd07a:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fd0a7;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
    else {
      FUN_1000341d0(&local_40,&local_50);
      pQVar4 = (QArrayData *)QString::fromAscii_helper("install",7);
      local_60 = pQVar4;
      FUN_1000341d0(&local_40,&local_60);
      pQVar5 = (QArrayData *)QString::fromAscii_helper("-b",2);
      local_68 = pQVar5;
      FUN_1000341d0(&local_40,&local_68);
      ppQVar7 = &local_48;
      if (*(int *)(*(QArrayData **)(param_1 + 0x18) + 4) != 0) {
        ppQVar7 = (QArrayData **)(param_1 + 0x18);
      }
      FUN_1000341d0(&local_40,ppQVar7);
      pQVar6 = (QArrayData *)QString::fromAscii_helper("-t",2);
      local_70 = pQVar6;
      FUN_1000341d0(&local_40,&local_70);
      if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
        ppQVar7 = &local_48;
      }
      else {
        ppQVar7 = (QArrayData **)(param_1 + 0x20);
      }
      FUN_1000341d0(&local_40,ppQVar7);
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fcf84;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_1002fcf84:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fcfb1;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_1002fcfb1:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fd0a7;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
LAB_1002fd0a7:
    this = operator_new(0x30);
    FUN_1001c7700(&local_88,PTR_s___PRODUCT_NAME_requires_an_admin_1022709d8);
    CElevatedProcessLauncher::CElevatedProcessLauncher
              (this,&local_38,(QStringList *)&local_40.field0,&local_88,
               (AuthorizationOpaqueRef *)0x0);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fd10e;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1002fd10e:
    QObject::connect(&local_90,this,"2processStarted()",param_1,
                     "1onInitializeBundleProcessStarted()",0);
    if (local_90 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    QObject::connect(&local_98,this,"2readyReadOutputLine(const QByteArray&)",param_1,
                     "1onReadyReadOutputLine(const QByteArray&)",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_98 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    QObject::connect(&local_a0,this,"2processFinished(PRL_RESULT,int, QProcess::ExitStatus)",param_1
                     ,"1onInitializeBundleProcessFinished(PRL_RESULT, int, QProcess::ExitStatus)",0)
    ;
    if ((cVar3 != '\0') && (local_a0 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar10 = 0;
    QThread::start(this,7);
  }
LAB_1002fd235:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd265;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002fd265:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd295;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002fd295:
  AVar2 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_29 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd321;
    }
    iVar1 = *(int *)(local_40.field1 + 0xc);
    if (iVar1 != *(int *)(local_40.field1 + 8)) {
      lVar9 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_40.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar4 == 0) {
LAB_1002fd300:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar8;
            goto LAB_1002fd300;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002fd321:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar10;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar10;
}


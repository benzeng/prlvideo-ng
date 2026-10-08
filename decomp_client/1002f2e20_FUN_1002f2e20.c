
undefined8 FUN_1002f2e20(QObject *param_1)

{
  int iVar1;
  Data *pDVar2;
  QProcess *this;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  long lVar7;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100df99c0("","prl_client_app",0,"Reset config credentials");
  CAbstractTask::setWaitForSubTaskCompletion();
  local_48 = (QArrayData *)QString::fromAscii_helper("%1/Contents/MacOS/paxctl",0x18);
  QString::arg(&local_40,&local_48,*(long *)(param_1 + 0x18) + 0x80,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f2ebc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002f2ebc:
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_50,this,"2finished(int,QProcess::ExitStatus)",
                   *(undefined8 *)(param_1 + 0x18),
                   "1handleResetCredentialsResult(int,QProcess::ExitStatus)",0);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("set",3);
  local_60 = pQVar3;
  FUN_1000341d0(&local_58,&local_60);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("--disconnect-from-pm",0x14);
  local_68 = pQVar4;
  FUN_1000341d0(&local_58,&local_68);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("--cleanup-proxy-creds",0x15);
  local_70 = pQVar5;
  FUN_1000341d0(&local_58,&local_70);
  QProcess::start(this,&local_40,&local_58,3);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f2fc8;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002f2fc8:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f2ff7;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002f2ff7:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f3024;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002f3024:
  pDVar2 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f30b1;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar7 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar3 == 0) {
LAB_1002f3090:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar6;
            goto LAB_1002f3090;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002f30b1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}



void FUN_1002f1930(QObject *param_1)

{
  int iVar1;
  Data *pDVar2;
  QProcess *this;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  long lVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Auth user with Deploy Id \'%s\'",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f19aa;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002f19aa:
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/Contents/MacOS/paxctl",0x18);
  QString::arg(&local_48,&local_50,param_1 + 0x80,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f1a0b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002f1a0b:
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_58,this,"2finished(int,QProcess::ExitStatus)",param_1,
                   "1handleDeployIdSetResult(int,QProcess::ExitStatus)",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("set",3);
  local_68 = pQVar3;
  FUN_1000341d0(&local_60,&local_68);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("--connect-to-pm",0xf);
  local_70 = pQVar4;
  FUN_1000341d0(&local_60,&local_70);
  FUN_1000341d0(&local_60,param_1 + 0x78);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("--use-deploy-id",0xf);
  local_78 = pQVar5;
  FUN_1000341d0(&local_60,&local_78);
  QProcess::start(this,&local_48,&local_60,3);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f1b22;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002f1b22:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f1b51;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002f1b51:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f1b7e;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002f1b7e:
  pDVar2 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f1c11;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar7 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar3 == 0) {
LAB_1002f1bf0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar6;
            goto LAB_1002f1bf0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002f1c11:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}


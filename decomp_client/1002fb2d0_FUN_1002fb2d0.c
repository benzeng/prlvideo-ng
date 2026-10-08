
undefined8 FUN_1002fb2d0(QObject *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  QProcess *this;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  QObject *pQVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_40,this,"2finished(int, QProcess::ExitStatus)",param_1,
                   "1onCheckFreeSpaceFinished(int, QProcess::ExitStatus)",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,this,"2finished(int, QProcess::ExitStatus)",this,"1deleteLater()",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,this,"2finished(int, QProcess::ExitStatus)",this,"1deleteLater()",0);
    if ((cVar3 != '\0') && (local_48 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  local_50 = *(QArrayData **)(param_1 + 0x70);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  pQVar8 = (QObject *)&local_58;
  MacUtils::getBundlePath();
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  local_70 = (QArrayData *)QString::fromAscii_helper("check_disk_space",0x10);
  FUN_1000341d0(&local_68,&local_70);
  local_78 = (QArrayData *)QString::fromAscii_helper("-b",2);
  FUN_1000341d0(&local_68,&local_78);
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0) {
    pQVar8 = param_1 + 0x18;
  }
  FUN_1000341d0(&local_68,pQVar8);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-t",2);
  local_80 = pQVar4;
  FUN_1000341d0(&local_68,&local_80);
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    param_1 = (QObject *)&local_58;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  FUN_1000341d0(&local_68,param_1);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = *(int *)(local_60 + 8);
      if (iVar1 != *(int *)(local_60 + 0xc)) {
        pDVar6 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
        pDVar7 = local_60 + (long)iVar1 * 8 + 0x10;
        lVar5 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)pDVar6;
          *(int **)pDVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          pDVar6 = pDVar6 + 8;
          lVar5 = lVar5 + -8;
          pQVar4 = local_80;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      pQVar4 = local_80;
      if ((bool)local_31) goto LAB_1002fb552;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002fb552:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fb57e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002fb57e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fb5aa;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002fb5aa:
  pDVar6 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fb631;
    }
    iVar1 = *(int *)(local_68 + 0xc);
    if (iVar1 != *(int *)(local_68 + 8)) {
      lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_68 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar4 == 0) {
LAB_1002fb610:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar7;
            goto LAB_1002fb610;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1002fb631:
  CAbstractTask::setWaitForSubTaskCompletion();
  QProcess::start(this,&local_50,&local_60,3);
  pDVar6 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fb6e1;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar5 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar4 == 0) {
LAB_1002fb6c0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar7;
            goto LAB_1002fb6c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1002fb6e1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fb711;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002fb711:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 0;
}


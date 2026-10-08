
undefined8 FUN_1002bd230(long param_1)

{
  QString *this;
  int iVar1;
  Data *pDVar2;
  undefined8 uVar3;
  long lVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long local_78;
  Data *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  this = (QString *)(param_1 + 0x20);
  QFileInfo::QFileInfo(local_40,this);
  QFileInfo::absoluteDir();
  QDir::absolutePath();
  QFileInfo::baseName();
  local_68 = (QArrayData *)QString::fromAscii_helper(".hdd",4);
  FUN_100115e80(&local_48,&local_50,&local_60,&local_68,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd303;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002bd303:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd333;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002bd333:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd363;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002bd363:
  QDir::~QDir(local_58);
  QFile::rename(this,&local_48);
  QString::operator=(this,&local_48);
  local_70 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_70,this);
  uVar3 = FUN_1001612d0(lVar4,&local_70);
  pDVar2 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd441;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar4 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_70 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002bd420:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002bd420;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002bd441:
  QObject::connect(&local_78,uVar3,"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd4aa;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002bd4aa:
  QFileInfo::~QFileInfo(local_40);
  return 0;
}


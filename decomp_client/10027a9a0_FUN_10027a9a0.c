
undefined8 FUN_10027a9a0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  undefined2 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  long local_80;
  QString local_78;
  QArrayData *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QUrl local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x40) + 4) == 0) {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    FUN_100df99c0("","prl_client_app",2,"Downloader URL is empty, skipping...");
    return 0;
  }
  QUrl::QUrl(local_40,param_1 + 0x40,0);
  QUrl::path(&local_50,local_40,0x7f00000);
  QFileInfo::QFileInfo(local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027aa25;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10027aa25:
  QFileInfo::fileName();
  uVar3 = QDir::separator();
  pQVar1 = (QString *)(param_1 + 0x28);
  local_68 = pQVar1->field0_0x0;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  iVar7 = *(int *)(local_68 + 4);
  if ((1 < *(uint *)local_68) || ((*(uint *)(local_68 + 8) & 0x7fffffff) < iVar7 + 2U)) {
    QString::reallocData((uint)&local_68,SUB41(iVar7 + 2U,0));
    iVar7 = *(int *)(local_68 + 4);
  }
  *(int *)(local_68 + 4) = iVar7 + 1;
  *(undefined2 *)(local_68 + (long)iVar7 * 2 + *(long *)(local_68 + 0x10)) = uVar3;
  *(undefined2 *)(local_68 + (long)*(int *)(local_68 + 4) * 2 + *(long *)(local_68 + 0x10)) = 0;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_60.field0_0x0 = local_68;
  QString::append(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027aafe;
    }
    QArrayData::deallocate((QArrayData *)local_68,2,8);
  }
LAB_10027aafe:
  cVar2 = QFile::exists(&local_60);
  if (cVar2 == '\0') {
    QDir::QDir((QDir *)&local_78,pQVar1);
    cVar2 = QDir::exists();
    if (cVar2 == '\0') {
      cVar2 = QDir::mkpath(&local_78);
      uVar8 = 0x80015415;
      if (cVar2 != '\0') goto LAB_10027ac07;
    }
    else {
LAB_10027ac07:
      pQVar4 = operator_new(0x58);
      CTaskDownloadFile::CTaskDownloadFile((CTaskDownloadFile *)pQVar4,param_1 + 0x40,pQVar1,0);
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
      piVar6 = *(int **)(param_1 + 0x58);
      if (piVar6 != piVar5) {
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          local_31 = *piVar5 != 0;
          UNLOCK();
          piVar6 = *(int **)(param_1 + 0x58);
        }
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + -1;
          local_31 = *piVar6 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x58));
          }
        }
        *(int **)(param_1 + 0x58) = piVar5;
        *(QObject **)(param_1 + 0x60) = pQVar4;
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar5);
        }
      }
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
      }
      QObject::connect(&local_80,uVar8,"2downloadFinished(const QString&, int, int)",param_1,
                       "1onLoadDownloaderFinished(const QString&, int, int)",0);
      if (local_80 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar8 = 0;
      CAbstractTask::execute();
    }
    QDir::~QDir((QDir *)&local_78);
  }
  else {
    uVar8 = 0;
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,"Downloader [%s] has been loaded already, skipping...",
                    local_70 + *(long *)(local_70 + 0x10));
      uVar8 = 0;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027ad0d;
        }
        QArrayData::deallocate(local_70,1,8);
        uVar8 = 0;
      }
    }
  }
LAB_10027ad0d:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027ad3d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10027ad3d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027ad6d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10027ad6d:
  QFileInfo::~QFileInfo(local_48);
  QUrl::~QUrl(local_40);
  return uVar8;
}


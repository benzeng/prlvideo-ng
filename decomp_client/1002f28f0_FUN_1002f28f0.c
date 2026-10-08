
undefined8 FUN_1002f28f0(long param_1)

{
  long lVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  lVar1 = *(long *)(param_1 + 0x18);
  pQVar3 = operator_new(0x58);
  FileUtils::tempPath();
  CTaskDownloadFile::CTaskDownloadFile((CTaskDownloadFile *)pQVar3,lVar1 + 0x30,&local_40,0);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar5 = *(int **)(lVar1 + 0x38);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(lVar1 + 0x38);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(lVar1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x38));
      }
    }
    *(int **)(lVar1 + 0x38) = piVar4;
    *(QObject **)(lVar1 + 0x40) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar4);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f29da;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002f29da:
  lVar1 = *(long *)(param_1 + 0x18);
  uVar6 = 0;
  if ((*(long *)(lVar1 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar1 + 0x38) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
  }
  cVar2 = '\0';
  QObject::connect(&local_48,uVar6,"2sendProgress(uint)",lVar1,
                   "1handleDownloadPackageProgress(uint)",0);
  if (local_48 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  lVar1 = *(long *)(param_1 + 0x18);
  uVar6 = 0;
  if ((*(long *)(lVar1 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar1 + 0x38) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
  }
  QObject::connect(&local_50,uVar6,"2downloadFinished(QString,int,int)",lVar1,
                   "1handleDownloadPackageResult(QString,int,int)",0);
  if ((cVar2 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  CAbstractTask::execute();
  return 0;
}


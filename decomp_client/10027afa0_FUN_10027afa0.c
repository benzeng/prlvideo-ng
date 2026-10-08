
undefined8 FUN_10027afa0(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  long local_40;
  QString local_38;
  undefined1 local_29;
  
  QDir::QDir((QDir *)&local_38,(QString *)(param_1 + 0x28));
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    cVar1 = QDir::mkpath(&local_38);
    uVar5 = 0x80015415;
    if (cVar1 == '\0') goto LAB_10027b1c8;
  }
  pQVar2 = operator_new(0x58);
  CTaskDownloadFile::CTaskDownloadFile
            ((CTaskDownloadFile *)pQVar2,param_1 + 0x20,(QString *)(param_1 + 0x28),
             *(uint *)(param_1 + 0x74) >> 1 & 1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x58);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar3;
    *(QObject **)(param_1 + 0x60) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  QObject::connect(&local_40,uVar5,"2sendDownloadProgressData(const DownloadProgressData&)",param_1,
                   "2downloadProgress(const DownloadProgressData&)",0);
  if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  QObject::connect(&local_48,uVar5,"2downloadFinished(const QString&, int, int)",param_1,
                   "1onDownloadFinished(const QString&, int, int)",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_48 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  QObject::connect(&local_50,uVar5,"2stateChanged(CTaskDownloadFile::State)",param_1,
                   "2downloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = 0;
  CAbstractTask::execute();
LAB_10027b1c8:
  QDir::~QDir((QDir *)&local_38);
  return uVar5;
}


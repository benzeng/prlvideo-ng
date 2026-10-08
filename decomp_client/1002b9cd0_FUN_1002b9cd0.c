
undefined8 FUN_1002b9cd0(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_80;
  long local_78;
  QArrayData *local_70;
  undefined1 local_68 [71];
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0xc) == *(int *)(*(long *)(param_1 + 0x58) + 8)) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_1002baa10(local_68,param_1 + 0x58);
  pQVar2 = operator_new(0x78);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_70,uVar5);
  FUN_100278880(pQVar2,local_68,&local_70,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b9d7a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002b9d7a:
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x78);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x78);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x78));
      }
    }
    *(int **)(param_1 + 0x78) = piVar3;
    *(QObject **)(param_1 + 0x80) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  QObject::connect(&local_78,pQVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDownloadItemFinished(PRL_RESULT)",0);
  if (local_78 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,pQVar2,"2downloadProgress(DownloadProgressData)",param_1,
                   "1onDownloadProgress(DownloadProgressData)",0);
  if ((cVar1 != '\0') && (local_80 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  CAbstractTask::execute();
  FUN_1001b8c60(local_68);
  return 0;
}


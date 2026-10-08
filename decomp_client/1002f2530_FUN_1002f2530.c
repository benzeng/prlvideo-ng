
undefined8 FUN_1002f2530(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QUrl local_48 [8];
  QNetworkRequest local_40 [15];
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x1c) = 1;
  FUN_100828d50(*(undefined8 *)(lVar1 + 0x10),1);
  CAbstractTask::setWaitForSubTaskCompletion();
  local_58 = (QArrayData *)QString::fromAscii_helper("http://d.myparallels.com/d/%1",0x1d);
  local_60 = (QArrayData *)QString::fromAscii_helper("PA.dmg",6);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  QUrl::QUrl(local_48,&local_50,0);
  QNetworkRequest::QNetworkRequest(local_40,local_48);
  QUrl::~QUrl(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f25fd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002f25fd:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f262d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002f262d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f265d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002f265d:
  lVar1 = *(long *)(param_1 + 0x18);
  pQVar2 = operator_new(0x48);
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  CTaskSendHttpRequest::CTaskSendHttpRequest((CTaskSendHttpRequest *)pQVar2,local_40,1,0,&local_68);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(lVar1 + 0x20);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(lVar1 + 0x20);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(lVar1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x20));
      }
    }
    *(int **)(lVar1 + 0x20) = piVar3;
    *(QObject **)(lVar1 + 0x28) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f2734;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1002f2734:
  lVar1 = *(long *)(param_1 + 0x18);
  uVar5 = 0;
  if ((*(long *)(lVar1 + 0x20) != 0) && (uVar5 = 0, *(int *)(*(long *)(lVar1 + 0x20) + 4) != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
  }
  QObject::connect(&local_70,uVar5,"2taskFinished(PRL_RESULT)",lVar1,
                   "1handleHttpRequestResult(PRL_RESULT)",0);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  CAbstractTask::execute();
  QNetworkRequest::~QNetworkRequest(local_40);
  return 0;
}


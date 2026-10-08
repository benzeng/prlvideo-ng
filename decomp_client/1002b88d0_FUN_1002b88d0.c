
undefined8 FUN_1002b88d0(long param_1)

{
  undefined *puVar1;
  QObject *pQVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  long local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined *local_80;
  undefined1 local_78 [48];
  undefined1 local_48 [23];
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0xc) == *(int *)(*(long *)(param_1 + 0x58) + 8)) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_1002baa10(local_78,param_1 + 0x58);
  pQVar2 = operator_new(0x48);
  local_80 = PTR_shared_null_1021e15e8;
  pvVar3 = operator_new(0x50);
  puVar1 = PTR_shared_null_1021e1288;
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100277000(pvVar3,&local_88);
  local_90 = (QArrayData *)puVar1;
  CTaskSendHttpRequest::CTaskSendHttpRequest
            ((CTaskSendHttpRequest *)pQVar2,local_48,&local_80,pvVar3,2,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b89ad;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1002b89ad:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b89dd;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002b89dd:
  FUN_1001e3400(&local_80);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar5 = *(int **)(param_1 + 0x78);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x78);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x78));
      }
    }
    *(int **)(param_1 + 0x78) = piVar4;
    *(QObject **)(param_1 + 0x80) = pQVar2;
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
  QObject::connect(&local_98,pQVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onQueryDownloadItemContentLengthFinished(PRL_RESULT)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  CAbstractTask::execute();
  FUN_1001b8c60(local_78);
  return 0;
}


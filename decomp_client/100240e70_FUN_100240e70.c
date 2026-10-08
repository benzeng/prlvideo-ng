
undefined8 FUN_100240e70(long param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  Data *pDVar4;
  byte bVar5;
  long local_40;
  QArrayData *local_38;
  Data *local_30;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0xc) == *(int *)(*(long *)(param_1 + 0x48) + 8)) {
    return 0x80000009;
  }
  CAbstractTask::getRemainSubTasks();
  iVar1 = *(int *)(local_30 + 8);
  if (iVar1 == *(int *)(local_30 + 0xc)) {
    bVar5 = 0;
  }
  else {
    pDVar4 = local_30 + (long)iVar1 * 8 + 0x10;
    lVar2 = (long)*(int *)(local_30 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      bVar5 = 1;
      if (*(int *)pDVar4 == 1) goto LAB_100240ee3;
      pDVar4 = pDVar4 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
    bVar5 = 0;
  }
LAB_100240ee3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100240f05;
    }
    QListData::dispose(local_30);
  }
LAB_100240f05:
  pvVar3 = operator_new(0x50);
  FUN_100188480(&local_38,
                *(undefined8 *)
                 (*(long *)(param_1 + 0x48) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x48) + 8) * 8));
  FUN_10023fd40(pvVar3,&local_38,bVar5 ^ 1,1,bVar5);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100240f74;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100240f74:
  QObject::connect(&local_40,pvVar3,"2taskFinished(PRL_RESULT)",param_1,"1onLinkedCloneRemoved()",0)
  ;
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  CAbstractTask::execute();
  return 0;
}


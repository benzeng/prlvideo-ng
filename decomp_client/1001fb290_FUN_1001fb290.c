
undefined8 FUN_1001fb290(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("{B5A2EB4B-A8F2-4FD2-8A71-80140DA89FC2}",0x26);
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar1 = FUN_100175d50(uVar2,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001fb31a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001fb31a:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001fb34a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001fb34a:
  *(undefined1 *)(lVar1 + 0x60) = 0;
  QObject::connect(&local_38,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onSetMainSessionFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}


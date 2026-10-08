
undefined8 FUN_10021be90(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar1 = operator_new(0x50);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_30,uVar2);
  FUN_100240130(pvVar1,&local_30,0,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10021bf18;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10021bf18:
  QObject::connect(local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  CAbstractTask::execute();
  return 0;
}



undefined8 FUN_100271450(undefined8 param_1)

{
  void *pvVar1;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pvVar1 = operator_new(0x88);
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1002f6f70(pvVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002714b2;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1002714b2:
  QObject::connect(&local_30,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}


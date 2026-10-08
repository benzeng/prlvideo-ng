
void FUN_1003ad430(undefined8 param_1)

{
  void *pvVar1;
  long local_38;
  undefined4 local_2c;
  Data *local_28;
  undefined1 local_19;
  
  pvVar1 = operator_new(0x30);
  local_28 = (Data *)PTR_shared_null_1021e15e8;
  local_2c = 1;
  FUN_100129840(&local_28,&local_2c);
  FUN_100069840(pvVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ad49c;
    }
    QListData::dispose(local_28);
  }
LAB_1003ad49c:
  QObject::connect(&local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onManageOpenInIEPluginTaskFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return;
}


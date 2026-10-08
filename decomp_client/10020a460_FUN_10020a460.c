
void FUN_10020a460(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_38;
  Data *local_30;
  undefined1 local_21;
  
  pvVar1 = operator_new(0x1a8);
  uVar2 = FUN_100209ac0(param_1);
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100212b40(pvVar1,uVar2,param_2,1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020a4d0;
    }
    QListData::dispose(local_30);
  }
LAB_10020a4d0:
  QObject::connect(&local_38,pvVar1,"2taskFinished( PRL_RESULT )",param_1,
                   "1onHddInfoReceived( PRL_RESULT )",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return;
}


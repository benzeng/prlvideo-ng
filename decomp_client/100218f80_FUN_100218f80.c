
undefined8 FUN_100218f80(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Connection local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  Data *local_28;
  undefined1 local_19;
  
  FUN_100218b80();
  local_28 = (Data *)PTR_shared_null_1021e15e8;
  local_2c = 4;
  FUN_100129840(&local_28,&local_2c);
  local_30 = 5;
  FUN_100129840(&local_28,&local_30);
  pvVar1 = operator_new(600);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_100210650(pvVar1,param_1 + 0x38,uVar2,&local_28,uVar3);
  QObject::connect(local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onVmConfigCommited(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
  return 0;
}


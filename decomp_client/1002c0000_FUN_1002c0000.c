
undefined8 FUN_1002c0000(long param_1)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_28;
  
  uVar3 = 0x80000009;
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    local_28 = in_RAX;
    CAbstractTask::setWaitForSubTaskCompletion();
    pvVar1 = operator_new(0x100);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
    }
    uVar2 = 0;
    if ((*(long *)(param_1 + 0xb0) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0xb0) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
    }
    FUN_10025b010(pvVar1,uVar3,uVar2,param_1 + 0x28);
    uVar3 = 0;
    QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractTask::execute();
  }
  return uVar3;
}


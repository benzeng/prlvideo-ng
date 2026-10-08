
undefined8 FUN_1002ae300(long param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar2 = operator_new(0x48);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_23 = *piVar1 != 0;
    UNLOCK();
  }
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  FUN_1002c9c10(pvVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_22 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_22) {
      operator_delete(piVar1);
    }
  }
  QObject::connect(&local_30,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onSignOutFinished(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return 0;
}


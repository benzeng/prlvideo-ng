
undefined8 FUN_1002aea80(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_23 = *piVar1 != 0;
    UNLOCK();
  }
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_22 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_22) {
      operator_delete(piVar1);
    }
  }
  uVar4 = FUN_100152280();
  FUN_100153430(uVar4);
  iVar2 = FUN_10015a6e0(uVar3);
  if (iVar2 == 2) {
    QObject::connect(&local_30,uVar3,"2serverStateChanged(GUI:: ServerState)",param_1,
                     "1onServerStateChanged(GUI:: ServerState)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_10015e050(uVar3);
  }
  else {
    uVar4 = FUN_100152280();
    FUN_1001531e0(uVar4,uVar3,0);
  }
  return 0;
}



undefined8 FUN_100157d20(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long local_40;
  Data *local_38;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x108) != 0) && (*(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) &&
     (*(long *)(param_1 + 0x110) != 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Warning: Seems login is already running.");
    goto LAB_100157eb1;
  }
  pQVar1 = operator_new(0x40);
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1001fa280(pQVar1,param_1,&local_38);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x108);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x108);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x108) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x108));
      }
    }
    *(int **)(param_1 + 0x108) = piVar2;
    *(QObject **)(param_1 + 0x110) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100157e3c;
    }
    QListData::dispose(local_38);
  }
LAB_100157e3c:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x108) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x110);
  }
  QObject::connect(&local_40,uVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onTaskLoginFinished(PRL_RESULT)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  CAbstractTask::execute();
LAB_100157eb1:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x108) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x110);
  }
  return uVar4;
}


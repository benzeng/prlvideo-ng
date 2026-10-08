
undefined8 FUN_1002ab790(long param_1)

{
  byte bVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  pQVar2 = operator_new(0x50);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1005a7fe0(pQVar2,uVar5,bVar1 ^ 1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_23 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x38);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_22 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar3;
    *(QObject **)(param_1 + 0x40) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  QWidget::setAttribute(uVar5,0x37,1);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(&local_30,uVar5,"2finished(PRL_RESULT)",param_1,"1subTaskCompleted(PRL_RESULT)",0
                  );
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_1005a80e0(uVar5);
  return 0;
}


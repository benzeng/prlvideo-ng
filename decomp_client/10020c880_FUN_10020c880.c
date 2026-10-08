
undefined8 FUN_10020c880(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  pQVar1 = (QObject *)FUN_100197810(uVar5,&local_30,1,uVar4);
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x58);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x58);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar2;
    *(QObject **)(param_1 + 0x60) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020c97f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10020c97f:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  QObject::connect(local_38,uVar5,"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  return 0;
}


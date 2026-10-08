
undefined8 FUN_10024b140(long *param_1)

{
  int iVar1;
  int iVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  Connection local_38 [8];
  Connection local_30 [15];
  undefined1 local_21;
  
  iVar1 = (**(code **)(*param_1 + 0x118))();
  uVar7 = 0;
  lVar6 = 0;
  if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar6 = param_1[4];
  }
  iVar2 = FUN_10018a9d0(lVar6);
  if (iVar1 != iVar2) {
    pQVar3 = (QObject *)(**(code **)(*param_1 + 0x108))(param_1);
    piVar4 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    piVar5 = (int *)param_1[7];
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_21 = *piVar4 != 0;
        UNLOCK();
        piVar5 = (int *)param_1[7];
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_21 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_21) && ((void *)param_1[7] != (void *)0x0)) {
          operator_delete((void *)param_1[7]);
        }
      }
      param_1[7] = (long)piVar4;
      param_1[8] = (long)pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar4);
      }
    }
    uVar7 = 0x80000016;
    if (((param_1[7] != 0) && (*(int *)(param_1[7] + 4) != 0)) && (param_1[8] != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1);
      if (iVar1 != 0) {
        lVar6 = 0;
        if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
          lVar6 = param_1[4];
        }
        FUN_10018c880(lVar6,iVar1);
      }
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar7 = 0;
      lVar6 = 0;
      if ((param_1[7] != 0) && (lVar6 = 0, *(int *)(param_1[7] + 4) != 0)) {
        lVar6 = param_1[8];
      }
      QObject::connect(local_30,lVar6,"2jobCompleted( PRL_RESULT )",param_1,
                       "1onVmStateChangeRequestCompleted( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_30);
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      if (iVar1 != 0) {
        uVar7 = 0;
        lVar6 = 0;
        if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
          lVar6 = param_1[4];
        }
        QObject::connect(local_38,lVar6,
                         "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                         "1onVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
        QMetaObject::Connection::~Connection(local_38);
      }
    }
  }
  return uVar7;
}


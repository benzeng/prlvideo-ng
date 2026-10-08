
undefined8 FUN_1002f2b40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100df99c0("","prl_client_app",0,"Generate Deploy Id");
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"No server is found to generate Deploy Id");
    return 0x3bfa;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  local_38 = (QArrayData *)QString::fromAscii_helper("{04E094F8-A681-47C2-A8AE-51BE6BBE7474}",0x26);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar4 = (QObject *)FUN_100175d50(lVar3,&local_38,&local_40,0);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(lVar1 + 0x68);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(lVar1 + 0x68);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(lVar1 + 0x68) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x68));
      }
    }
    *(int **)(lVar1 + 0x68) = piVar5;
    *(QObject **)(lVar1 + 0x70) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f2c67;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002f2c67:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f2c97;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002f2c97:
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x70);
  *(undefined1 *)(lVar1 + 0x60) = 1;
  lVar7 = 0;
  if ((*(long *)(lVar3 + 0x68) != 0) && (lVar7 = 0, *(int *)(*(long *)(lVar3 + 0x68) + 4) != 0)) {
    lVar7 = lVar1;
  }
  QObject::connect(&local_48,lVar7,"2jobCompleted(PRL_RESULT)",lVar3,
                   "1handleDeployIdGenerationResult(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}


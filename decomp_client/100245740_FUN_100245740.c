
undefined8 FUN_100245740(long param_1)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  cVar3 = FUN_100d80630(1);
  iVar9 = (int)param_1;
  if (cVar3 != '\0') {
    cVar3 = FUN_100626bf0();
    if (cVar3 != '\0') {
      return 0x3bfa;
    }
    cVar3 = FUN_100627020();
    if (cVar3 == '\0') {
      return 0x3bfa;
    }
    CAbstractTask::prependSubTask(iVar9);
    return 0;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar3 = FUN_10061c4a0(uVar8);
  if (cVar3 != '\0') {
    CAbstractTask::prependSubTask(iVar9);
    CAbstractTask::prependSubTask(iVar9);
    return 0x3bfa;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar3 = FUN_10061b4d0(uVar8,0x2010);
  if (cVar3 == '\0') {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_10061b4d0(uVar8,0x8000);
    if (cVar3 != '\0') goto LAB_100245825;
    pQVar4 = operator_new(0x60);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    FUN_10028c8a0(pQVar4,uVar8,*(undefined4 *)(param_1 + 0x28),uVar7);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar6 = *(int **)(param_1 + 0x48);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_2e = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x48);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_2d = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_2d) && (pvVar1 = *(void **)(param_1 + 0x48), pvVar1 != (void *)0x0)) {
          operator_delete(pvVar1);
        }
      }
      *(int **)(param_1 + 0x48) = piVar5;
      *(QObject **)(param_1 + 0x50) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_2c = *piVar5 != 0;
      UNLOCK();
      if ((bool)local_2c) goto LAB_10024598e;
LAB_100245986:
      operator_delete(piVar5);
    }
  }
  else {
LAB_100245825:
    pQVar4 = operator_new(0x38);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    FUN_10028b460(pQVar4,uVar8,uVar7);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar6 = *(int **)(param_1 + 0x48);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_2b = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x48);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_2a = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_2a) && (pvVar1 = *(void **)(param_1 + 0x48), pvVar1 != (void *)0x0)) {
          operator_delete(pvVar1);
        }
      }
      *(int **)(param_1 + 0x48) = piVar5;
      *(QObject **)(param_1 + 0x50) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_100245986;
    }
  }
LAB_10024598e:
  lVar2 = *(long *)(param_1 + 0x48);
  uVar8 = 0;
  if ((lVar2 != 0) && (uVar8 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_38,uVar8,"2taskFinished(PRL_RESULT)",param_1,
                   "1onValidationFinished(PRL_RESULT)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar3 != '\0') goto LAB_100245a2e;
  }
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskValidateLicense.cpp",0xa5,"validate");
LAB_100245a2e:
  lVar2 = *(long *)(param_1 + 0x48);
  uVar8 = 0;
  if ((lVar2 != 0) && (uVar8 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
  }
  CAbstractTask::setOption(uVar8,4,1);
  CAbstractTask::execute();
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}


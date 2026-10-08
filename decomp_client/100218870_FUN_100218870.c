
undefined8 FUN_100218870(long param_1)

{
  char cVar1;
  int iVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  Connection local_30 [10];
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  cVar1 = COsInstallationInfo::isUnattanded();
  if (cVar1 == '\0') goto LAB_100218a63;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018f860(uVar6);
  if (iVar2 == 8) {
    pQVar3 = operator_new(0x58);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_1001e9f50(pQVar3,uVar6,uVar7,param_1);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x138);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_23 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x138);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_22 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_22) && (*(void **)(param_1 + 0x138) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x138));
        }
      }
      *(int **)(param_1 + 0x138) = piVar4;
      *(QObject **)(param_1 + 0x140) = pQVar3;
    }
    if (piVar4 == (int *)0x0) goto LAB_100218a63;
    LOCK();
    *piVar4 = *piVar4 + -1;
    bVar8 = *piVar4 != 0;
    UNLOCK();
    local_21 = bVar8;
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = FUN_10018f860(uVar6);
    if (iVar2 != 9) goto LAB_100218a63;
    pQVar3 = operator_new(0x48);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_1001eab50(pQVar3,uVar6,uVar7,param_1);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x138);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_26 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x138);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_25 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_25) && (*(void **)(param_1 + 0x138) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x138));
        }
      }
      *(int **)(param_1 + 0x138) = piVar4;
      *(QObject **)(param_1 + 0x140) = pQVar3;
    }
    if (piVar4 == (int *)0x0) goto LAB_100218a63;
    LOCK();
    *piVar4 = *piVar4 + -1;
    bVar8 = *piVar4 != 0;
    UNLOCK();
    local_24 = bVar8;
  }
  if (!bVar8) {
    operator_delete(piVar4);
  }
LAB_100218a63:
  uVar6 = 0;
  if (((*(long *)(param_1 + 0x138) != 0) && (*(int *)(*(long *)(param_1 + 0x138) + 4) != 0)) &&
     (*(long *)(param_1 + 0x140) != 0)) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x138) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x138) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x140);
    }
    QObject::connect(local_30,uVar6,"2installMediaCreated( PRL_RESULT )",param_1,
                     "1onInstallMediaCreated(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_30);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x140) + 0x60))();
  }
  return uVar6;
}



undefined8 FUN_100236710(long param_1)

{
  int iVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  uVar7 = 0;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100319390(uVar6);
  if (((lVar2 != 0) && (*(uint *)(param_1 + 0x5c) < 5)) &&
     ((0x13U >> (*(uint *)(param_1 + 0x5c) & 0x1f) & 1) != 0)) {
    pQVar3 = operator_new(0x58);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100327cd0(pQVar3,uVar6);
    *(undefined ***)pQVar3 = &PTR_FUN_102202c78;
    *(undefined8 *)(pQVar3 + 0x50) = 0;
    *(undefined8 *)(pQVar3 + 0x48) = 0;
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x60);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x60);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x60));
        }
      }
      *(int **)(param_1 + 0x60) = piVar4;
      *(QObject **)(param_1 + 0x68) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x68);
    }
    uVar7 = 0;
    QObject::connect(local_38,uVar6,"2confirmationAnswerReceived(bool, PRL_RESULT)",param_1,
                     "1onConfirmationAnswerReceived(bool, PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_38);
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
    }
    iVar1 = FUN_100327ed0(uVar7,4000);
    if (iVar1 == 0) {
      CAbstractTask::setWaitForSubTaskCompletion();
      cVar8 = '\x02';
      if (*(int *)(param_1 + 0x5c) != 4) {
        cVar8 = (*(int *)(param_1 + 0x5c) != 0) * '\x03' + '\x01';
      }
      lVar2 = 0;
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
        lVar2 = *(long *)(param_1 + 0x68);
      }
      uVar7 = 0;
      FUN_100df99c0("","prl_client_app",0,"Sending shutdown confirmation request to VM");
      uVar6 = 0;
      if ((*(long *)(lVar2 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar2 + 0x48) + 4) != 0))
      {
        uVar6 = *(undefined8 *)(lVar2 + 0x50);
      }
      FUN_100a4d8c0(uVar6,cVar8);
    }
    else {
      uVar7 = 0x80000009;
      if (iVar1 == -0x7fffffed) {
        CAbstractTask::setWaitForSubTaskCompletion();
        uVar7 = 0;
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x68);
        }
        QObject::connect(local_40,uVar6,"2stateChanged(CVmDesktopAbstractGate::GateState)",param_1,
                         "1onConfirmationGateStateChanged(CVmDesktopAbstractGate::GateState)",0);
        QMetaObject::Connection::~Connection(local_40);
      }
    }
  }
  return uVar7;
}


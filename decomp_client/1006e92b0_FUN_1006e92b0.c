
undefined4 FUN_1006e92b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  long local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    if ((((*(long *)(param_1 + 0x60) == 0) || (*(int *)(*(long *)(param_1 + 0x60) + 4) == 0)) ||
        (*(long *)(param_1 + 0x68) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
      pQVar3 = operator_new(0x70);
      FUN_10024e280(pQVar3,param_2,param_3);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0x60);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          local_2b = *piVar4 != 0;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0x60);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_2a = *piVar5 != 0;
          UNLOCK();
          if ((!(bool)local_2a) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
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
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x68);
      }
      QObject::connect(&local_38,uVar7,"2taskFinished(PRL_RESULT)",param_1,
                       "1onTaskRequestUpgradePurchaseFinished(PRL_RESULT)",0);
      if (local_38 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      CAbstractTask::execute();
      cVar1 = CAbstractTask::isFinished();
      if (cVar1 == '\0') {
        return 0x80000013;
      }
      uVar2 = CAbstractTask::getResult();
      return uVar2;
    }
    uVar2 = 0x80000013;
    if (DAT_10230ffd0 < 2) {
      return 0x80000013;
    }
    pcVar6 = "A task to request product upgrade purchase is already running. Skip another request.";
  }
  else {
    uVar2 = 0x80000009;
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    pcVar6 = "In current application mode request product upgrade purchase not available.";
  }
  FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,pcVar6);
  return uVar2;
}


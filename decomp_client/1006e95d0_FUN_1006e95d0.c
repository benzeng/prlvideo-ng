
undefined4 FUN_1006e95d0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    if ((((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 4) == 0)) ||
        (*(long *)(param_1 + 0x78) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
      pQVar3 = operator_new(0x108);
      FUN_1002f6460(pQVar3,param_1 + 0x18,param_2);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0x70);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          local_23 = *piVar4 != 0;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0x70);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_22 = *piVar5 != 0;
          UNLOCK();
          if ((!(bool)local_22) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x70));
          }
        }
        *(int **)(param_1 + 0x70) = piVar4;
        *(QObject **)(param_1 + 0x78) = pQVar3;
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
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x78);
      }
      QObject::connect(&local_30,uVar7,"2taskFinished(PRL_RESULT)",param_1,
                       "1onTaskPurchaseUpgradeFinished(PRL_RESULT)",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
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
    pcVar6 = "A task to purchase product upgrade is already running. Skip another purchase.";
  }
  else {
    uVar2 = 0x80000009;
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    pcVar6 = "In current application mode product upgrade not available.";
  }
  FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,pcVar6);
  return uVar2;
}


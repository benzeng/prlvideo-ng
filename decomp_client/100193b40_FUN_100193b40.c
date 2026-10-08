
undefined8 FUN_100193b40(long param_1,undefined4 param_2)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  if ((((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0)) ||
      (*(long *)(param_1 + 0xa8) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pQVar2 = operator_new(0x48);
    FUN_100259b70(pQVar2,param_1,param_2);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    piVar5 = *(int **)(param_1 + 0xa0);
    if (piVar5 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_29 = *piVar3 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0xa0);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0xa0));
        }
      }
      *(int **)(param_1 + 0xa0) = piVar3;
      *(QObject **)(param_1 + 0xa8) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar3);
      }
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
    }
    uVar6 = 0;
    QObject::connect(local_38,uVar4,"2taskStarted()",param_1,"2shutDownRetryStarted()",0);
    QMetaObject::Connection::~Connection(local_38);
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xa8);
    }
    QObject::connect(local_40,uVar6,"2taskFinished(PRL_RESULT)",param_1,"2shutDownRetryFinished()",0
                    );
    QMetaObject::Connection::~Connection(local_40);
    CAbstractTask::execute();
  }
  else {
    cVar1 = FUN_100192f40(0x30dae,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    pQVar2 = (QObject *)FUN_1001930a0(param_1,0xc9);
    piVar5 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    piVar3 = *(int **)(param_1 + 0xa0);
    if (piVar3 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0xa0);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_29 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0xa0));
        }
      }
      *(int **)(param_1 + 0xa0) = piVar5;
      *(QObject **)(param_1 + 0xa8) = pQVar2;
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
  }
  uVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102203da0);
  return uVar4;
}


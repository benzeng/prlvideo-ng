
undefined8 FUN_1001930a0(long param_1,undefined4 param_2)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  FUN_100192c40();
  if ((((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0)) ||
      (*(long *)(param_1 + 0xa8) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pQVar2 = operator_new(0x48);
    FUN_10024ba00(pQVar2,param_1,param_2);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    piVar4 = *(int **)(param_1 + 0xa0);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0xa0);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0xa0));
        }
      }
      *(int **)(param_1 + 0xa0) = piVar3;
      *(QObject **)(param_1 + 0xa8) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
    CAbstractTask::execute();
  }
  else {
    cVar1 = FUN_100192f40(0x3ea,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102203da0);
  return uVar5;
}


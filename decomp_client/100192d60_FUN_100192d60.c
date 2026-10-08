
undefined8
FUN_100192d60(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  int iVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  iVar2 = FUN_10018bce0();
  uVar6 = 0;
  if (iVar2 != 2) {
    FUN_100192c40(param_1);
    if ((((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0)) ||
        (*(long *)(param_1 + 0xa8) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
      pQVar3 = operator_new(0x78);
      FUN_10021c180(pQVar3,param_1,param_2,param_3,param_4,param_5);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0xa0);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0xa0);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if ((*piVar5 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0xa0));
          }
        }
        *(int **)(param_1 + 0xa0) = piVar4;
        *(QObject **)(param_1 + 0xa8) = pQVar3;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          operator_delete(piVar4);
        }
      }
      CAbstractTask::execute();
    }
    else {
      plVar7 = (long *)0x0;
      if ((*(long *)(param_1 + 0xa0) != 0) &&
         (plVar7 = (long *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
        plVar7 = *(long **)(param_1 + 0xa8);
      }
      (**(code **)(*plVar7 + 0x80))();
      FUN_100df99c0("","prl_client_app",0,"change state task already running...");
      cVar1 = FUN_100192f40(0x3e9,param_1);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102203da0);
  }
  return uVar6;
}


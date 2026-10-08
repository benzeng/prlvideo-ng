
undefined8 FUN_100193650(long param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_10018a9d0();
  uVar6 = 0;
  if (iVar2 != 0x30000005) {
    FUN_10018d430(param_1,param_2);
    FUN_100192c40(param_1);
    if ((((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0)) ||
        (*(long *)(param_1 + 0xa8) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
      pQVar3 = operator_new(0x48);
      FUN_100249cf0(pQVar3,param_1,0x3ef,param_3,param_4);
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
      cVar1 = FUN_100192f40(0x3ef,param_1);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102203da0);
  }
  return uVar6;
}


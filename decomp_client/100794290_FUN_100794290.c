
void FUN_100794290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long **)(param_1 + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 != 0) {
    pQVar3 = operator_new(0x28);
    FUN_100792100(pQVar3,lVar2);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x18);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x18);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if ((*piVar5 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x18));
        }
      }
      *(int **)(param_1 + 0x18) = piVar4;
      *(QObject **)(param_1 + 0x20) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        operator_delete(piVar4);
      }
    }
  }
  FUN_100793bb0(param_1);
  return;
}


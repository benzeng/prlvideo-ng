
void FUN_1005b8380(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long **)(param_1 + 0x48) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  }
  piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar2 = *(int **)(param_1 + 0x40);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x40);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x40));
      }
    }
    *(int **)(param_1 + 0x40) = piVar1;
    *(QObject **)(param_1 + 0x48) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(piVar1);
    }
  }
  return;
}


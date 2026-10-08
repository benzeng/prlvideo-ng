
void FUN_100722bf0(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 4) != 0)) &&
      (*(long **)(param_1 + 0x10) != (long *)0x0)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  piVar1 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 8);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 8));
      }
    }
    *(int **)(param_1 + 8) = piVar1;
    *(QObject **)(param_1 + 0x10) = param_2;
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


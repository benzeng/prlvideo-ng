
void FUN_10072e810(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x10);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x10));
      }
    }
    *(int **)(param_1 + 0x10) = piVar1;
    *(QObject **)(param_1 + 0x18) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(piVar1);
    }
  }
  FUN_10072e8b0(param_1);
  return;
}


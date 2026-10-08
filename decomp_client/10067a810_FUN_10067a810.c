
void FUN_10067a810(long param_1,int param_2)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  pQVar1 = (QObject *)FUN_10068ab80(*(undefined8 *)(param_1 + 0x20));
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x130);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x130);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x130));
      }
    }
    *(int **)(param_1 + 0x130) = piVar2;
    *(QObject **)(param_1 + 0x138) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  if (param_2 == 2) {
    uVar4 = 2;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar4 = 0;
  }
  FUN_10067a650(param_1,uVar4);
  return;
}



void FUN_100734d90(long param_1)

{
  undefined8 uVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = FUN_100152280();
  pQVar2 = (QObject *)FUN_1001548f0(uVar1,param_1 + 0x18);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x50);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
    }
    *(int **)(param_1 + 0x50) = piVar3;
    *(QObject **)(param_1 + 0x58) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  return;
}


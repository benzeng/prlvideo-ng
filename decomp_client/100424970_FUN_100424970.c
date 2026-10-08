
void FUN_100424970(long param_1,int param_2,int param_3)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    FUN_100424300(param_1,param_3);
  }
  if (param_2 != 0) {
    pQVar1 = (QObject *)FUN_100424300(param_1,param_2);
    piVar2 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    piVar3 = *(int **)(param_1 + 0x68);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x68);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x68));
        }
      }
      *(int **)(param_1 + 0x68) = piVar2;
      *(QObject **)(param_1 + 0x70) = pQVar1;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        operator_delete(piVar2);
      }
    }
  }
  return;
}


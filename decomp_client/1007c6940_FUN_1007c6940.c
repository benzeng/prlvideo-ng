
void FUN_1007c6940(long param_1)

{
  int iVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  pQVar2 = (QObject *)FUN_1007c6ac0();
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x30);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x30);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x30));
      }
    }
    *(int **)(param_1 + 0x30) = piVar3;
    *(QObject **)(param_1 + 0x38) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    FUN_1007c6d90(param_1);
  }
  pQVar2 = (QObject *)FUN_1007c6ef0(param_1);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x40);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x40);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x40));
      }
    }
    *(int **)(param_1 + 0x40) = piVar3;
    *(QObject **)(param_1 + 0x48) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    iVar1 = FUN_10032c830();
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else if (iVar1 == 2) {
      uVar5 = 2;
    }
    else {
      if (iVar1 != 1) goto LAB_1007c6aa1;
      uVar5 = 1;
    }
    FUN_1007c74b0(param_1,uVar5);
  }
LAB_1007c6aa1:
  FUN_1007c7010(param_1);
  return;
}


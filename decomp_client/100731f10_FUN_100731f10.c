
void FUN_100731f10(long param_1,QObject *param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  pQVar4 = (QObject *)0x0;
  if ((lVar1 != 0) && (pQVar4 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar4 = *(QObject **)(param_1 + 0x28);
  }
  if (pQVar4 != param_2) {
    if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
      FUN_100732050(param_1);
    }
    piVar2 = (int *)0x0;
    if (param_2 != (QObject *)0x0) {
      piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    piVar3 = *(int **)(param_1 + 0x20);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x20);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar2;
      *(QObject **)(param_1 + 0x28) = param_2;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        operator_delete(piVar2);
      }
    }
    if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
       (*(long *)(param_1 + 0x28) == 0)) {
      FUN_100731930(param_1);
      FUN_100856530(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
    }
    else {
      FUN_100732340(param_1);
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
      }
      FUN_100732ea0(param_1,uVar5);
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_100856580(*(undefined8 *)(param_1 + 0x10),uVar5);
  }
  return;
}


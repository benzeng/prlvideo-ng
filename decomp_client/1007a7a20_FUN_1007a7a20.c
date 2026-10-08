
void FUN_1007a7a20(long param_1,QObject *param_2)

{
  undefined4 uVar1;
  QObject *pQVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (param_2 != (QObject *)0x0) {
    pQVar2 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar2 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar2 = *(QObject **)(param_1 + 0x48);
    }
    if (pQVar2 != param_2) {
      lVar3 = (**(code **)(*(long *)param_2 + 0x1a0))(param_2);
      if ((*(int *)(lVar3 + 0x28) != 2) &&
         (lVar3 = (**(code **)(*(long *)param_2 + 0x1a0))(param_2), *(int *)(lVar3 + 0x28) != 7)) {
        return;
      }
      if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
         (*(long **)(param_1 + 0x48) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x1d8))();
      }
      (**(code **)(*(long *)param_2 + 0x1d0))(param_2);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0x40);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if ((*piVar5 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x40));
          }
        }
        *(int **)(param_1 + 0x40) = piVar4;
        *(QObject **)(param_1 + 0x48) = param_2;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          operator_delete(piVar4);
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(long *)param_2 + 0x1a0))(param_2);
      uVar1 = *puVar6;
      lVar3 = (**(code **)(*(long *)param_2 + 0x1a0))(param_2);
      FUN_100861ff0(param_1,uVar1,*(undefined4 *)(lVar3 + 4));
    }
  }
  return;
}



void FUN_10072e510(long param_1)

{
  QObject *pQVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  pQVar1 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (pQVar1 != (QObject *)0x0) {
    pQVar2 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (pQVar2 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      pQVar2 = *(QObject **)(param_1 + 0x98);
    }
    if (pQVar2 != pQVar1) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
      piVar4 = *(int **)(param_1 + 0x90);
      if (piVar4 != piVar3) {
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          piVar4 = *(int **)(param_1 + 0x90);
        }
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if ((*piVar4 == 0) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x90));
          }
        }
        *(int **)(param_1 + 0x90) = piVar3;
        *(QObject **)(param_1 + 0x98) = pQVar1;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          operator_delete(piVar3);
        }
      }
      FUN_10072db40(param_1);
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x90) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x98);
      }
      FUN_1008557e0(param_1,uVar5);
    }
  }
  return;
}


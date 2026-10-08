
void FUN_100368ba0(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12c8);
  if (lVar1 == 0) {
    piVar4 = *(int **)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    piVar3 = *(int **)(param_1 + 0x28);
    if (piVar3 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x28);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar4;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      piVar4 = *(int **)(param_1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    piVar3 = *(int **)(param_1 + 0x38);
    if (piVar3 == piVar4) goto LAB_100368d7e;
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x38);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
  }
  else {
    pQVar2 = (QObject *)QAbstractScrollArea::viewport();
    piVar3 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    piVar4 = *(int **)(param_1 + 0x28);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x28);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar3;
      *(QObject **)(param_1 + 0x30) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
    pQVar2 = (QObject *)QScrollArea::widget();
    piVar3 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    piVar4 = *(int **)(param_1 + 0x38);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x38);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x38));
        }
      }
      *(int **)(param_1 + 0x38) = piVar3;
      *(QObject **)(param_1 + 0x40) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
  }
  piVar4 = *(int **)(param_1 + 0x18);
LAB_100368d7e:
  pQVar2 = (QObject *)0x0;
  if ((piVar4 != (int *)0x0) && (pQVar2 = (QObject *)0x0, piVar4[1] != 0)) {
    pQVar2 = *(QObject **)(param_1 + 0x20);
  }
  QObject::installEventFilter(pQVar2);
  pQVar2 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar2 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar2 = *(QObject **)(param_1 + 0x40);
  }
  QObject::installEventFilter(pQVar2);
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = 0;
  if ((lVar1 != 0) && (lVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    lVar5 = *(long *)(param_1 + 0x30);
  }
  lVar6 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    lVar6 = *(long *)(param_1 + 0x40);
  }
  if (lVar5 != lVar6) {
    pQVar2 = (QObject *)0x0;
    if ((lVar1 != 0) && (pQVar2 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pQVar2 = *(QObject **)(param_1 + 0x30);
    }
    QObject::installEventFilter(pQVar2);
  }
  return;
}


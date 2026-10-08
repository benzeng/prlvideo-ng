
/* Function Stack Size: 0x18 bytes */

void PDBarButtonItem::setVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  undefined *puVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar2 = _vm;
  piVar3 = (int *)0x0;
  if (param_3 != (CVmWrap *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_3);
  }
  piVar4 = *(int **)(param_1 + lVar2);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + lVar2);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar2));
      }
    }
    *(int **)(param_1 + lVar2) = piVar3;
    *(CVmWrap **)(param_1 + 8 + lVar2) = param_3;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setActiveIO__102269598,0);
  (*(code *)puVar1)(param_1,PTR_s_setConnected__1022695a0,1);
  (*(code *)puVar1)(param_1,PTR_s_setDropType__1022695a8,0);
  return;
}


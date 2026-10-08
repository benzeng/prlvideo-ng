
undefined8 FUN_1006b5700(long param_1)

{
  QMenuBar *this;
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar6 + 0x18);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 4) == 0)) || (*(long *)(lVar6 + 0x20) == 0)) {
    this = operator_new(0x30);
    QMenuBar::QMenuBar(this,(QWidget *)0x0);
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar2 = *(int **)(lVar6 + 0x18);
    if (piVar2 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        piVar2 = *(int **)(lVar6 + 0x18);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(lVar6 + 0x18));
        }
      }
      *(int **)(lVar6 + 0x18) = piVar1;
      *(QMenuBar **)(lVar6 + 0x20) = this;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    uVar4 = 0;
    if ((*(long *)(lVar6 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(lVar6 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
    }
    uVar3 = FUN_100060bb0();
    uVar3 = FUN_1000609c0(uVar3);
    FUN_1006b4810(lVar6,uVar4,uVar3);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x18);
    if (lVar5 == 0) {
      return 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(lVar5 + 4) != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
  }
  return uVar4;
}


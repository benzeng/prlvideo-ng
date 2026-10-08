
void FUN_100387190(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  QObject *pQVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x48);
  pQVar4 = (QObject *)0x0;
  if ((lVar3 != 0) && (pQVar4 = (QObject *)0x0, *(int *)(lVar3 + 4) != 0)) {
    pQVar4 = *(QObject **)(param_1 + 0x50);
  }
  if (pQVar4 != param_2) {
    if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
       (lVar3 = *(long *)(param_1 + 0x50), lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0x50) = 0;
      QGraphicsItem::update((QRectF *)(lVar3 + 0x10));
    }
    piVar1 = (int *)0x0;
    if (param_2 != (QObject *)0x0) {
      piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        piVar2 = *(int **)(param_1 + 0x48);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x48));
        }
      }
      *(int **)(param_1 + 0x48) = piVar1;
      *(QObject **)(param_1 + 0x50) = param_2;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
    lVar3 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    lVar5 = lVar3 + 0x10;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    FUN_100384cb0(*(undefined8 *)(param_1 + 0x90),lVar5,0);
    if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
       (lVar3 = *(long *)(param_1 + 0x50), lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0x50) = 1;
      QGraphicsItem::update((QRectF *)(lVar3 + 0x10));
    }
  }
  return;
}


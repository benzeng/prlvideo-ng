
/* Function Stack Size: 0x18 bytes */

QMenu * PDDevelopBarButtonItem::popupMenu_(ID param_1,SEL param_2,char *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  QMenu *pQVar7;
  undefined8 uVar8;
  
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  if (((*(long *)(param_1 + _devMenu) != 0) && (*(int *)(*(long *)(param_1 + _devMenu) + 4) != 0))
     && (plVar1 = *(long **)(_devMenu + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar2 = _devMenu;
  uVar3 = FUN_1006e1350();
  uVar8 = 0;
  if ((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
     (uVar8 = 0, *(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) {
    uVar8 = *(undefined8 *)(PDBarButtonItem::_vm + 8 + param_1);
  }
  piVar5 = (int *)0x0;
  pQVar4 = (QObject *)FUN_1006e13b0(uVar3,0xc,0,uVar8,4);
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + lVar2);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      piVar6 = *(int **)(param_1 + lVar2);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if ((*piVar6 == 0) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar2));
      }
    }
    *(int **)(param_1 + lVar2) = piVar5;
    *(QObject **)(param_1 + 8 + lVar2) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      operator_delete(piVar5);
    }
  }
  pQVar7 = (QMenu *)0x0;
  if ((*(long *)(param_1 + _devMenu) != 0) &&
     (pQVar7 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + _devMenu) + 4) != 0)) {
    pQVar7 = *(QMenu **)(_devMenu + 8 + param_1);
  }
  return pQVar7;
}



/* Function Stack Size: 0x18 bytes */

QMenu * PDSharedFoldersBarButtonItem::popupMenu_(ID param_1,SEL param_2,char *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  QMenu *pQVar5;
  undefined8 uVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  lVar2 = PDBarButtonItem::_vm;
  pQVar5 = (QMenu *)0x0;
  if ((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
     (pQVar5 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) {
    pQVar5 = (QMenu *)0x0;
    if (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0) {
      iVar4 = FUN_10018f5b0();
      pQVar5 = (QMenu *)0x0;
      if (iVar4 != 1) {
        uVar10 = 0;
        if ((*(long *)(param_1 + lVar2) != 0) &&
           (uVar10 = 0, *(int *)(*(long *)(param_1 + lVar2) + 4) != 0)) {
          uVar10 = *(undefined8 *)(lVar2 + 8 + param_1);
        }
        iVar4 = FUN_10018f5b0(uVar10);
        pQVar5 = (QMenu *)0x0;
        if (iVar4 != 0) {
          if (((*(long *)(param_1 + _sfMenu) != 0) &&
              (*(int *)(*(long *)(param_1 + _sfMenu) + 4) != 0)) &&
             (plVar1 = *(long **)(_sfMenu + 8 + param_1), plVar1 != (long *)0x0)) {
            (**(code **)(*plVar1 + 0x20))();
          }
          lVar3 = _sfMenu;
          uVar6 = FUN_1006e1350();
          uVar10 = 0;
          if ((*(long *)(param_1 + lVar2) != 0) &&
             (uVar10 = 0, *(int *)(*(long *)(param_1 + lVar2) + 4) != 0)) {
            uVar10 = *(undefined8 *)(lVar2 + 8 + param_1);
          }
          piVar8 = (int *)0x0;
          pQVar7 = (QObject *)FUN_1006e13b0(uVar6,0xe,0,uVar10,4);
          if (pQVar7 != (QObject *)0x0) {
            piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
          }
          piVar9 = *(int **)(param_1 + lVar3);
          if (piVar9 != piVar8) {
            if (piVar8 != (int *)0x0) {
              LOCK();
              *piVar8 = *piVar8 + 1;
              UNLOCK();
              piVar9 = *(int **)(param_1 + lVar3);
            }
            if (piVar9 != (int *)0x0) {
              LOCK();
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if ((*piVar9 == 0) && (*(void **)(param_1 + lVar3) != (void *)0x0)) {
                operator_delete(*(void **)(param_1 + lVar3));
              }
            }
            *(int **)(param_1 + lVar3) = piVar8;
            *(QObject **)(param_1 + 8 + lVar3) = pQVar7;
          }
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (*piVar8 == 0) {
              operator_delete(piVar8);
            }
          }
          pQVar5 = (QMenu *)0x0;
          if ((*(long *)(param_1 + _sfMenu) != 0) &&
             (pQVar5 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + _sfMenu) + 4) != 0)) {
            pQVar5 = *(QMenu **)(_sfMenu + 8 + param_1);
          }
        }
      }
    }
  }
  return pQVar5;
}


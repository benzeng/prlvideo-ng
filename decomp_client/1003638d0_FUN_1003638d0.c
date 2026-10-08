
undefined4 FUN_1003638d0(long *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  QObject *pQVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  QObject *pQVar9;
  QObject *pQVar10;
  int *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  pQVar5 = (QObject *)QApplication::focusWidget();
  lVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1428);
  if (lVar6 != 0) {
    pQVar5 = (QObject *)QAbstractScrollArea::viewport();
  }
  uVar4 = 3;
  if (pQVar5 == (QObject *)0x0) {
    return 3;
  }
  FUN_10006b440(&local_40,param_1[1] + 0x40);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  iVar1 = local_40[2];
  if (iVar1 == local_40[3]) {
    bVar3 = false;
  }
  else {
    plVar8 = (long *)(local_40 + (long)iVar1 * 2 + 4);
    lVar6 = (long)local_40[3] * 8 + (long)iVar1 * -8;
    do {
      lVar2 = *(long *)*plVar8;
      pQVar9 = (QObject *)0x0;
      if ((lVar2 != 0) && (pQVar9 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
        pQVar9 = (QObject *)((long *)*plVar8)[1];
      }
      pQVar10 = (QObject *)0x0;
      if ((piVar7 != (int *)0x0) && (pQVar10 = (QObject *)0x0, piVar7[1] != 0)) {
        pQVar10 = pQVar5;
      }
      bVar3 = true;
      if (pQVar9 == pQVar10) goto LAB_1003639ac;
      plVar8 = plVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    bVar3 = false;
  }
LAB_1003639ac:
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_32 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_32) {
      operator_delete(piVar7);
    }
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_31 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003639f1;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
LAB_1003639f1:
  if (bVar3) {
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,pQVar5,param_2,param_3);
  }
  return uVar4;
}


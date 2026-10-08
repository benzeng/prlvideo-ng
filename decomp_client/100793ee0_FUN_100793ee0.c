
void FUN_100793ee0(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  long *plVar5;
  int *piVar6;
  
  if (param_2 == param_3) {
    return;
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long **)(param_1 + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  if (param_3 == (long *)0x0) {
    FUN_100790b60(param_1);
    return;
  }
  lVar2 = (**(code **)(*param_3 + 8))(param_3,"QLineEdit");
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_3 + 8))(param_3,"QTextEdit");
    if (lVar2 == 0) {
      FUN_100060bb0();
      iVar1 = FUN_100060df0(param_3);
      if (iVar1 == 3) {
        plVar5 = (long *)QWidget::window();
        lVar2 = (**(code **)(*plVar5 + 8))(plVar5,"CVmConsoleWindow");
        if (lVar2 == 0) {
          plVar5 = (long *)QWidget::window();
          lVar2 = (**(code **)(*plVar5 + 8))(plVar5,"CVmConsoleView");
          if (lVar2 == 0) {
            plVar5 = (long *)QWidget::window();
            lVar2 = (**(code **)(*plVar5 + 8))(plVar5,"CVmConsoleWidget");
            if (lVar2 == 0) goto LAB_1007941c8;
          }
        }
        FUN_100060bb0();
        FUN_100060320(param_3);
        lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
        if (lVar2 == 0) goto LAB_100794262;
        pQVar3 = operator_new(0x28);
        FUN_100792100(pQVar3,lVar2);
        piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
        piVar6 = *(int **)(param_1 + 0x18);
        if (piVar6 != piVar4) {
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
            piVar6 = *(int **)(param_1 + 0x18);
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if ((*piVar6 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x18));
            }
          }
          *(int **)(param_1 + 0x18) = piVar4;
          *(QObject **)(param_1 + 0x20) = pQVar3;
        }
        if (piVar4 == (int *)0x0) goto LAB_100794262;
        LOCK();
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4;
        UNLOCK();
      }
      else {
LAB_1007941c8:
        lVar2 = (**(code **)(*param_3 + 8))(param_3,"QDeclarativeView");
        if (lVar2 == 0) goto LAB_100794262;
        pQVar3 = operator_new(0x28);
        FUN_100794470(pQVar3,param_3);
        piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
        piVar6 = *(int **)(param_1 + 0x18);
        if (piVar6 != piVar4) {
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
            piVar6 = *(int **)(param_1 + 0x18);
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if ((*piVar6 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x18));
            }
          }
          *(int **)(param_1 + 0x18) = piVar4;
          *(QObject **)(param_1 + 0x20) = pQVar3;
        }
        if (piVar4 == (int *)0x0) goto LAB_100794262;
        LOCK();
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4;
        UNLOCK();
      }
    }
    else {
      lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15f8);
      if (lVar2 == 0) goto LAB_100794262;
      pQVar3 = operator_new(0x28);
      FUN_100791a90(pQVar3,lVar2);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar6 = *(int **)(param_1 + 0x18);
      if (piVar6 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          piVar6 = *(int **)(param_1 + 0x18);
        }
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if ((*piVar6 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x18));
          }
        }
        *(int **)(param_1 + 0x18) = piVar4;
        *(QObject **)(param_1 + 0x20) = pQVar3;
      }
      if (piVar4 == (int *)0x0) goto LAB_100794262;
      LOCK();
      *piVar4 = *piVar4 + -1;
      iVar1 = *piVar4;
      UNLOCK();
    }
  }
  else {
    lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
    if (lVar2 == 0) goto LAB_100794262;
    pQVar3 = operator_new(0x28);
    FUN_1007910d0(pQVar3,lVar2);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar6 = *(int **)(param_1 + 0x18);
    if (piVar6 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x18);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if ((*piVar6 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x18));
        }
      }
      *(int **)(param_1 + 0x18) = piVar4;
      *(QObject **)(param_1 + 0x20) = pQVar3;
    }
    if (piVar4 == (int *)0x0) goto LAB_100794262;
    LOCK();
    *piVar4 = *piVar4 + -1;
    iVar1 = *piVar4;
    UNLOCK();
  }
  if (iVar1 == 0) {
    operator_delete(piVar4);
  }
LAB_100794262:
  FUN_100793bb0(param_1);
  return;
}


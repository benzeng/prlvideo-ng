
undefined8 FUN_1001e0340(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001554a0(uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  iVar3 = FUN_10015d3a0(lVar6);
  uVar5 = FUN_100794960();
  iVar4 = FUN_100796670(uVar5,lVar6);
  if (iVar4 + iVar3 == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (((*(long *)(lVar6 + 0x28) == 0) || (*(int *)(*(long *)(lVar6 + 0x28) + 4) == 0)) ||
     (*(long *)(lVar6 + 0x30) == 0)) {
    pQVar7 = operator_new(0x48);
    FUN_10007e7d0(pQVar7);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    piVar9 = *(int **)(lVar6 + 0x28);
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_29 = *piVar8 != 0;
        UNLOCK();
        piVar9 = *(int **)(lVar6 + 0x28);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(lVar6 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(lVar6 + 0x28));
        }
      }
      *(int **)(lVar6 + 0x28) = piVar8;
      *(QObject **)(lVar6 + 0x30) = pQVar7;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
    uVar5 = FUN_100152280();
    lVar6 = FUN_1001554a0(uVar5);
    if (lVar6 != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      pcVar10 = (char *)0x0;
      if ((lVar1 != 0) && (pcVar10 = (char *)0x0, *(int *)(lVar1 + 4) != 0)) {
        pcVar10 = *(char **)(*(long *)(param_1 + 0x10) + 0x30);
      }
      FUN_10015aab0(&local_48,lVar6);
      QVariant::QVariant(&local_40,&local_48);
      QObject::setProperty(pcVar10,(QVariant *)"serverUuid");
      QVariant::~QVariant(&local_40);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001e051b;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
  else {
    cVar2 = QWidget::isMinimized();
    if (cVar2 != '\0') {
      QWidget::showNormal();
      goto LAB_1001e0520;
    }
  }
LAB_1001e051b:
  QWidget::show();
LAB_1001e0520:
  QWidget::raise();
  QWidget::activateWindow();
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  uVar5 = 0;
  if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  }
  return uVar5;
}


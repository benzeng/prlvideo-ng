
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::initWithVmConsoleWindow_
             (ID param_1,SEL param_2,CVmConsoleWindow *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  int *piVar8;
  QObject *pQVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID local_48;
  undefined *local_40;
  undefined1 local_31;
  
  uVar5 = QWidget::winId();
  uVar5 = (*(code *)PTR__objc_retain_1021e1c78)(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_window_102268c08);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_40 = PTR_CVmConsoleWindowToolbarController_10226ab50;
  local_48 = param_1;
  IVar7 = NSObject::init((ID)&local_48,PTR_s_init_102268ca8);
  if (IVar7 != 0) {
    _objc_storeWeak(IVar7 + _window,uVar6);
    piVar8 = (int *)0x0;
    if (param_3 != (CVmConsoleWindow *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_3);
    }
    lVar2 = _vmConsoleWindow;
    piVar10 = *(int **)(IVar7 + _vmConsoleWindow);
    if (piVar10 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        piVar10 = *(int **)(IVar7 + lVar2);
      }
      if (piVar10 != (int *)0x0) {
        LOCK();
        *piVar10 = *piVar10 + -1;
        local_31 = *piVar10 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(IVar7 + lVar2) != (void *)0x0)) {
          operator_delete(*(void **)(IVar7 + lVar2));
        }
      }
      *(int **)(IVar7 + lVar2) = piVar8;
      *(CVmConsoleWindow **)(IVar7 + 8 + lVar2) = param_3;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    pQVar9 = (QObject *)FUN_10036ab40(param_3);
    piVar8 = (int *)0x0;
    if (pQVar9 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
    }
    lVar2 = _vm;
    piVar10 = *(int **)(IVar7 + _vm);
    if (piVar10 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        piVar10 = *(int **)(IVar7 + lVar2);
      }
      if (piVar10 != (int *)0x0) {
        LOCK();
        *piVar10 = *piVar10 + -1;
        local_31 = *piVar10 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(IVar7 + lVar2) != (void *)0x0)) {
          operator_delete(*(void **)(IVar7 + lVar2));
        }
      }
      *(int **)(IVar7 + lVar2) = piVar8;
      *(QObject **)(IVar7 + 8 + lVar2) = pQVar9;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    pQVar9 = operator_new(0x18);
    uVar12 = 0;
    if ((*(long *)(IVar7 + lVar2) != 0) && (uVar12 = 0, *(int *)(*(long *)(IVar7 + lVar2) + 4) != 0)
       ) {
      uVar12 = *(undefined8 *)(lVar2 + 8 + IVar7);
    }
    uVar11 = 0;
    if ((*(long *)(IVar7 + _vmConsoleWindow) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(IVar7 + _vmConsoleWindow) + 4) != 0)) {
      uVar11 = *(undefined8 *)(_vmConsoleWindow + 8 + IVar7);
    }
    FUN_10037fd80(pQVar9,uVar12,uVar11);
    piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
    lVar3 = _messageProvider;
    piVar8 = *(int **)(IVar7 + _messageProvider);
    if (piVar8 != piVar10) {
      if (piVar10 != (int *)0x0) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        local_31 = *piVar10 != 0;
        UNLOCK();
        piVar8 = *(int **)(IVar7 + lVar3);
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(IVar7 + lVar3) != (void *)0x0)) {
          operator_delete(*(void **)(IVar7 + lVar3));
        }
      }
      *(int **)(IVar7 + lVar3) = piVar10;
      *(QObject **)(IVar7 + 8 + lVar3) = pQVar9;
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    uVar12 = 0;
    if ((*(long *)(IVar7 + lVar2) != 0) && (uVar12 = 0, *(int *)(*(long *)(IVar7 + lVar2) + 4) != 0)
       ) {
      uVar12 = *(undefined8 *)(lVar2 + 8 + IVar7);
    }
    uVar4 = FUN_100014e90(uVar12);
    *(undefined1 *)(IVar7 + _toolsWarningVisible) = uVar4;
    NSObject::setupSignals(IVar7,PTR_s_setupSignals_102268c20);
    NSObject::setupUI(IVar7,PTR_s_setupUI_102268c28);
  }
  IVar7 = (*(code *)PTR__objc_retain_1021e1c78)(IVar7);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(IVar7);
  return IVar7;
}


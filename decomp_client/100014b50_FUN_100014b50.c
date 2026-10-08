
undefined8 FUN_100014b50(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  int *piVar7;
  QObject *pQVar8;
  int *piVar9;
  undefined8 uVar10;
  QObject *extraout_RDX;
  undefined8 uVar11;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 uStack_39;
  
  ___cxa_begin_catch();
  std::terminate();
  uVar5 = QWidget::winId();
  uVar5 = (*(code *)PTR__objc_retain_1021e1c78)(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_window_102268c08);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puStack_48 = PTR_CVmConsoleWindowToolbarController_10226ab50;
  uStack_50 = param_1;
  self = NSObject::init((ID)&uStack_50,PTR_s_init_102268ca8);
  if (self != 0) {
    _objc_storeWeak(self + CVmConsoleWindowToolbarController::_window,uVar6);
    piVar7 = (int *)0x0;
    if (extraout_RDX != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(extraout_RDX);
    }
    lVar2 = CVmConsoleWindowToolbarController::_vmConsoleWindow;
    piVar9 = *(int **)(self + CVmConsoleWindowToolbarController::_vmConsoleWindow);
    if (piVar9 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        uStack_39 = *piVar7 != 0;
        UNLOCK();
        piVar9 = *(int **)(self + lVar2);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        uStack_39 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)uStack_39) && (*(void **)(self + lVar2) != (void *)0x0)) {
          operator_delete(*(void **)(self + lVar2));
        }
      }
      *(int **)(self + lVar2) = piVar7;
      *(QObject **)(self + 8 + lVar2) = extraout_RDX;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      uStack_39 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)uStack_39) {
        operator_delete(piVar7);
      }
    }
    pQVar8 = (QObject *)FUN_10036ab40(extraout_RDX);
    piVar7 = (int *)0x0;
    if (pQVar8 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
    }
    lVar2 = CVmConsoleWindowToolbarController::_vm;
    piVar9 = *(int **)(self + CVmConsoleWindowToolbarController::_vm);
    if (piVar9 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        uStack_39 = *piVar7 != 0;
        UNLOCK();
        piVar9 = *(int **)(self + lVar2);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        uStack_39 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)uStack_39) && (*(void **)(self + lVar2) != (void *)0x0)) {
          operator_delete(*(void **)(self + lVar2));
        }
      }
      *(int **)(self + lVar2) = piVar7;
      *(QObject **)(self + 8 + lVar2) = pQVar8;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      uStack_39 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)uStack_39) {
        operator_delete(piVar7);
      }
    }
    pQVar8 = operator_new(0x18);
    uVar10 = 0;
    if ((*(long *)(self + lVar2) != 0) && (uVar10 = 0, *(int *)(*(long *)(self + lVar2) + 4) != 0))
    {
      uVar10 = *(undefined8 *)(lVar2 + 8 + self);
    }
    uVar11 = 0;
    if ((*(long *)(self + CVmConsoleWindowToolbarController::_vmConsoleWindow) != 0) &&
       (uVar11 = 0,
       *(int *)(*(long *)(self + CVmConsoleWindowToolbarController::_vmConsoleWindow) + 4) != 0)) {
      uVar11 = *(undefined8 *)(CVmConsoleWindowToolbarController::_vmConsoleWindow + 8 + self);
    }
    FUN_10037fd80(pQVar8,uVar10,uVar11);
    piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
    lVar3 = CVmConsoleWindowToolbarController::_messageProvider;
    piVar7 = *(int **)(self + CVmConsoleWindowToolbarController::_messageProvider);
    if (piVar7 != piVar9) {
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        uStack_39 = *piVar9 != 0;
        UNLOCK();
        piVar7 = *(int **)(self + lVar3);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        uStack_39 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)uStack_39) && (*(void **)(self + lVar3) != (void *)0x0)) {
          operator_delete(*(void **)(self + lVar3));
        }
      }
      *(int **)(self + lVar3) = piVar9;
      *(QObject **)(self + 8 + lVar3) = pQVar8;
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      uStack_39 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)uStack_39) {
        operator_delete(piVar9);
      }
    }
    uVar10 = 0;
    if ((*(long *)(self + lVar2) != 0) && (uVar10 = 0, *(int *)(*(long *)(self + lVar2) + 4) != 0))
    {
      uVar10 = *(undefined8 *)(lVar2 + 8 + self);
    }
    uVar4 = FUN_100014e90(uVar10);
    *(undefined1 *)(self + CVmConsoleWindowToolbarController::_toolsWarningVisible) = uVar4;
    NSObject::setupSignals(self,PTR_s_setupSignals_102268c20);
    NSObject::setupUI(self,PTR_s_setupUI_102268c28);
  }
  uVar10 = (*(code *)PTR__objc_retain_1021e1c78)(self);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar10);
  return uVar10;
}


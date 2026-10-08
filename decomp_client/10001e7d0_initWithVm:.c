
/* Function Stack Size: 0x18 bytes */

ID PDDeviceBarViewContaner::initWithVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  long lVar1;
  ID IVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  objc_super local_40;
  undefined1 local_29;
  
  local_40.super_class = (class_t *)PTR_PDDeviceBarViewContaner_10226ab60;
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,PTR_s_init_102268ca8);
  if (IVar2 != 0) {
    piVar3 = (int *)0x0;
    if (param_3 != (CVmWrap *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_3);
    }
    lVar1 = _vm;
    piVar4 = *(int **)(IVar2 + _vm);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_29 = *piVar3 != 0;
        UNLOCK();
        piVar4 = *(int **)(IVar2 + lVar1);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(IVar2 + lVar1) != (void *)0x0)) {
          operator_delete(*(void **)(IVar2 + lVar1));
        }
      }
      *(int **)(IVar2 + lVar1) = piVar3;
      *(CVmWrap **)(IVar2 + 8 + lVar1) = param_3;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar3);
      }
    }
    *(undefined8 *)(IVar2 + _lastUpdateForItemsCount) = 0;
    lVar1 = _instrinsicSize;
    uVar5 = *(undefined8 *)PTR__NSViewNoInstrinsicMetric_1021e1150;
    *(undefined8 *)(IVar2 + _instrinsicSize) = uVar5;
    *(undefined8 *)(IVar2 + 8 + lVar1) = uVar5;
    *(undefined1 *)(IVar2 + _deviceListVisible) = 1;
    *(undefined1 *)(IVar2 + _animationIsInProgress) = 0;
    *(undefined1 *)(IVar2 + _toolsWarningVisible) = 0;
    *(undefined8 *)(IVar2 + _lastUpdateForFrameWidth) = 0xffffffffffffffff;
    *(undefined1 *)(IVar2 + _lastUpdateForDevicesAvailable) = 0;
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar2,PTR_s_setWantsLayer__102268b90,1);
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar2,PTR_s_updateContainer_102269380);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar5,PTR_s_addObserver_selector_name_object_102268bb8,IVar2,
               PTR_s_viewFrameChanged_102269388,
               *(undefined8 *)PTR__NSViewFrameDidChangeNotification_1021e1148,0);
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  }
  return IVar2;
}


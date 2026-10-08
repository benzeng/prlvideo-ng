
/* Function Stack Size: 0x10 bytes */

ID PDDeviceStatusView::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  local_30.super_class = (class_t *)PTR_PDDeviceStatusView_10226ab68;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(undefined1 *)(IVar1 + _statusVisible) = 0;
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar2,PTR_s_addObserver_selector_name_object_102268bb8,IVar1,
               PTR_s_updateForActiveState_102269550,
               *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_1021e1158,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar2,PTR_s_addObserver_selector_name_object_102268bb8,IVar1,
               PTR_s_updateForActiveState_102269550,
               *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_1021e1160,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar2,PTR_s_addObserver_selector_name_object_102268bb8,IVar1,
               PTR_s_updateForActiveState_102269550,
               *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_1021e1078,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar2,PTR_s_addObserver_selector_name_object_102268bb8,IVar1,
               PTR_s_updateForActiveState_102269550,
               *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_1021e1088,0);
    (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  }
  return IVar1;
}


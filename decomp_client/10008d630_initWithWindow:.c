
/* Function Stack Size: 0x18 bytes */

ID CControlCenterTitleBarController::initWithWindow_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_CControlCenterTitleBarController_10226ac08;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,PTR_s_initWithWindow__102268c10);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar1,PTR_s_setupButtons_10226a0e0);
  }
  return IVar1;
}


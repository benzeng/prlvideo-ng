
/* Function Stack Size: 0x10 bytes */

void CControlCenterTitleBarController::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  objc_super local_28;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setAddButtonHandler__102269fc8,0);
  (*(code *)puVar1)(param_1,PTR_s_setViewModeHandler__102269fd0,0);
  (*(code *)puVar1)(param_1,PTR_s_setAddButton__10226a0e8,0);
  local_28.super_class = (class_t *)PTR_CControlCenterTitleBarController_10226ac08;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}


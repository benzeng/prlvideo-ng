
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  objc_super local_30;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_removeObserver__102268c30,param_1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_clearContainer_102269390);
  local_30.super_class = (class_t *)PTR_PDDeviceBarViewContaner_10226ab60;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_102268c60);
  return;
}


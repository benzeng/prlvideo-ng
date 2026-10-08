
/* Function Stack Size: 0x10 bytes */

void CMacCocoaApplicationDelegate::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_28;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  (*(code *)puVar1)(uVar2,PTR_s_removeObserver__102268c30,param_1);
  local_28.super_class = (class_t *)PTR_CMacCocoaApplicationDelegate_10226abe0;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}


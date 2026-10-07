
/* Function Stack Size: 0x10 bytes */

void CocoaProcessWatcher::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_28;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_notificationCenter_100bed700);
  (*(code *)puVar1)(uVar2,PTR_s_removeObserver__100bed588,param_1);
  local_28.super_class = (class_t *)PTR_CocoaProcessWatcher_100bedc88;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_100bed598);
  return;
}


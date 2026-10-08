
/* Function Stack Size: 0x18 bytes */

void CMacCocoaApplicationDelegate::applicationWillFinishLaunching_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAppleEventManager_10226a998,
                     PTR_s_sharedAppleEventManager_102269b78);
  (*(code *)puVar1)(uVar3,PTR_s_setEventHandler_andSelector_forE_102269b88,param_1,
                    PTR_s_handleReopenEvent_withReplyEvent_102269b80,0x61657674,0x72617070);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                            PTR_s_defaultCenter_102268ba8);
  (*(code *)puVar1)(uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                    &cf_AppleSelectedInputSourcesChangedNotification,0,0,
                    &PTR___NSConcreteGlobalBlock_1021ed7c0);
  if (DAT_102310930 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001e5440(pvVar4);
    DAT_102273630 = 1;
    DAT_102310930 = pvVar4;
  }
  iVar2 = FUN_1001e5550(DAT_102310930,4);
  if (iVar2 == -0x7ffeac7c) {
    MacUtils::bringProcessToFront();
    return;
  }
  return;
}


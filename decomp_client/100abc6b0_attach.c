
/* Function Stack Size: 0x10 bytes */

void DesktopNotificationObserver::attach(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSOperationQueue_10226a920,PTR_s_mainQueue_102269910);
  local_48 = PTR___NSConcreteStackBlock_1021e1280;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_100abc760;
  local_30 = &DAT_102239ee0;
  local_28 = param_1;
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_addObserverForName_object_queue__1022692e0,
                            &cf_AppleInterfaceThemeChangedNotification,0,uVar3,&local_48);
  *(undefined8 *)(param_1 + _notificationObjserver) = uVar2;
  return;
}


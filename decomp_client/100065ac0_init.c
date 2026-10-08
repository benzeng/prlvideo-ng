
/* Function Stack Size: 0x10 bytes */

ID CMacCocoaApplicationDelegate::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_30;
  
  local_30.super_class = (class_t *)PTR_CMacCocoaApplicationDelegate_10226abe0;
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,PTR_s_init_102268ca8);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    (*(code *)puVar1)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,IVar2,
                      PTR_s_applicationWillFinishLaunching__102269b68,
                      *(undefined8 *)PTR__NSApplicationWillFinishLaunchingNotification_1021e1090,0);
    (*(code *)puVar1)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,IVar2,
                      PTR_s_applicationDidFinishLaunching__102269b70,
                      *(undefined8 *)PTR__NSApplicationDidFinishLaunchingNotification_1021e1080,0);
  }
  return IVar2;
}


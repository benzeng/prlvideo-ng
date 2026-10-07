
/* Function Stack Size: 0x18 bytes */

ID CocoaProcessWatcher::initNotifications_(ID param_1,SEL param_2,CLibProcessMonitor *param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  objc_super local_38;
  
  local_38.super_class = (class_t *)PTR_CocoaProcessWatcher_100bedc88;
  local_38.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_38,PTR_s_init_100bed248);
  if (IVar2 != 0) {
    *(CLibProcessMonitor **)(IVar2 + m_monitor) = param_3;
    puVar1 = PTR__objc_msgSend_100ba25e8;
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_100bed248);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSWorkspace_100bedaf8,
                              PTR_s_sharedWorkspace_100bed200);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_notificationCenter_100bed700);
    (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_100bed710,IVar2,
                      PTR_s_applicationCreated__100bed708,
                      *(undefined8 *)PTR__NSWorkspaceDidLaunchApplicationNotification_100ba2088,0);
    (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_100bed710,IVar2,
                      PTR_s_applicationActivated__100bed718,
                      *(undefined8 *)PTR__NSWorkspaceDidActivateApplicationNotification_100ba2080,0)
    ;
    (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_100bed710,IVar2,
                      PTR_s_applicationTerminated__100bed720,
                      *(undefined8 *)PTR__NSWorkspaceDidTerminateApplicationNotification_100ba2090,0
                     );
    (*(code *)puVar1)(uVar3,PTR_s_release_100bed2a0);
  }
  return IVar2;
}


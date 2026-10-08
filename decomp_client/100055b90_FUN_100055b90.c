
void FUN_100055b90(QObject *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f9210;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_notificationCenter_1022699f0);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_ApplicationNotification_10226a950,PTR_s_alloc_102268b58);
  DAT_102311dd0 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_initWithObj__1022699f8,param_1)
  ;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_addObserver_selector_name_object_102268bb8,DAT_102311dd0,
             PTR_s_appLaunched__102269a00,
             *(undefined8 *)PTR__NSWorkspaceDidLaunchApplicationNotification_1021e1190,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_addObserver_selector_name_object_102268bb8,DAT_102311dd0,
             PTR_s_appTerminated__102269a08,
             *(undefined8 *)PTR__NSWorkspaceDidTerminateApplicationNotification_1021e11a0,0);
  return;
}


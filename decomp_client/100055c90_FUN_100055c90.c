
void FUN_100055c90(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f9210;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_notificationCenter_1022699f0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,DAT_102311dd0,
             *(undefined8 *)PTR__NSWorkspaceDidLaunchApplicationNotification_1021e1190,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,DAT_102311dd0,
             *(undefined8 *)PTR__NSWorkspaceDidTerminateApplicationNotification_1021e11a0,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_102311dd0,PTR_s_dealloc_102268c60);
  QObject::~QObject(param_1);
  return;
}



/* Function Stack Size: 0x10 bytes */

void CNotifier::unregisterNotifications(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_notificationCenter_1022699f0);
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,param_1,
             *(undefined8 *)PTR__NSWorkspaceDidMountNotification_1021e1198,0);
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,param_1,
             *(undefined8 *)PTR__NSWorkspaceDidUnmountNotification_1021e11a8,0);
  uVar1 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,param_1,&cf_com_apple_screenIsLocked,
             0);
                    /* WARNING: Could not recover jumptable at 0x00010005a6e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar1,PTR_s_removeObserver_name_object__102268bf8,param_1,
             &cf_com_apple_screenIsUnlocked,0);
  return;
}


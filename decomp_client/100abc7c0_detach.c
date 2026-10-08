
/* Function Stack Size: 0x10 bytes */

void DesktopNotificationObserver::detach(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
                    /* WARNING: Could not recover jumptable at 0x000100abc7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar1,PTR_s_removeObserver__102268c30,*(undefined8 *)(param_1 + _notificationObjserver)
            );
  return;
}


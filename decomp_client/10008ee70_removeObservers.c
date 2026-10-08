
/* Function Stack Size: 0x10 bytes */

void CMacShortcutRecognizerEventsObserver::removeObservers(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_globalEventsMonitor_10226a210);
  (*(code *)UNRECOVERED_JUMPTABLE)(puVar1,PTR_s_removeMonitor__102269878,uVar2);
  puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_localEventsMonitor_10226a218);
  (*(code *)UNRECOVERED_JUMPTABLE)(puVar1,PTR_s_removeMonitor__102269878,uVar2);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
  uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_localeChangeObserver_10226a220);
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_removeObserver__102268c30,uVar3);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
  uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_tiswitcherObserver_10226a228);
                    /* WARNING: Could not recover jumptable at 0x00010008ef34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_removeObserver__102268c30,uVar3);
  return;
}


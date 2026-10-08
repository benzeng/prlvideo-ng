
void FUN_100d79c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)PTR__NSApp_1021e1070;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_eventWithCGEvent__10226a5f0,param_1);
                    /* WARNING: Could not recover jumptable at 0x000100d79cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_postEvent_atStart__10226a618,uVar2,0);
  return;
}


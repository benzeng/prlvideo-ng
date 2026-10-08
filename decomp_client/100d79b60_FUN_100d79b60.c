
void FUN_100d79b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_eventWithCGEvent__10226a5f0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  uVar6 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_locationInWindow_10226a608);
  uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_modifierFlags_102269650);
  uVar7 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_timestamp_102269658);
  uVar4 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_windowNumber_102269660);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_context_102269668);
  uVar5 = 9;
  if (param_4 != '\0') {
    uVar5 = 6;
  }
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (uVar6,param_2,uVar7,puVar1,PTR_s_otherEventWithType_location_modi_10226a610,0xe
                     ,uVar3,uVar4,uVar2,uVar5,0x6c6b7570,0x6c6b7570);
                    /* WARNING: Could not recover jumptable at 0x000100d79c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_CGEvent_102269a30);
  return;
}



void FUN_10005b8b0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,param_2);
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_showas);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,param_3);
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_displayas);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010005b956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_arrangement);
  return;
}


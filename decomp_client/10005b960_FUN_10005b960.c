
void FUN_10005b960(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010005b9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_file_type);
  return;
}


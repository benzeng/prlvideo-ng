
void FUN_10007d920(long param_1,undefined4 param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  uVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_storage_102269f20);
                    /* WARNING: Could not recover jumptable at 0x00010007d95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setSortOrder__102269f28,param_2);
  return;
}


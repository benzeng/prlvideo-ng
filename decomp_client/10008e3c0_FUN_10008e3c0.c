
void FUN_10008e3c0(undefined8 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_operation_10226a1a8);
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setIndeterminate__102268fa0,*(int *)(lVar1 + 0x14) == -1);
                    /* WARNING: Could not recover jumptable at 0x00010008e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)
              ((double)*(int *)(lVar1 + 0x14),param_1,PTR_s_setCurrentValue__10226a1b0);
    return;
  }
  return;
}



void FUN_10008e670(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_operation_10226a1a8);
  if ((lVar1 != 0) &&
     ((puVar2 = PTR_s_resume_10226a1d8, *(int *)(lVar1 + 0x10) == 1 ||
      (puVar2 = PTR_s_pause_10226a1d0, *(int *)(lVar1 + 0x10) == 2)))) {
                    /* WARNING: Could not recover jumptable at 0x00010008e6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar2);
    return;
  }
  return;
}


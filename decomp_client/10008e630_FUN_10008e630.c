
void FUN_10008e630(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_operation_10226a1a8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008e65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setCancellable__10226a1c8,(int)*(char *)(lVar1 + 0x38));
    return;
  }
  return;
}


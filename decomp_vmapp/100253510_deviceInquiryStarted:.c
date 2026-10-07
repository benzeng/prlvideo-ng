
/* Function Stack Size: 0x18 bytes */

void BTController::deviceInquiryStarted_(ID param_1,SEL param_2,ID param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + _inquiry_cb);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2,"deviceInquiryStarted");
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + _inquiry_cb);
    }
                    /* WARNING: Could not recover jumptable at 0x000100253578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,0,0,*(undefined8 *)(param_1 + _inquiry_ctx));
    return;
  }
  return;
}



/* Function Stack Size: 0x20 bytes */

void BTController::deviceInquiryComplete_error_aborted_
               (ID param_1,SEL param_2,ID param_3,int param_4,char param_5)

{
  long lVar1;
  
  lVar1 = _inquiry_cb;
  if (*(long *)(param_1 + _inquiry_cb) != 0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2,"deviceInquiryComplete: error %d, aborted %d",param_4,
                    (int)param_5);
    }
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + _inquiry_in_progress) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100253626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + lVar1))
                (2 - (uint)(param_5 == '\0'),0,0,*(undefined8 *)(param_1 + _inquiry_ctx));
      return;
    }
  }
  return;
}


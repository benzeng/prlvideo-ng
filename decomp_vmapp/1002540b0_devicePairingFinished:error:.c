
/* Function Stack Size: 0x1c bytes */

void BTController::devicePairingFinished_error_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + _pairing_cb);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2,"PairingFinished, error %d\n",param_4);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + _pairing_cb);
    }
                    /* WARNING: Could not recover jumptable at 0x00010025411f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(5,*(undefined8 *)(param_1 + _pairing_ctx),param_4);
    return;
  }
  return;
}


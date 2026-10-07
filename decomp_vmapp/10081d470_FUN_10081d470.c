
void FUN_10081d470(undefined8 *param_1)

{
  int *piVar1;
  
  if (DAT_1011c0638 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081d48e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c0638)(param_1);
    return;
  }
  if (DAT_1011c0640 == (code *)0x0) {
    piVar1 = ___error();
    param_1[1] = 0;
    *param_1 = 0;
    *param_1 = piVar1;
  }
  else {
    piVar1 = (int *)(*DAT_1011c0640)();
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[1] = piVar1;
  return;
}


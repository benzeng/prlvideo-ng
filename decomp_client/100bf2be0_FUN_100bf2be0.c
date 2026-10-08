
void FUN_100bf2be0(undefined8 *param_1)

{
  int *piVar1;
  
  if (DAT_102316028 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102316028)(param_1);
    return;
  }
  if (DAT_102316030 == (code *)0x0) {
    piVar1 = ___error();
    param_1[1] = 0;
    *param_1 = 0;
    *param_1 = piVar1;
  }
  else {
    piVar1 = (int *)(*DAT_102316030)();
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[1] = piVar1;
  return;
}


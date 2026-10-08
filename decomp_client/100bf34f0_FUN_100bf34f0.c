
void FUN_100bf34f0(undefined8 param_1)

{
  if (DAT_102316058 != (code *)0x0) {
    (*DAT_102316058)(param_1,0);
  }
  (*(code *)PTR__free_102305388)(param_1);
  if (DAT_102316058 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf352e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102316058)(0,1);
    return;
  }
  return;
}


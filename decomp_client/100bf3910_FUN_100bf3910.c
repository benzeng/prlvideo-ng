
void FUN_100bf3910(undefined8 param_1)

{
  if (DAT_102316058 != (code *)0x0) {
    (*DAT_102316058)(param_1,0);
  }
  (*(code *)PTR__free_102305370)(param_1);
  if (DAT_102316058 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf394e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102316058)(0,1);
    return;
  }
  return;
}


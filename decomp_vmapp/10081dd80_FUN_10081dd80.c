
void FUN_10081dd80(undefined8 param_1)

{
  if (DAT_1011c0668 != (code *)0x0) {
    (*DAT_1011c0668)(param_1,0);
  }
  (*(code *)PTR__free_1011ab5b8)(param_1);
  if (DAT_1011c0668 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081ddbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c0668)(0,1);
    return;
  }
  return;
}


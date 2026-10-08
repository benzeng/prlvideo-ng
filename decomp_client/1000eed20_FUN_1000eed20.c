
void FUN_1000eed20(void)

{
  if (DAT_102311ec8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000eed34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_102311ec8 + 0x20))();
    return;
  }
  return;
}


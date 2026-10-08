
void FUN_100bf3a40(void)

{
  if (DAT_102316060 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf3a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102316060)();
    return;
  }
  return;
}


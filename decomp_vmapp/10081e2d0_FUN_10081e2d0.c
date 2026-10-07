
void FUN_10081e2d0(void)

{
  if (DAT_1011c0670 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081e2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c0670)();
    return;
  }
  return;
}


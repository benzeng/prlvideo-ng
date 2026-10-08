
long FUN_100bf2cb0(void)

{
  pid_t pVar1;
  long lVar2;
  
  if (DAT_102316030 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*DAT_102316030)();
    return lVar2;
  }
  pVar1 = _getpid();
  return (long)pVar1;
}


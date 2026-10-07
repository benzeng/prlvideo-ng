
long FUN_10081d540(void)

{
  pid_t pVar1;
  long lVar2;
  
  if (DAT_1011c0640 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081d551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*DAT_1011c0640)();
    return lVar2;
  }
  pVar1 = _getpid();
  return (long)pVar1;
}



undefined * FUN_100462f50(void)

{
  int iVar1;
  
  if (DAT_1011bbf50 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbf50);
    if (iVar1 != 0) {
      FUN_100462ff0(&DAT_1011bbf08,1);
      ___cxa_atexit(FUN_100462fe0,&DAT_1011bbf08,0x100000000);
      ___cxa_guard_release(&DAT_1011bbf50);
    }
  }
  return &DAT_1011bbf08;
}


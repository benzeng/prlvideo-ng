
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100a205d0(void)

{
  int iVar1;
  
  if (DAT_1023137f0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1023137f0);
    if (iVar1 != 0) {
      _DAT_1023137e8 = PTR_shared_null_1021e15d0;
      ___cxa_atexit(FUN_100a20630,&DAT_1023137e8,0x100000000);
      ___cxa_guard_release(&DAT_1023137f0);
    }
  }
  return &DAT_1023137e8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db3f10(void)

{
  long lVar1;
  
  _DAT_1023191a0 = 0;
  DAT_102319198 = 0;
  _DAT_102319190 = &DAT_102319198;
  ___cxa_atexit(FUN_100db3c60,&DAT_102319190,0x100000000);
  QMutex::QMutex((QMutex *)&DAT_1023191a8,0);
  ___cxa_atexit(PTR__QMutex_1021e14b0,&DAT_1023191a8,0x100000000);
  lVar1 = FUN_100ddd940();
  DAT_102311990 = lVar1 * 10;
  DAT_1023191b0 = FUN_100db3bd0;
  return;
}


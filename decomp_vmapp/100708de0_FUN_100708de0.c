
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100708de0(void)

{
  long lVar1;
  
  _DAT_1011bda90 = 0;
  DAT_1011bda88 = 0;
  _DAT_1011bda80 = &DAT_1011bda88;
  ___cxa_atexit(FUN_100708b30,&DAT_1011bda80,0x100000000);
  QMutex::QMutex((QMutex *)&DAT_1011bda98,0);
  ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011bda98,0x100000000);
  lVar1 = FUN_1007dc360();
  DAT_1011ccb08 = lVar1 * 10;
  DAT_1011bdaa0 = FUN_100708aa0;
  return;
}


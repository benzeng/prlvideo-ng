
void FUN_100795bf0(void)

{
  undefined *puVar1;
  
  QMutex::QMutex((QMutex *)&DAT_1011ccbe0,0);
  ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011ccbe0,0x100000000);
  puVar1 = PTR_shared_null_100ba2180;
  DAT_1011ccbe8 = PTR_shared_null_100ba2180;
  ___cxa_atexit(FUN_1007956f0,&DAT_1011ccbe8,0x100000000);
  DAT_1011ccbf0 = puVar1;
  ___cxa_atexit(FUN_1007956f0,&DAT_1011ccbf0,0x100000000);
  return;
}


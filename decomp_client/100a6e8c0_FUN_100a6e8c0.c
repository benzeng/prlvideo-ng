
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e8c0(void)

{
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)&DAT_1023117e8,0);
  _DAT_1023117f0 = 0;
  _DAT_1023117f4 = 0;
  DAT_1023117f8 = 1;
  register0x00001208 = (int)PTR_shared_null_1021e15d0;
  _DAT_102311800 = PTR_shared_null_1021e15d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  ___cxa_atexit(FUN_100a6df80,&DAT_1023117e8,0x100000000);
  return;
}


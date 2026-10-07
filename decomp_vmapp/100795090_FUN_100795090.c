
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100795090(void)

{
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)&DAT_1011ccbb8,0);
  _DAT_1011ccbc0 = 0;
  _DAT_1011ccbc4 = 0;
  DAT_1011ccbc8 = 1;
  register0x00001208 = (int)PTR_shared_null_100ba2180;
  _DAT_1011ccbd0 = PTR_shared_null_100ba2180;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  ___cxa_atexit(FUN_100794750,&DAT_1011ccbb8,0x100000000);
  return;
}


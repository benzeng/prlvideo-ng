
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059f390(void)

{
  QReadWriteLock *pQVar1;
  
  _DAT_1011bc6a0 = 0;
  _DAT_1011bc698 = 0;
  _DAT_1011bc690 = 0;
  _DAT_1011bc688 = 0;
  _DAT_1011bc680 = 0;
  _DAT_1011bc6a8 = QString::fromAscii_helper(".proc",5);
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc6a8,0x100000000);
  _DAT_1011bc6b0 = QString::fromAscii_helper(".rem",4);
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc6b0,0x100000000);
  DAT_1011bc6b8 = operator_new(8);
  *DAT_1011bc6b8 = PTR_shared_null_100ba20d0;
  pQVar1 = operator_new(8);
  QReadWriteLock::QReadWriteLock(pQVar1,0);
  DAT_1011bc6c0 = pQVar1;
  return;
}


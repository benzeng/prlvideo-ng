
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100541e70(void)

{
  _DAT_1011bc308 = 0;
  _DAT_1011bc300 = 0;
  _DAT_1011bc2f8 = 0;
  _DAT_1011bc2f0 = 0;
  _DAT_1011bc2e8 = 0;
  _DAT_1011bc310 = 0xffffffff;
  QMutex::QMutex((QMutex *)&DAT_1011cc998,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)&DAT_1011cc9a0);
  DAT_1011cc9a8 = 0;
  DAT_1011cc9b0 = 0;
  ___cxa_atexit(FUN_100540d90,&DAT_1011cc998,0x100000000);
  return;
}


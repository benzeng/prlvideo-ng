
void FUN_1000ac080(void)

{
  QMutex::QMutex((QMutex *)&DAT_102310898,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)&DAT_1023108a0);
  DAT_1023108a8 = 0;
  DAT_1023108b0 = 0;
  ___cxa_atexit(FUN_1000aa200,&DAT_102310898,0x100000000);
  return;
}


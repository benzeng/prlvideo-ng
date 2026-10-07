
void FUN_1004c0b60(void)

{
  QMutex::QMutex((QMutex *)&DAT_1011cc7f8,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)&DAT_1011cc800);
  DAT_1011cc808 = 0;
  DAT_1011cc810 = 0;
  ___cxa_atexit(FUN_1004c0860,&DAT_1011cc7f8,0x100000000);
  return;
}


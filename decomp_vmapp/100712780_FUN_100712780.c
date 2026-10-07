
void FUN_100712780(long param_1)

{
  QMutex::tryLock((int)param_1 + 0x10);
  _IOPMAssertionRelease(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


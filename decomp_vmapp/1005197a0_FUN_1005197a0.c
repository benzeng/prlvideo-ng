
void FUN_1005197a0(long param_1)

{
  int *piVar1;
  
  QMutex::lock();
  piVar1 = (int *)(param_1 + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    QWaitCondition::wakeOne();
  }
  QMutex::unlock();
  return;
}


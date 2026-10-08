
void FUN_100055290(long param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    QMutex::lock();
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    QWaitCondition::wakeOne();
  }
  if (param_1 == 0) {
    return;
  }
  QMutex::unlock();
  return;
}


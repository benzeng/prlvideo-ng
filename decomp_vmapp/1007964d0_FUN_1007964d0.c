
void FUN_1007964d0(undefined1 *param_1,int param_2)

{
  QMutex::lock();
  if (param_2 == 5) {
    *param_1 = 1;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
  }
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}



void FUN_1003fc210(undefined8 *param_1)

{
  *param_1 = &PTR_metaObject_100bbfca0;
  QMutex::lock();
  *(undefined1 *)(param_1 + 5) = 1;
  QMutex::unlock();
  QThread::wait((ulong)param_1);
  FUN_1003fbfc0(param_1);
  return;
}


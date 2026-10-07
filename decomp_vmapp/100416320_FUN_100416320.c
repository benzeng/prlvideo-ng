
void FUN_100416320(undefined8 param_1)

{
  FUN_100416360(param_1,0);
  QMutex::lock();
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return;
}


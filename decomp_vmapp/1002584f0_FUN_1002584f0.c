
long FUN_1002584f0(long *param_1)

{
  long *plVar1;
  
  QMutex::lock();
  plVar1 = (long *)*param_1;
  if (plVar1 == param_1) {
    plVar1 = (long *)0x0;
    QWaitCondition::wakeAll();
  }
  QMutex::unlock();
  return (long)plVar1;
}


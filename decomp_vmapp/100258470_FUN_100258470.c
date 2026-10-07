
void FUN_100258470(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  QMutex::lock();
  *(undefined1 *)(param_2 + 2) = 1;
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *param_2 = (long)param_2;
  param_2[1] = (long)param_2;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}


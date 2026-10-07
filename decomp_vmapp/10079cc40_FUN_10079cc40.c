
undefined8 * FUN_10079cc40(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  
  QMutex::lock();
  lVar2 = QThread::currentThread();
  if ((lVar2 == param_2) || (*(int *)(param_2 + 0xa0) == 1)) {
    piVar1 = *(int **)(param_2 + 0x160);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  QMutex::unlock();
  return param_1;
}


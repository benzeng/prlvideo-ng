
undefined8 * FUN_100a77860(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  
  QMutex::lock();
  lVar2 = QThread::currentThread();
  if ((lVar2 == param_2) || (*(int *)(param_2 + 0xa0) == 1)) {
    piVar1 = *(int **)(param_2 + 0xb8);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = PTR_shared_null_1021e1288;
  }
  QMutex::unlock();
  return param_1;
}


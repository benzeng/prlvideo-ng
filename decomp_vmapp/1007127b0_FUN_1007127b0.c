
void * FUN_1007127b0(long param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    QMutex::lock();
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new(0x38);
    FUN_100710c20(pvVar1);
    *(void **)(param_1 + 8) = pvVar1;
  }
  if (param_1 != 0) {
    QMutex::unlock();
  }
  return pvVar1;
}


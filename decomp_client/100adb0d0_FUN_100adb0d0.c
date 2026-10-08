
void * FUN_100adb0d0(void)

{
  void *pvVar1;
  
  QMutex::lock();
  if (DAT_102311858 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100ade8f0(pvVar1);
    DAT_102311858 = pvVar1;
  }
  pvVar1 = DAT_102311858;
  *(int *)((long)DAT_102311858 + 0x10) = *(int *)((long)DAT_102311858 + 0x10) + 1;
  QMutex::unlock();
  return pvVar1;
}


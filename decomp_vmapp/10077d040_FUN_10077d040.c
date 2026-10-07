
void * FUN_10077d040(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_1011bff18;
  if (DAT_1011bff18 == (void *)0x0) {
    QMutex::lock();
    if (DAT_1011bff18 == (void *)0x0) {
      pvVar1 = operator_new(0x18);
      FUN_10077d0f0(pvVar1);
      DAT_1011bff18 = pvVar1;
    }
    pvVar1 = DAT_1011bff18;
    QMutex::unlock();
  }
  return pvVar1;
}


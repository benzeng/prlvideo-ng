
void * FUN_100dcd640(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_102319248;
  if (DAT_102319248 == (void *)0x0) {
    QMutex::lock();
    if (DAT_102319248 == (void *)0x0) {
      pvVar1 = operator_new(0x18);
      FUN_100dcd6f0(pvVar1);
      DAT_102319248 = pvVar1;
    }
    pvVar1 = DAT_102319248;
    QMutex::unlock();
  }
  return pvVar1;
}


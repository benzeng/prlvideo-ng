
void * FUN_100152280(void)

{
  int iVar1;
  void *pvVar2;
  
  if (DAT_1023108c8 == (void *)0x0) {
    if (DAT_102312098 == '\0') {
      iVar1 = ___cxa_guard_acquire(&DAT_102312098);
      if (iVar1 != 0) {
        QMutex::QMutex((QMutex *)&DAT_102312090,0);
        ___cxa_atexit(PTR__QMutex_1021e14b0,&DAT_102312090,0x100000000);
        ___cxa_guard_release(&DAT_102312098);
      }
    }
    QMutex::lock();
    if (DAT_1023108c8 == (void *)0x0) {
      pvVar2 = operator_new(0x30);
      FUN_100151d60(pvVar2,0);
      DAT_1023108c8 = pvVar2;
    }
    QMutex::unlock();
  }
  return DAT_1023108c8;
}


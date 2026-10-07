
undefined8 * FUN_1000f01e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if ((-2 < DAT_1011b7598) && (puVar2 = DAT_1011b75a0, -1 < DAT_1011b7598)) {
    QMutex::lock();
    if (DAT_1011b7598 == 0) {
      DAT_1011b75a0 = operator_new(8);
      *DAT_1011b75a0 = PTR_shared_null_100ba20d8;
      if ((DAT_1011b75b8 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011b75b8), iVar1 != 0)) {
        ___cxa_atexit(FUN_1000f5260,&DAT_1011b75b0,0x100000000);
        ___cxa_guard_release(&DAT_1011b75b8);
      }
      DAT_1011b7598 = -1;
    }
    QMutex::unlock();
    puVar2 = DAT_1011b75a0;
  }
  return puVar2;
}



void FUN_100258730(void)

{
  sigset_t local_20 [2];
  
  local_20[1] = 0xffffffff;
  _sigprocmask(1,local_20 + 1,local_20);
  QMutex::lock();
  if (DAT_1011c37b8 != (long *)0x0) {
    FUN_1008e3890(DAT_1011c37b8[0xf]);
    (**(code **)(*DAT_1011c37b8 + 0x28))();
    (**(code **)(*DAT_1011c37b8 + 0x38))();
    FUN_100257ee0(DAT_1011c37b8);
    if (DAT_1011c37b8 != (long *)0x0) {
      (**(code **)(*DAT_1011c37b8 + 8))();
    }
    DAT_1011c37b8 = (long *)0x0;
  }
  QMutex::unlock();
  _sigprocmask(3,local_20,(sigset_t *)0x0);
  return;
}


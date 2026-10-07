
void FUN_10010d8c0(void)

{
  if (DAT_1011c3660 != (long *)0x0) {
    QThread::exit((int)DAT_1011c3660);
    QThread::wait((ulong)DAT_1011c3660);
    if (DAT_1011c3660 != (long *)0x0) {
      (**(code **)(*DAT_1011c3660 + 0x20))();
    }
    DAT_1011c3660 = (long *)0x0;
  }
  return;
}


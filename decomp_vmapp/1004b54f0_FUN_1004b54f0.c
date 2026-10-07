
void FUN_1004b54f0(undefined1 param_1,long *param_2)

{
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    QReadWriteLock::lockForRead();
    if ((DAT_1011bc000 != 0) && (*param_2 == DAT_1011bc000)) {
      FUN_1004b5590(DAT_1011bc000,param_1,param_2);
    }
    QReadWriteLock::unlock();
    return;
  }
  return;
}


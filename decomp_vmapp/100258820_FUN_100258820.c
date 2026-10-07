
void FUN_100258820(void)

{
  undefined4 in_EAX;
  sigset_t local_28;
  sigset_t local_24;
  
  _local_28 = CONCAT44(0xffffffff,in_EAX);
  _sigprocmask(1,&local_24,&local_28);
  QMutex::lock();
  if (DAT_1011c37b8 != 0) {
    QMutex::lock();
    FUN_1002588f0(DAT_1011c37b8);
    QMutex::unlock();
  }
  QMutex::unlock();
  _sigprocmask(3,&local_28,(sigset_t *)0x0);
  return;
}


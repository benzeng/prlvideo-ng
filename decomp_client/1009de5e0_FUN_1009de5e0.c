
void FUN_1009de5e0(long param_1)

{
  QMutex::lock();
  if (*(long *)(param_1 + 0x10) != 0) {
    _CFRunLoopStop();
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_100df99c0("","ProxyInfo",0,"cancel() for task get-proxy was called");
  QMutex::unlock();
  return;
}


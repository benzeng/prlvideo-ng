
void FUN_1005699e0(long param_1)

{
  char cVar1;
  
  QMutex::lock();
  if (*(long **)(param_1 + 0x11c8) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x11c8) + 0x40))();
    if (cVar1 != '\0') {
      FUN_1008e3970("","vdisk",0,"Operation is in progress, waiting for.");
    }
    (**(code **)(**(long **)(param_1 + 0x11c8) + 0x48))();
  }
  QMutex::unlock();
  return;
}


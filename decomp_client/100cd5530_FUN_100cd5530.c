
void FUN_100cd5530(long param_1)

{
  long lVar1;
  long *plVar2;
  
  QMutex::lock();
  if (*(int *)(*(long *)(param_1 + 0x20) + 0xc) != *(int *)(*(long *)(param_1 + 0x20) + 8)) {
    do {
      plVar2 = (long *)FUN_100cd5fe0((long *)(param_1 + 0x20));
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x60))(plVar2);
      }
      lVar1 = *(long *)(param_1 + 0x20);
    } while (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8));
  }
  QMutex::unlock();
  return;
}


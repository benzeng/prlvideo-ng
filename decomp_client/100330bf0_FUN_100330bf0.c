
undefined1 FUN_100330bf0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    QMutex::lock();
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
    if (plVar1 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0xa0))();
    }
    QMutex::unlock();
  }
  return uVar2;
}


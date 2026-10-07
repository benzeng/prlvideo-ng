
void FUN_1004edc50(QReadWriteLock *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))();
    plVar1 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  FUN_1004ef770(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  QReadWriteLock::~QReadWriteLock(param_1);
  return;
}


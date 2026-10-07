
void FUN_10040bd80(long param_1,char param_2,undefined1 param_3)

{
  long *plVar1;
  
  FUN_1006d5830(param_1 + 0x10);
  QMutex::lock();
  plVar1 = (long *)(param_1 + 0x30);
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x41) = param_3;
    plVar1 = (long *)(param_1 + 0x38);
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = param_3;
  }
  if (*plVar1 != 0) {
    FUN_10040d390();
  }
  QMutex::unlock();
  return;
}


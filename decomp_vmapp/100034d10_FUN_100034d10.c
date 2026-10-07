
undefined8 FUN_100034d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = 3;
  if (*(long *)(param_1 + 0xa0) == 0) {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      *(undefined8 *)(param_1 + 0xa0) = param_2;
      uVar1 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0xa8) = 0;
      uVar1 = 1;
    }
  }
  QMutex::unlock();
  return uVar1;
}


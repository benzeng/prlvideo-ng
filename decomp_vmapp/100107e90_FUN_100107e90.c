
undefined8 FUN_100107e90(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  plVar1 = (long *)FUN_100107f10(param_1,param_2);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = 0;
    if (*plVar1 != 0) {
      uVar2 = *(undefined8 *)(*plVar1 + 0x10);
    }
  }
  QMutex::unlock();
  return uVar2;
}


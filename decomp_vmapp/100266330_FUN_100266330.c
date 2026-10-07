
void FUN_100266330(long param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x98))();
    if (cVar1 != '\0') {
      QMutex::lock();
      FUN_10026ad40(param_2,*(undefined8 *)(param_1 + 0x110),0,0,0,0);
      QMutex::unlock();
      return;
    }
  }
  return;
}


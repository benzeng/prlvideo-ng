
undefined1 FUN_1003312f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3);
  }
  QMutex::unlock();
  return uVar2;
}


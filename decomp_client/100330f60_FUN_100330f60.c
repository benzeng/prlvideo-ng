
undefined1 FUN_100330f60(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 200))(plVar1,param_2);
  }
  QMutex::unlock();
  return uVar2;
}


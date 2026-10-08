
undefined8 FUN_100331080(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  uVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1,param_2);
  QMutex::unlock();
  return uVar2;
}


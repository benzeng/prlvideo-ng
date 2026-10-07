
void FUN_1002a0a20(long param_1,undefined8 param_2)

{
  QMutex::lock();
  (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))();
  (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))();
  FUN_1002a04a0(param_1,param_2,0);
  QMutex::unlock();
  return;
}


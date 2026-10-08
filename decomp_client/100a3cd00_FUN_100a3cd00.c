
void FUN_100a3cd00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    QMutex::lock();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_3,param_4);
    QMutex::unlock();
    return;
  }
  return;
}


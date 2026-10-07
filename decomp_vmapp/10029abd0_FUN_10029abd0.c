
void FUN_10029abd0(long param_1,long param_2)

{
  QMutex::lock();
  if (*(long *)(param_1 + 0x118) == param_2) {
    FUN_10029a070(param_1);
    (**(code **)(**(long **)(param_1 + 0x118) + 0x20))(*(long **)(param_1 + 0x118),0);
    *(undefined8 *)(param_1 + 0x118) = 0;
    FUN_10029da40(param_1 + 0x128);
  }
  QMutex::unlock();
  return;
}


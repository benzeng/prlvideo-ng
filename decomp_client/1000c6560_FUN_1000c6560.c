
void FUN_1000c6560(long *param_1)

{
  (**(code **)(*param_1 + 0x70))();
  QMutex::lock();
  FUN_1000e5430(param_1 + 0xb);
  FUN_1000e4950(param_1 + 0xd);
  QMutex::unlock();
  return;
}


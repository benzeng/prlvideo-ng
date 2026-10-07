
void FUN_1000d7990(long *param_1,int param_2)

{
  QMutex::lock();
  *(int *)((long)param_1 + 0x3c) = param_2;
  FUN_1004307f0(*(undefined8 *)(*param_1 + 0xf0),param_2 == 2);
  QMutex::unlock();
  return;
}


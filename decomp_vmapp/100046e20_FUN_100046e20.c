
void FUN_100046e20(long param_1,undefined8 param_2,int param_3)

{
  undefined1 local_30 [8];
  
  QMutex::lock();
  if (param_3 == 2) {
    FUN_1000230e0(param_1 + 0x70,param_2);
  }
  else if (param_3 == 1) {
    FUN_100022e50(param_1 + 0x70,param_2,local_30);
  }
  QMutex::unlock();
  return;
}



void FUN_1004348e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_38 [8];
  
  QMutex::lock();
  FUN_100436920(local_38,param_1 + 0x20);
  QMutex::unlock();
  FUN_1004345f0(param_1,local_38,param_2,param_3);
  FUN_100037320(local_38);
  return;
}


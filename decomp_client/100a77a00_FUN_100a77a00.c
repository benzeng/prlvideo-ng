
undefined8 FUN_100a77a00(long param_1,void *param_2)

{
  QMutex::lock();
  _memcpy(param_2,(void *)(param_1 + 0xcc),0x48);
  QMutex::unlock();
  return 1;
}


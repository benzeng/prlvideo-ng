
undefined8 FUN_1002a0990(long param_1)

{
  QMutex::lock();
  FUN_100299500(*(undefined8 *)(param_1 + 0x30));
  FUN_100299500(*(undefined8 *)(param_1 + 0x38));
  FUN_10025b310(param_1 + 8,0);
  QMutex::unlock();
  return 0;
}


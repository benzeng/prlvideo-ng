
void FUN_1004b2ea0(long param_1,char param_2)

{
  char local_28 [8];
  undefined8 local_20;
  
  local_28[0] = (param_2 == '\0') + '\x03';
  local_20 = 0;
  QMutex::lock();
  FUN_1004b3810(param_1 + 0x18,local_28);
  QMutex::unlock();
  QSemaphore::release((int)param_1 + 0x20);
  return;
}


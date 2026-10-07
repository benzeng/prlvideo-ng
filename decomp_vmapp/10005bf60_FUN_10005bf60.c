
void FUN_10005bf60(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *local_30;
  
  local_30 = operator_new(0x10);
  *local_30 = param_2;
  local_30[1] = param_3;
  QMutex::lock();
  FUN_10005f3f0(param_1 + 0x18,&local_30);
  QMutex::unlock();
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    return;
  }
  QThread::start(param_1,7);
  return;
}


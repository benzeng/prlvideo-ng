
void FUN_1002998e0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  
  QMutex::lock();
  cVar1 = FUN_100299bb0(param_1,param_2);
  if (cVar1 != '\0') {
    QMutex::unlock();
    return;
  }
  QMutex::unlock();
  FUN_100299500(param_1);
  return;
}


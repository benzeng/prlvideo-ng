
void FUN_1005ad450(undefined8 param_1)

{
  char cVar1;
  
  QMutex::lock();
  do {
    cVar1 = FUN_1005ad200(param_1);
  } while (cVar1 != '\0');
  QMutex::unlock();
  return;
}


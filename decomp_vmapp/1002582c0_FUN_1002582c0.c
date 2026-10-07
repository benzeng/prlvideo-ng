
bool FUN_1002582c0(long param_1)

{
  long lVar1;
  
  lVar1 = QThread::currentThread();
  return lVar1 == param_1 + 8;
}


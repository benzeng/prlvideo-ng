
undefined8 FUN_1004162d0(ulong param_1)

{
  char cVar1;
  
  QThread::exit((int)param_1);
  cVar1 = QThread::wait(param_1);
  if (cVar1 == '\0') {
    QThread::terminate();
    QThread::wait(param_1);
  }
  return 1;
}


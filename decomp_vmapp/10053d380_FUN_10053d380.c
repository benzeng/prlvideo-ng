
byte FUN_10053d380(void)

{
  byte bVar1;
  
  bVar1 = QThread::isRunning();
  return bVar1 ^ 1;
}


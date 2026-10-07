
byte FUN_1003fc2c0(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = QThread::isRunning();
  bVar2 = 1;
  if (cVar1 == '\0') {
    bVar2 = QThread::isFinished();
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


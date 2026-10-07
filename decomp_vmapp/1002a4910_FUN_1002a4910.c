
void FUN_1002a4910(long param_1)

{
  char cVar1;
  long lVar2;
  
  QMutex::lock();
  cVar1 = QThread::isRunning();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    lVar2 = 0x4d;
    do {
      *(undefined1 *)(param_1 + -0x24 + lVar2) = 0;
      *(undefined1 *)(param_1 + -0x18 + lVar2) = 0;
      *(undefined1 *)(param_1 + -0x25 + lVar2) = 0;
      *(undefined1 *)(param_1 + -0x19 + lVar2) = 0;
      *(undefined1 *)(param_1 + -0xc + lVar2) = 0;
      *(undefined1 *)(param_1 + lVar2) = 0;
      *(undefined1 *)(param_1 + -0xd + lVar2) = 0;
      *(undefined1 *)(param_1 + -1 + lVar2) = 0;
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != 0xc4d);
    QThread::start(param_1,2);
  }
  QMutex::unlock();
  return;
}



void FUN_1002f8b30(ulong param_1)

{
  char cVar1;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0xd4) = 0;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  cVar1 = QThread::wait(param_1);
  if (cVar1 == '\0') {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"CCID stuck");
    }
    QThread::terminate();
    QThread::wait(param_1);
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x50));
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"req.pkt != NULL");
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"state == %u");
    return;
  }
  return;
}


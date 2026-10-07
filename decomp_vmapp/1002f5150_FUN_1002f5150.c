
void FUN_1002f5150(QThread *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bb60d0;
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRunLoopStop(*(undefined8 *)(param_1 + 0x18));
    cVar1 = QThread::wait((ulong)param_1);
    if (cVar1 == '\0') {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,
                      "[%s] Can\'t stop <CUsbIoCompletionThread> thread -> terminate & wait infinite"
                      ,*(long *)(param_1 + 0x10) + 0x838);
      }
      QThread::terminate();
      QThread::wait((ulong)param_1);
    }
  }
  QThread::~QThread(param_1);
  return;
}


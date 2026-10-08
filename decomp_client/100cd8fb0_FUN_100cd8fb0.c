
bool FUN_100cd8fb0(ulong param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
    QMutex::lock();
    QThread::start(param_1,7);
    QWaitCondition::wait((QMutex *)(param_1 + 0x18),param_1 + 0x20);
    QMutex::unlock();
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_100df99c0("","hid",0,"[CHIDThread] HID thread can\'t start");
      QThread::wait(param_1);
    }
    else {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    bVar1 = *(char *)(param_1 + 0x14) != '\0';
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    bVar1 = true;
  }
  return bVar1;
}


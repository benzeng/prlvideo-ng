
void FUN_10046e1d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  cVar1 = QThread::wait(param_1 + 0x20U);
  uVar2 = QThread::currentThreadId();
  if (cVar1 == '\0') {
    pcVar3 = "writeUnsavedData, flushThread run, CurThreadId = %llu";
  }
  else {
    pcVar3 = "writeUnsavedData, flushThread fin, CurThreadId = %llu";
  }
  FUN_1008e3970("TIS","TISHost",0,pcVar3,uVar2);
  FUN_100472610(param_1);
  FUN_1008e3970("TIS","TISHost",0,"writeUnsavedData, flush emited");
  FUN_100472690(param_1);
  FUN_1008e3970("TIS","TISHost",0,"writeUnsavedData, quitWorkThread emited");
  QThread::wait(param_1 + 0x20U);
  return;
}


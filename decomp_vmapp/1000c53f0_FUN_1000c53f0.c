
void FUN_1000c53f0(ulong param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x158) = 1;
    QThread::wait(param_1);
    *(undefined4 *)(param_1 + 0x158) = 0;
    return;
  }
  FUN_1008e3970("","vm",0,"The VM profiler isn\'t running, rejecting the stop request.");
  return;
}


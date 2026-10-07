
void FUN_100767420(ulong param_1)

{
  char cVar1;
  int iVar2;
  
  DAT_1011ccc18 = 0;
  if (*(char *)(param_1 + 0x50) != '\0') {
    cVar1 = QThread::isRunning();
    if (cVar1 != '\0') {
      iVar2 = FUN_100763740(param_1);
      if (iVar2 == 0) {
        QThread::wait(param_1);
      }
      else {
        FUN_1008e3970("","etrace",0,"Failed to properly stop eTrace thread...");
      }
    }
  }
  FUN_100762720(param_1);
  return;
}


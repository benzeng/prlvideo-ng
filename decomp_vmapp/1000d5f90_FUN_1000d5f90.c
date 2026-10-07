
undefined1 FUN_1000d5f90(ulong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = QThread::isRunning();
  uVar2 = 1;
  if (cVar1 != '\0') {
    FUN_1008e3970("","vm",0,"Wait for pages to copy...");
    QThread::wait(param_1);
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar2 = 0;
      FUN_1008e3970("","vm",0,"Failed to copy pages (%u)");
    }
  }
  return uVar2;
}


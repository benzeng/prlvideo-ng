
undefined8 FUN_100cd9050(ulong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x15) = 1;
      cVar1 = QThread::wait(param_1);
      if (cVar1 == '\0') {
        QThread::terminate();
        QThread::wait(param_1);
      }
    }
  }
  return 1;
}



undefined8 FUN_1005a7b90(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*param_2 != 0) {
    uVar2 = *(undefined8 *)(*param_2 + 0x10);
  }
  QThread::start(uVar2,7);
  cVar1 = QThread::isRunning();
  uVar2 = 0x80000016;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}


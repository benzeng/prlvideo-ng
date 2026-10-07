
void FUN_1004307f0(long param_1,char param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = QThread::currentThread();
  if (lVar1 != param_1 + 0x28) {
    FUN_100431370(param_1,param_2);
    return;
  }
  if (param_2 == '\0') {
    QObject::killTimer((int)param_1);
    *(undefined4 *)(param_1 + 0x4300) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x4300) == -1) {
    *(undefined8 *)(param_1 + 0x4304) = 0xffffffffffffffff;
    uVar2 = QObject::startTimer(param_1,0x14,1);
    *(undefined4 *)(param_1 + 0x4300) = uVar2;
  }
  return;
}


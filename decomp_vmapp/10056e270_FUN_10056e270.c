
void FUN_10056e270(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x14) = param_2;
  if (-1 < param_2) {
    *(undefined8 *)(param_1 + 0x31) = param_3[3];
    *(undefined8 *)(param_1 + 0x29) = param_3[2];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x21) = param_3[1];
    *(undefined8 *)(param_1 + 0x19) = uVar1;
  }
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return;
}


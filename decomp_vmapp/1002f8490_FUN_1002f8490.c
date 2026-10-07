
undefined8 FUN_1002f8490(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long local_30;
  
  local_30 = param_2;
  QMutex::lock();
  if ((*(byte *)(param_1 + 0xb0) & 2) == 0) {
    FUN_1002e94c0(param_1 + 0x40,&local_30);
    uVar2 = 1;
    if (*(int *)(param_1 + 0x5c) == 1) {
      QWaitCondition::wakeOne();
    }
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (*(uint *)(param_2 + 0x43c) != 0) {
      *(undefined1 *)(param_2 + 0x4d8) = 0x50;
      uVar1 = 1;
      if (1 < *(uint *)(param_2 + 0x43c)) {
        *(undefined1 *)(param_2 + 0x4d9) = *(undefined1 *)(param_1 + 0xb0);
        uVar1 = 2;
      }
    }
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
    *(undefined4 *)(param_2 + 0x454) = uVar1;
    *(undefined4 *)(param_2 + 0x468) = 0;
  }
  QMutex::unlock();
  return uVar2;
}



void FUN_1000f89d0(long param_1)

{
  uint uVar1;
  
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = 0;
    do {
      FUN_1000ae320(*(undefined8 *)(param_1 + 0x50),uVar1,5);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x5c) = 3;
  QTimer::start((int)param_1 + 0x28);
  QMutex::unlock();
  return;
}


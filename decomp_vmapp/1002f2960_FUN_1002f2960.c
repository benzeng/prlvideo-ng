
void FUN_1002f2960(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  FUN_1002f2b90(param_2,*(undefined8 *)(param_1 + 8),uVar1);
  QMutex::unlock();
  return;
}


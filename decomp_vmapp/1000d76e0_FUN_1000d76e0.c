
void FUN_1000d76e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  QMutex::lock();
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x10), uVar1 != 0xffffffffffffffff)) {
    uVar2 = uVar1;
    if (10 < uVar1 >> 0x1c) {
      uVar2 = 0xffffffffffffffff;
      if (0xffffffff < uVar1) {
        uVar2 = uVar1 - 0x50000000;
      }
    }
    FUN_10008c640(DAT_1011c3688,uVar2,8,0,0,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  QMutex::unlock();
  return;
}


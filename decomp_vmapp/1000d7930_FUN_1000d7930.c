
bool FUN_1000d7930(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    *param_2 = (int)uVar2;
    param_2[1] = (int)((ulong)uVar2 >> 0x20);
  }
  QMutex::unlock();
  return puVar1 != (undefined8 *)0x0;
}



undefined1 FUN_1004b71d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_1004bd2a0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  QMutex::unlock();
  return uVar1;
}



undefined1 FUN_1004b6cb0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = FUN_100528ca0(*(undefined8 *)(param_1 + 0x10),param_2);
  QMutex::unlock();
  return uVar1;
}


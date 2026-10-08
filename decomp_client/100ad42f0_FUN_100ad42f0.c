
undefined1  [16] FUN_100ad42f0(long param_1)

{
  undefined1 auVar1 [16];
  
  QMutex::lock();
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x9a0);
  QMutex::unlock();
  return auVar1;
}


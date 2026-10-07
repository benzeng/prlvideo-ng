
undefined4 FUN_10056b0a0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = param_1 + 0x233;
  if (((ulong)plVar2 & 1) == 0) {
    QReadWriteLock::lockForRead();
    plVar2 = (long *)((ulong)plVar2 | 1);
  }
  uVar1 = (**(code **)(*param_1 + 0x400))(param_1,0,param_2);
  if (((ulong)plVar2 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar1;
}


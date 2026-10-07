
undefined8 FUN_100277270(long param_1)

{
  undefined8 uVar1;
  
  QMutex::lock();
  FUN_10025b310(param_1 + 0x68,0);
  *(undefined2 *)(param_1 + 0x1c2) = 0;
  uVar1 = 0x80000009;
  if (*(char *)(param_1 + 0x168) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 8) = 1;
    uVar1 = 0;
    FUN_1002effe0(*(undefined8 *)(param_1 + 0x178));
  }
  QMutex::unlock();
  return uVar1;
}


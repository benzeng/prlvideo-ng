
byte FUN_100272b10(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  
  QMutex::lock();
  QMutex::lock();
  iVar1 = CVmDevice::getConnected();
  QMutex::unlock();
  if (*(char *)(param_1 + 0x168) == '\0') {
    param_2 = 0;
  }
  else {
    param_2 = iVar1 == 1 & param_2;
  }
  bVar2 = 1;
  if ((DAT_101115c70 != 0) && (param_2 != 0)) {
    param_2 = FUN_1002f0cd0(param_1);
    bVar2 = param_2;
  }
  *(uint *)(*(long *)(param_1 + 0x160) + 8) = (uint)(~param_2 & 1);
  FUN_1002effe0(*(undefined8 *)(param_1 + 0x178));
  QMutex::unlock();
  return bVar2;
}


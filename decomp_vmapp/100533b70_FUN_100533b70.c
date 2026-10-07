
long FUN_100533b70(long *param_1)

{
  long lVar1;
  int iVar2;
  long local_30;
  long local_28;
  byte local_20;
  
  QMutex::lock();
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    iVar2 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x58))
                      (*(long **)(*param_1 + 0x1950),&local_30);
    if (-1 < iVar2) {
      param_1[3] = local_28 << 0xc;
      param_1[4] = local_30 << 0xc;
      *(byte *)(param_1 + 2) = local_20 & 1;
      *(byte *)((long)param_1 + 0x12) = local_20 >> 1 & 1;
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  lVar1 = param_1[3];
  QMutex::unlock();
  return lVar1;
}


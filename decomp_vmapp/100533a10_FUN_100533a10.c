
undefined1 FUN_100533a10(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  long local_38;
  long local_30;
  byte local_28;
  
  QMutex::lock();
  if ((*(char *)((long)param_1 + 0x11) == '\0') ||
     (uVar2 = 1, (ulong)param_1[3] < (ulong)param_1[4])) {
    iVar1 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x58))
                      (*(long **)(*param_1 + 0x1950),&local_38);
    if (-1 < iVar1) {
      param_1[3] = local_30 << 0xc;
      param_1[4] = local_38 << 0xc;
      *(byte *)(param_1 + 2) = local_28 & 1;
      *(byte *)((long)param_1 + 0x12) = local_28 >> 1 & 1;
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
    uVar2 = 0;
  }
  QMutex::unlock();
  return uVar2;
}


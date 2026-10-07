
bool FUN_100533970(long *param_1,ulong param_2)

{
  int iVar1;
  ulong local_38;
  long lStack_30;
  undefined4 local_28;
  
  QMutex::lock();
  param_1[4] = param_2;
  lStack_30 = 0;
  local_38 = param_2 >> 0xc;
  local_28 = 0;
  iVar1 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x60))
                    (*(long **)(*param_1 + 0x1950),&local_38);
  if (-1 < iVar1) {
    *(byte *)(param_1 + 2) = (byte)local_28 & 1;
    *(byte *)((long)param_1 + 0x12) = (byte)local_28 >> 1 & 1;
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    param_1[3] = lStack_30 << 0xc;
  }
  QMutex::unlock();
  return -1 < iVar1;
}



void FUN_1005338b0(long *param_1,char param_2)

{
  ulong uVar1;
  int iVar2;
  ulong local_38;
  long lStack_30;
  undefined4 local_28;
  
  if (param_2 != '\0') {
    uVar1 = param_1[4];
    QMutex::lock();
    param_1[4] = uVar1;
    lStack_30 = 0;
    local_38 = uVar1 >> 0xc;
    local_28 = 0;
    iVar2 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x60))
                      (*(long **)(*param_1 + 0x1950),&local_38);
    if (-1 < iVar2) {
      *(byte *)(param_1 + 2) = (byte)local_28 & 1;
      *(byte *)((long)param_1 + 0x12) = (byte)local_28 >> 1 & 1;
      *(undefined1 *)((long)param_1 + 0x11) = 1;
      param_1[3] = lStack_30 << 0xc;
    }
    QMutex::unlock();
    return;
  }
  QMutex::lock();
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  param_1[3] = 0;
  QMutex::unlock();
  return;
}


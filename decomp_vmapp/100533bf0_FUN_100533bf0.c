
undefined1 FUN_100533bf0(long *param_1,ulong param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  long local_60;
  long local_58;
  byte local_50;
  ulong local_48;
  long lStack_40;
  int local_38;
  
  QMutex::lock();
  iVar2 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x58))
                    (*(long **)(*param_1 + 0x1950),&local_60);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    param_1[3] = local_58 << 0xc;
    param_1[4] = local_60 << 0xc;
    *(byte *)(param_1 + 2) = local_50 & 1;
    bVar1 = local_50 >> 1 & 1;
    *(byte *)((long)param_1 + 0x12) = bVar1;
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    if (((local_50 & 1) == 0) && (param_3 != '\0')) {
      uVar3 = 0;
    }
    else {
      param_1[4] = param_2;
      lStack_40 = 0;
      local_48 = param_2 >> 0xc;
      local_38 = (uint)bVar1 * 2;
      iVar2 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x60))
                        (*(long **)(*param_1 + 0x1950),&local_48);
      if (iVar2 < 0) {
        uVar3 = 0;
      }
      else {
        *(byte *)(param_1 + 2) = (byte)local_38 & 1;
        *(byte *)((long)param_1 + 0x12) = (byte)local_38 >> 1 & 1;
        *(undefined1 *)((long)param_1 + 0x11) = 1;
        param_1[3] = lStack_40 << 0xc;
        uVar3 = 1;
      }
    }
  }
  QMutex::unlock();
  return uVar3;
}


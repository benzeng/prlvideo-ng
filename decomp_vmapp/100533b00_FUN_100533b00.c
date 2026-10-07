
undefined8 FUN_100533b00(long *param_1,ulong param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_28;
  long lStack_20;
  int local_18;
  
  param_1[4] = param_2;
  lStack_20 = 0;
  local_28 = param_2 >> 0xc;
  local_18 = (uint)param_3 * 2;
  iVar1 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x60))
                    (*(long **)(*param_1 + 0x1950),&local_28);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    *(byte *)(param_1 + 2) = (byte)local_18 & 1;
    *(byte *)((long)param_1 + 0x12) = (byte)local_18 >> 1 & 1;
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    param_1[3] = lStack_20 << 0xc;
    uVar2 = CONCAT71((int7)((ulong)(lStack_20 << 0xc) >> 8),1);
  }
  return uVar2;
}


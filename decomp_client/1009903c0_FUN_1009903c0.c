
void FUN_1009903c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((uint)*(byte *)(param_1 + 0x50) == ((uint)param_3 & 0xff)) {
    uVar1 = param_3 & 0xffffffff | (param_3 >> 0x20) << 0x20;
    *(ulong *)(param_1 + 0x50) = uVar1;
    if (*(int *)(param_1 + 0x54) == (int)(param_3 >> 0x20)) {
      return;
    }
  }
  else {
    uVar1 = param_3 & 0xffffffff | (param_3 >> 0x20) << 0x20;
    *(ulong *)(param_1 + 0x50) = uVar1;
  }
  FUN_1009be4e0(param_1,uVar1);
  return;
}


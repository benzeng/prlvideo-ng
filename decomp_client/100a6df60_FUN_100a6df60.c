
uint FUN_100a6df60(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(byte *)(param_1 + 8) < 0x15) {
    uVar1 = (uint)*(byte *)(param_1 + 8) << 4 | 9;
  }
  return uVar1;
}


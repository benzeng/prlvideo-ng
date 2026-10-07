
uint FUN_100380dc0(long param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_1 + 0x78) >> (param_2 & 0x1f) != 0) {
    uVar1 = *(uint *)(param_1 + 0x78) >> (param_2 & 0x1f);
  }
  return uVar1;
}


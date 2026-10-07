
uint FUN_100380de0(long param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_1 + 0x7c) >> (param_2 & 0x1f) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c) >> (param_2 & 0x1f);
  }
  return uVar1;
}


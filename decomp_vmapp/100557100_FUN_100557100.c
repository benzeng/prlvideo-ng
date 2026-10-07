
undefined4 FUN_100557100(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x78) + (ulong)(param_2 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
}


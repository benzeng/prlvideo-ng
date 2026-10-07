
undefined4 FUN_1004acee0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x88) & 0xfffffffe;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 2);
}


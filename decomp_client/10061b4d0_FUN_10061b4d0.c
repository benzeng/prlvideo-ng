
undefined4 FUN_10061b4d0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & param_2) == param_2) {
    return CONCAT31((int3)(uVar1 >> 8),param_2 != 0 || uVar1 == param_2);
  }
  return 0;
}


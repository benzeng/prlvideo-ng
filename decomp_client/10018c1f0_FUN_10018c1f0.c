
undefined4 FUN_10018c1f0(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xdc);
  if ((uVar1 & param_2) == param_2) {
    uVar2 = CONCAT31((int3)(uVar1 >> 8),param_2 != 0 || uVar1 == param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


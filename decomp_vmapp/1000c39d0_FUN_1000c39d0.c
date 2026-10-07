
undefined4 FUN_1000c39d0(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  if (param_2 < 3) {
    *(uint *)(param_1 + 8) = param_2;
  }
  return uVar1;
}


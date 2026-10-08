
undefined8 FUN_100be5270(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x130) == 0) ||
     ((uVar1 = 0, *(long *)(param_1 + 0x1e0) == 0 &&
      (*(long *)(*(long *)(param_1 + 0x130) + 0x118) == 0)))) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


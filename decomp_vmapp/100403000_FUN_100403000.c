
undefined8 FUN_100403000(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_100402eb0(param_1,0,0);
    return uVar1;
  }
  return 0xffffffff;
}


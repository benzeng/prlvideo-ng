
undefined8 FUN_100343e20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = FUN_100325fd0(*(long *)(param_1 + 0x18),param_2,0xffffffffffffffff);
    }
  }
  return uVar1;
}


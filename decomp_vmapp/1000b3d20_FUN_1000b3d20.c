
undefined8 FUN_1000b3d20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x1a10) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x710);
  }
  return uVar1;
}


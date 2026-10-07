
undefined8 FUN_1000f9e50(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xf0000002;
  if (((*(uint *)(param_2 + 8) & 0xfffffffd) == 0x8700) &&
     (uVar1 = 0xf0000000, *(long *)(param_1 + 0x10) == param_2)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return uVar1;
}


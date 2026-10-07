
undefined8 FUN_100529ca0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  return uVar1;
}


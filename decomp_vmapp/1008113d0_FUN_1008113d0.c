
undefined8 FUN_1008113d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    uVar1 = *(undefined8 *)(**(long **)(param_1 + 0x100) + 8);
  }
  return uVar1;
}


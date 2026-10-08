
undefined8 FUN_100a3c6d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  }
  return uVar1;
}


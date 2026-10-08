
undefined8 FUN_100b0d790(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
  }
  return uVar1;
}


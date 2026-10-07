
undefined8 FUN_100685090(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80021021;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x90))();
    uVar1 = 0;
  }
  return uVar1;
}


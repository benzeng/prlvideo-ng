
undefined8 FUN_100c929c0(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    uVar1 = *(undefined8 *)(*(long *)(*param_1 + 0x30) + 8);
  }
  return uVar1;
}


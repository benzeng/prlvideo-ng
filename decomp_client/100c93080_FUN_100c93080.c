
undefined8 FUN_100c93080(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_100c7b280(*(undefined8 *)(*param_1 + 0x28));
    return uVar1;
  }
  return 0;
}


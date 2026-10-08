
undefined8 FUN_100d7ede0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    uVar1 = FUN_100d7ee00();
    return uVar1;
  }
  return 0x80000003;
}


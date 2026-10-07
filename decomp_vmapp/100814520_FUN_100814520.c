
undefined8 FUN_100814520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xd0) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}



undefined8 FUN_1008d9a40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


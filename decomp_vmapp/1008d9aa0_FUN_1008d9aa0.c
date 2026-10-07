
undefined8 FUN_1008d9aa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


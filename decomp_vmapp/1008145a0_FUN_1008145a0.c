
undefined8 FUN_1008145a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_2;
  }
  return uVar1;
}



undefined8 FUN_10061b800(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0xc9) = param_2[1];
    *(undefined8 *)(param_1 + 0xc1) = uVar1;
  }
  *(bool *)(param_1 + 0xd1) = param_2 != (undefined8 *)0x0;
  return 0;
}


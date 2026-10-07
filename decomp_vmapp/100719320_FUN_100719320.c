
undefined8 FUN_100719320(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1007230c0();
  }
  param_1[1] = param_1;
  *param_1 = param_1;
  return 0;
}


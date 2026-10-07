
undefined8 * FUN_1004dd510(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_100bc3758;
  FUN_10005a020(puVar1 + 1,param_2);
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_100bc36e8;
  *param_1 = puVar1;
  return param_1;
}


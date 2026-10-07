
undefined8 * FUN_1004dd650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_100bc37f8;
  FUN_1004df970(puVar1 + 1,param_2);
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_100bc3788;
  *param_1 = puVar1;
  return param_1;
}


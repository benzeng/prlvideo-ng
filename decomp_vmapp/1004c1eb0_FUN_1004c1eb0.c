
undefined8 * FUN_1004c1eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x38);
  FUN_1004c0650(puVar1,param_1);
  *puVar1 = &PTR_FUN_100bc2e28;
  puVar1[6] = 0;
  puVar1[5] = 0;
  FUN_1004c0790(puVar1,0x8410,0x8411);
  FUN_1004c1000();
  return puVar1;
}


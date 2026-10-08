
undefined8 * FUN_100cd00c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar1 = operator_new(0x70);
    FUN_100cd0150(puVar1,param_1,1);
    *puVar1 = &PTR_FUN_102259a88;
  }
  return puVar1;
}



undefined4 FUN_10020fd64(long param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_10020c916(param_1);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaValidatorPushElem","calling xmlSchemaGetFreshElemInfo()");
    local_14 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
    local_14 = 0;
  }
  return local_14;
}


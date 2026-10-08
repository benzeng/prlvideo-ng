
undefined4 FUN_10094368c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_10094023e(param_1);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_10091c652(param_1,"xmlSchemaValidatorPushElem","calling xmlSchemaGetFreshElemInfo()");
    local_14 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
    local_14 = 0;
  }
  return local_14;
}


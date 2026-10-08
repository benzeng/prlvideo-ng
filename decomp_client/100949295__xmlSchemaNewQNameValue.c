
long _xmlSchemaNewQNameValue(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  
  local_30 = FUN_100947ed5(0x15);
  if (local_30 == 0) {
    local_30 = 0;
  }
  else {
    *(undefined8 *)(local_30 + 0x10) = param_2;
    *(undefined8 *)(local_30 + 0x18) = param_1;
  }
  return local_30;
}


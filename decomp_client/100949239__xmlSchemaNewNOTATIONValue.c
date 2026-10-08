
long _xmlSchemaNewNOTATIONValue(undefined8 param_1,long param_2)

{
  undefined8 local_30;
  
  local_30 = FUN_100947ed5(0x1c);
  if (local_30 == 0) {
    local_30 = 0;
  }
  else {
    *(undefined8 *)(local_30 + 0x10) = param_1;
    if (param_2 != 0) {
      *(long *)(local_30 + 0x18) = param_2;
    }
  }
  return local_30;
}


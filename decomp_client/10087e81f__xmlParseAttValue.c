
undefined8 _xmlParseAttValue(long param_1)

{
  undefined8 local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_10088b124(param_1,0,0,0);
  }
  return local_18;
}


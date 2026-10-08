
undefined4 _xmlXIncludeSetFlags(long param_1,undefined4 param_2)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = param_2;
    local_18 = 0;
  }
  return local_18;
}


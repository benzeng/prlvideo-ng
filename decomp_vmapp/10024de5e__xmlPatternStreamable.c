
undefined4 _xmlPatternStreamable(long param_1)

{
  undefined4 local_14;
  long local_10;
  
  local_10 = param_1;
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    for (; local_10 != 0; local_10 = *(long *)(local_10 + 0x10)) {
      if (*(long *)(local_10 + 0x38) == 0) {
        return 0;
      }
    }
    local_14 = 1;
  }
  return local_14;
}


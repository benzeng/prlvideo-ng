
undefined4 _xmlPatternFromRoot(long param_1)

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
        return 0xffffffff;
      }
      if ((*(uint *)(local_10 + 0x20) >> 8 & 1) != 0) {
        return 1;
      }
    }
    local_14 = 0;
  }
  return local_14;
}


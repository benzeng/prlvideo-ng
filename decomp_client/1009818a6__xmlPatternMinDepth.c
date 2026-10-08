
int _xmlPatternMinDepth(long param_1)

{
  int local_24;
  long local_20;
  int local_c;
  
  local_c = 0xbc614e;
  local_20 = param_1;
  if (param_1 == 0) {
    local_24 = -1;
  }
  else {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      if (*(long *)(local_20 + 0x38) == 0) {
        return -1;
      }
      if (*(int *)(*(long *)(local_20 + 0x38) + 8) < local_c) {
        local_c = *(int *)(*(long *)(local_20 + 0x38) + 8);
      }
      if (local_c == 0) {
        return 0;
      }
    }
    local_24 = local_c;
  }
  return local_24;
}



int _xmlPatternMaxDepth(long param_1)

{
  int local_24;
  long local_20;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_20 = param_1;
  if (param_1 == 0) {
    local_24 = -1;
  }
  else {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      if (*(long *)(local_20 + 0x38) == 0) {
        return -1;
      }
      for (local_c = 0; local_c < *(int *)(*(long *)(local_20 + 0x38) + 8); local_c = local_c + 1) {
        if ((*(uint *)(*(long *)(*(long *)(local_20 + 0x38) + 0x10) + (long)local_c * 0x18) & 1) !=
            0) {
          return -2;
        }
      }
      if (local_10 < *(int *)(*(long *)(local_20 + 0x38) + 8)) {
        local_10 = *(int *)(*(long *)(local_20 + 0x38) + 8);
      }
    }
    local_24 = local_10;
  }
  return local_24;
}


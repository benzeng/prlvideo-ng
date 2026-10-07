
undefined4 FUN_1001c2ad0(long *param_1,int *param_2)

{
  undefined4 local_2c;
  long local_18;
  int local_c;
  
  local_c = 0;
  if ((param_1 == (long *)0x0) || (param_2 == (int *)0x0)) {
    local_2c = 0xffffffff;
  }
  else {
    local_18 = *param_1;
    if (local_18 == 0) {
      local_2c = 0xffffffff;
    }
    else {
      if ((((*(int *)(local_18 + 8) == 1) || (*(int *)(local_18 + 8) == 9)) ||
          (*(int *)(local_18 + 8) == 0xd)) && (0 < *param_2)) {
        local_18 = FUN_1001bec4c(local_18,*param_2);
      }
      for (; local_18 != 0; local_18 = *(long *)(local_18 + 0x20)) {
        if (*(long *)(local_18 + 0x20) == 0) {
          if ((*(int *)(local_18 + 8) == 1) || (*(long *)(local_18 + 0x50) == 0)) {
            return 0xffffffff;
          }
          local_c = _xmlStrlen(*(xmlChar **)(local_18 + 0x50));
          break;
        }
      }
      if (local_18 == 0) {
        local_2c = 0xffffffff;
      }
      else {
        *param_1 = local_18;
        *param_2 = local_c;
        local_2c = 0;
      }
    }
  }
  return local_2c;
}


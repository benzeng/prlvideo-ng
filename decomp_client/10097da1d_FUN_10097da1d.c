
long * FUN_10097da1d(long param_1,long param_2,long param_3)

{
  long *local_38;
  int local_c;
  
  if (param_1 == 0) {
    local_38 = (long *)0x0;
  }
  else {
    local_38 = (long *)(*(code *)_xmlMalloc)(0x40);
    if (local_38 == (long *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      _memset(local_38,0,0x40);
      local_38[3] = param_2;
      *local_38 = param_1;
      local_38[1] = param_1;
      if (param_3 == 0) {
        *(undefined4 *)(local_38 + 7) = 0;
      }
      else {
        local_c = 0;
        while (*(long *)((long)local_c * 0x10 + param_3) != 0) {
          local_c = local_c + 1;
        }
        *(int *)(local_38 + 7) = local_c;
      }
      local_38[6] = param_3;
    }
  }
  return local_38;
}


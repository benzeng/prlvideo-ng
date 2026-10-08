
long * FUN_1008a59a1(long *param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  long *local_10;
  
  if (((param_2 == (long *)0x0) || (*param_2 == 0)) || (*(long *)*param_2 == 0)) {
    local_10 = (long *)(*(code *)_xmlMalloc)(0x28);
    if (local_10 == (long *)0x0) {
      FUN_1008991e0("allocating namespace map item");
      return (long *)0x0;
    }
    *local_10 = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    if (*param_1 == 0) {
      *param_1 = (long)local_10;
      local_10[1] = (long)local_10;
      if (param_2 != (long *)0x0) {
        *param_2 = (long)local_10;
      }
    }
    else if (param_2 == (long *)0x0) {
      *local_10 = *param_1;
      local_10[1] = *(long *)(*param_1 + 8);
      *(long **)(*param_1 + 8) = local_10;
      *param_1 = (long)local_10;
    }
    else {
      *(long **)*param_2 = local_10;
      local_10[1] = *param_2;
      *param_2 = (long)local_10;
    }
  }
  else {
    local_10 = *(long **)*param_2;
    *param_2 = (long)local_10;
  }
  local_10[2] = param_3;
  local_10[3] = param_4;
  *(undefined4 *)(local_10 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_10 + 0x24) = param_5;
  return local_10;
}


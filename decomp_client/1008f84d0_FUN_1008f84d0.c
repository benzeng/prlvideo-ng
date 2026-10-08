
long FUN_1008f84d0(long param_1,int param_2)

{
  long local_30;
  long local_20;
  int local_c;
  
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    local_20 = *(long *)(param_1 + 0x18);
    local_c = 0;
    while (local_c <= param_2) {
      if (local_20 == 0) {
        return 0;
      }
      if ((((*(int *)(local_20 + 8) == 1) || (*(int *)(local_20 + 8) == 9)) ||
          (*(int *)(local_20 + 8) == 0xd)) && (local_c = local_c + 1, local_c == param_2)) break;
      local_20 = *(long *)(local_20 + 0x30);
    }
    local_30 = local_20;
  }
  return local_30;
}


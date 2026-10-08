
undefined8 FUN_10088a9f3(long param_1,long param_2)

{
  undefined8 local_30;
  int local_c;
  
  if (*(long *)(param_1 + 0x1e0) == param_2) {
    local_30 = *(undefined8 *)(param_1 + 0x1f0);
  }
  else {
    local_c = *(int *)(param_1 + 0x1fc);
    do {
      local_c = local_c + -2;
      if (local_c < 0) {
        return 0;
      }
    } while (*(long *)(*(long *)(param_1 + 0x208) + (long)local_c * 8) != param_2);
    if ((param_2 == 0) && (**(char **)(*(long *)(param_1 + 0x208) + (long)local_c * 8 + 8) == '\0'))
    {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined8 *)(*(long *)(param_1 + 0x208) + (long)local_c * 8 + 8);
    }
  }
  return local_30;
}


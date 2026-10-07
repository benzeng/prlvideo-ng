
undefined4 FUN_1001e4830(long param_1,long param_2)

{
  undefined4 local_c;
  
  local_c = 1;
  if (*(int *)(param_2 + 8) == -1) {
    if (*(int *)(param_1 + 8) != -1) {
      local_c = 0;
    }
  }
  else if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < *(int *)(param_2 + 8))) {
    local_c = 0;
  }
  return local_c;
}


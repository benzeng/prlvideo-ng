
int FUN_100972f33(long param_1)

{
  long lVar1;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = -1;
  local_c = 1000000;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x68) == 0)) || (**(int **)(param_1 + 0x68) < 1)) {
    local_34 = -1;
  }
  else {
    for (local_18 = 0; local_18 < **(int **)(param_1 + 0x68); local_18 = local_18 + 1) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_18 * 8);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 8) == 0) {
          if ((local_10 == -1) || (*(int *)(lVar1 + 0x18) < local_c)) {
            local_10 = local_18;
            local_c = *(int *)(lVar1 + 0x18);
          }
        }
        else if ((local_10 == -1) || (100000 < local_c)) {
          local_c = 100000;
          local_10 = local_18;
        }
      }
    }
    local_34 = local_10;
  }
  return local_34;
}


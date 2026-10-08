
int FUN_100934f78(long param_1)

{
  int iVar1;
  int local_34;
  int local_28;
  int local_24;
  long local_20;
  int local_14;
  long local_10;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    local_34 = 0;
  }
  else if (**(int **)(param_1 + 0x18) == 7) {
    local_28 = -1;
    local_20 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    if (local_20 == 0) {
      local_34 = 0;
    }
    else {
      for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
        if ((**(int **)(local_20 + 0x18) == 0xe) || (**(int **)(local_20 + 0x18) == 2)) {
          local_24 = *(int *)(local_20 + 0x20);
        }
        else {
          local_24 = FUN_100934f78(local_20);
        }
        if (local_24 == 0) {
          return 0;
        }
        if ((local_24 < local_28) || (local_28 == -1)) {
          local_28 = local_24;
        }
      }
      local_34 = *(int *)(param_1 + 0x20) * local_28;
    }
  }
  else {
    local_14 = 0;
    local_10 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    if (local_10 == 0) {
      local_34 = 0;
    }
    else {
      do {
        if ((**(int **)(local_10 + 0x18) == 0xe) || (**(int **)(local_10 + 0x18) == 2)) {
          iVar1 = *(int *)(local_10 + 0x20);
        }
        else {
          iVar1 = FUN_100934f78(local_10);
        }
        local_14 = local_14 + iVar1;
        local_10 = *(long *)(local_10 + 0x10);
      } while (local_10 != 0);
      local_34 = *(int *)(param_1 + 0x20) * local_14;
    }
  }
  return local_34;
}


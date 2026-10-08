
int FUN_1009350f6(long param_1)

{
  int local_34;
  int local_28;
  int local_24;
  long local_20;
  int local_18;
  int local_14;
  long local_10;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x18) == 0)) {
    local_34 = 0;
  }
  else if (**(int **)(param_1 + 0x18) == 7) {
    local_28 = -1;
    for (local_20 = *(long *)(*(long *)(param_1 + 0x18) + 0x18); local_20 != 0;
        local_20 = *(long *)(local_20 + 0x10)) {
      if (*(long *)(local_20 + 0x18) != 0) {
        if ((**(int **)(local_20 + 0x18) == 0xe) || (**(int **)(local_20 + 0x18) == 2)) {
          local_24 = *(int *)(local_20 + 0x24);
        }
        else {
          local_24 = FUN_1009350f6(local_20);
        }
        if (local_24 == 0x40000000) {
          return 0x40000000;
        }
        if ((local_28 < local_24) || (local_28 == -1)) {
          local_28 = local_24;
        }
      }
    }
    local_34 = *(int *)(param_1 + 0x24) * local_28;
  }
  else {
    local_18 = 0;
    for (local_10 = *(long *)(*(long *)(param_1 + 0x18) + 0x18); local_10 != 0;
        local_10 = *(long *)(local_10 + 0x10)) {
      if (*(long *)(local_10 + 0x18) != 0) {
        if ((**(int **)(local_10 + 0x18) == 0xe) || (**(int **)(local_10 + 0x18) == 2)) {
          local_14 = *(int *)(local_10 + 0x24);
        }
        else {
          local_14 = FUN_1009350f6(local_10);
        }
        if (local_14 == 0x40000000) {
          return 0x40000000;
        }
        if ((0 < local_14) && (*(int *)(param_1 + 0x24) == 0x40000000)) {
          return 0x40000000;
        }
        local_18 = local_18 + local_14;
      }
    }
    local_34 = *(int *)(param_1 + 0x24) * local_18;
  }
  return local_34;
}


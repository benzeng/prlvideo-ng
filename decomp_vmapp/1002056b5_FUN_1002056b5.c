
void FUN_1002056b5(long param_1)

{
  int iVar1;
  long lVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_24 = *(uint *)(*(long *)(param_1 + 0x70) + 0x58) >> 0x1b & 1;
  if (local_24 != 0) {
    local_20 = *(uint *)(*(long *)(param_1 + 0x70) + 0x58) >> 0x15 & 1;
    local_1c = *(uint *)(*(long *)(param_1 + 0x70) + 0x58) >> 0x1c & 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    for (local_18 = *(int **)(param_1 + 0x78); local_18 != (int *)0x0;
        local_18 = *(int **)(local_18 + 2)) {
      iVar1 = *local_18;
      if (iVar1 == 0x3ef) {
        local_20 = 1;
        local_1c = 1;
        local_24 = 1;
      }
      else if (iVar1 != 0x3f0) {
        if (iVar1 == 0x3ee) {
          local_1c = 1;
          local_24 = 1;
        }
        else {
          local_24 = 1;
        }
      }
    }
  }
  if (local_1c != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x10000000;
  }
  if (local_20 != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x200000;
  }
  if ((((local_24 != 0) &&
       (*(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x8000000, local_20 == 0)) &&
      ((*(uint *)(param_1 + 0x58) >> 8 & 1) != 0)) &&
     ((lVar2 = FUN_1001fed4c(param_1), *(int *)(lVar2 + 0xa0) != 0x2e &&
      (*(int *)(lVar2 + 0xa0) != 1)))) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x200000;
  }
  return;
}



int FUN_1001cb8aa(long param_1)

{
  char *pcVar1;
  int iVar2;
  char *local_28;
  int local_10;
  
  local_10 = -1;
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) {
    return -1;
  }
LAB_1001cb8ed:
  do {
    iVar2 = FUN_1001cb687(param_1);
    if (iVar2 < 0) {
      return -1;
    }
    if ((*(int *)(param_1 + 0x4cc) == 0) && (iVar2 == 0)) {
      return -1;
    }
    local_28 = (char *)(param_1 + 0xc4 + (long)*(int *)(param_1 + 0x4c8));
    pcVar1 = (char *)(param_1 + 0xc4 + (long)*(int *)(param_1 + 0x4cc));
LAB_1001cba4d:
    if (local_28 < pcVar1) {
      iVar2 = FUN_1001cb563(local_28,(int)pcVar1 - (int)local_28);
      if (iVar2 < 1) {
        for (; (local_28 < pcVar1 && (*local_28 != '\n')); local_28 = local_28 + 1) {
        }
        if (pcVar1 <= local_28) {
          *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4cc);
          goto LAB_1001cb8ed;
        }
        if (*local_28 != '\r') {
          local_28 = local_28 + 1;
        }
        goto LAB_1001cba4d;
      }
      local_28 = local_28 + 3;
      *(int *)(param_1 + 0x4d0) = (int)local_28 - ((int)param_1 + 0xc4);
      for (; (local_28 < pcVar1 && (*local_28 != '\n')); local_28 = local_28 + 1) {
      }
      if (*local_28 == '\n') {
        local_28 = local_28 + 1;
      }
      local_10 = iVar2;
      if (*local_28 == '\r') {
        local_28 = local_28 + 1;
      }
    }
    if (-1 < local_10) {
      *(int *)(param_1 + 0x4c8) = (int)local_28 - ((int)param_1 + 0xc4);
      return local_10 / 100;
    }
  } while( true );
}


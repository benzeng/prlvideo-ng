
int FUN_1001db940(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int local_44;
  int local_30;
  int local_2c;
  int local_10;
  int local_c;
  
  local_c = 1;
  if (*(int *)(param_1 + 0x68) == -1) {
    for (local_30 = 0; local_30 < *(int *)(param_1 + 0x4c); local_30 = local_30 + 1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_30 * 8);
      if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x14))) {
        for (local_2c = 0; local_2c < *(int *)(lVar3 + 0x14); local_2c = local_2c + 1) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x18) + (long)local_2c * 0x18);
          if ((*plVar1 != 0) && ((int)plVar1[1] != -1)) {
            for (local_10 = 0; local_10 < local_2c; local_10 = local_10 + 1) {
              plVar2 = (long *)(*(long *)(lVar3 + 0x18) + (long)local_10 * 0x18);
              if ((int)plVar2[1] != -1) {
                if (*plVar2 == 0) {
                  if (((int)plVar1[1] != -1) &&
                     (local_c = FUN_1001db841(param_1,*(undefined8 *)
                                                       (*(long *)(param_1 + 0x50) +
                                                       (long)(int)plVar1[1] * 8),(int)plVar2[1],
                                              *plVar2), local_c == 0)) {
                    return 0;
                  }
                }
                else if ((int)plVar1[1] == (int)plVar2[1]) {
                  iVar4 = FUN_1001db706(*plVar1,*plVar2);
                  if (iVar4 != 0) {
                    *(undefined4 *)(plVar2 + 1) = 0xffffffff;
                  }
                }
                else {
                  iVar4 = FUN_1001db706(*plVar1,*plVar2);
                  if (iVar4 != 0) {
                    local_c = 0;
                  }
                }
              }
            }
            if (local_c == 0) break;
          }
        }
        if (local_c == 0) break;
      }
    }
    *(int *)(param_1 + 0x68) = local_c;
    local_44 = local_c;
  }
  else {
    local_44 = *(int *)(param_1 + 0x68);
  }
  return local_44;
}


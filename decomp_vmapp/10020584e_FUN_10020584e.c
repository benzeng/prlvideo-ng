
undefined4 FUN_10020584e(long param_1)

{
  int iVar1;
  undefined8 *local_18;
  int *local_10;
  
  if ((*(uint *)(param_1 + 0x58) >> 6 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
      if (*(long *)(param_1 + 0xb0) != 0) {
        for (local_18 = *(undefined8 **)(param_1 + 0xb0); local_18 != (undefined8 *)0x0;
            local_18 = (undefined8 *)*local_18) {
          if (*(int *)local_18[1] == 0x3f0) {
            iVar1 = *(int *)(local_18[1] + 0x34);
            if (iVar1 == 2) {
              *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x2000000;
            }
            else if (iVar1 == 3) {
              *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x4000000;
            }
            else {
              if (iVar1 != 1) {
                return 0xffffffff;
              }
              *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x1000000;
            }
            return 0;
          }
        }
      }
      local_10 = *(int **)(param_1 + 0x70);
      while( true ) {
        if (local_10 == (int *)0x0) {
          return 0;
        }
        if (local_10[0x28] == 0x2d) {
          return 0;
        }
        if (*local_10 == 1) break;
        local_10 = *(int **)(local_10 + 0x1c);
      }
      if (local_10[0x28] == 2) {
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x2000000;
      }
      else if ((local_10[0x28] == 1) || (local_10[0x28] == 0x2e)) {
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x1000000;
      }
      else {
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x4000000;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x4000000;
  }
  return 0;
}


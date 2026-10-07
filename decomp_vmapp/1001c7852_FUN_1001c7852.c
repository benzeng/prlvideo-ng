
int FUN_1001c7852(long param_1,long param_2,long param_3)

{
  int iVar1;
  long local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  if ((((param_2 == 0) || (param_3 == 0)) || (param_1 == 0)) ||
     ((*(long *)(param_2 + 0x88) != 0 &&
      (local_14 = FUN_1001c3b74(param_1,*(undefined8 *)(param_2 + 0x88)), local_14 < 0)))) {
    return -1;
  }
  if (param_3 == 0) {
    local_c = *(int *)(param_1 + 8);
  }
  else {
    local_c = *(int *)(param_1 + 0xc);
  }
  iVar1 = FUN_1001c7571(param_1,param_3);
  local_20 = param_3;
  if (iVar1 == 1) {
    FUN_1001c6d88(param_1,param_3);
  }
  do {
    if ((local_20 == 0) || (*(long *)(param_3 + 0x28) == local_20)) {
LAB_1001c7a4f:
      for (local_10 = local_c; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
        FUN_1001c6dac(param_1,local_10);
        local_14 = local_14 + 1;
      }
      for (local_10 = *(int *)(param_1 + 8); local_10 < *(int *)(param_1 + 0xc);
          local_10 = local_10 + 1) {
        if (((*(long *)(*(long *)(*(long *)(param_1 + 0x18) + (long)local_10 * 8) + 0x20) != 0) ||
            (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + (long)local_10 * 8) + 0x30) != 0)) ||
           (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (long)local_10 * 8) + 0x38) != 0)) {
          FUN_1001c7222(param_1,local_10);
        }
      }
      if (*(long *)(param_2 + 0x88) != 0) {
        FUN_1001c3d00(param_1);
      }
      return local_14;
    }
    if ((*(long *)(local_20 + 0x18) == 0) ||
       (((*(int *)(*(long *)(local_20 + 0x18) + 8) == 0x11 ||
         (*(int *)(*(long *)(local_20 + 0x18) + 8) == 0x13)) ||
        (*(int *)(*(long *)(local_20 + 0x18) + 8) == 0x14)))) {
      if (*(long *)(local_20 + 0x30) == 0) {
        if (local_20 == param_3) goto LAB_1001c7a4f;
        do {
          local_20 = *(long *)(local_20 + 0x28);
          if ((local_20 == 0) || (*(long *)(param_3 + 0x28) == local_20)) break;
          if (*(long *)(local_20 + 0x30) != 0) {
            local_20 = *(long *)(local_20 + 0x30);
            iVar1 = FUN_1001c7571(param_1,local_20);
            if (iVar1 != 0) {
              FUN_1001c6d88(param_1,local_20);
            }
            break;
          }
        } while (local_20 != 0);
      }
      else {
        local_20 = *(long *)(local_20 + 0x30);
        iVar1 = FUN_1001c7571(param_1,local_20);
        if (iVar1 != 0) {
          FUN_1001c6d88(param_1,local_20);
        }
      }
    }
    else {
      local_20 = *(long *)(local_20 + 0x18);
      iVar1 = FUN_1001c7571(param_1,local_20);
      if (iVar1 != 0) {
        FUN_1001c6d88(param_1,local_20);
      }
    }
  } while( true );
}


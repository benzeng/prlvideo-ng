
undefined4 FUN_1001ffd09(long param_1,long param_2)

{
  bool bVar1;
  undefined4 local_3c;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_10;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_2 + 0x38) == 0)) {
      if (*(long *)(param_1 + 0x30) != 0) {
        if (*(long *)(param_2 + 0x30) == 0) {
          if (*(long *)(param_2 + 0x38) != 0) {
            local_10 = *(undefined8 **)(param_1 + 0x30);
            while( true ) {
              if (local_10 == (undefined8 *)0x0) {
                return 0;
              }
              if (local_10[1] == *(long *)(*(long *)(param_2 + 0x38) + 8)) break;
              local_10 = (undefined8 *)*local_10;
            }
            return 1;
          }
        }
        else {
          bVar1 = false;
          for (local_28 = *(undefined8 **)(param_1 + 0x30); local_28 != (undefined8 *)0x0;
              local_28 = (undefined8 *)*local_28) {
            bVar1 = false;
            for (local_20 = *(undefined8 **)(param_2 + 0x30); local_20 != (undefined8 *)0x0;
                local_20 = (undefined8 *)*local_20) {
              if (local_28[1] == local_20[1]) {
                bVar1 = true;
                break;
              }
            }
            if (!bVar1) {
              return 1;
            }
          }
          if (bVar1) {
            return 0;
          }
        }
      }
      local_3c = 1;
    }
    else {
      local_3c = 0;
    }
  }
  else {
    local_3c = 0;
  }
  return local_3c;
}


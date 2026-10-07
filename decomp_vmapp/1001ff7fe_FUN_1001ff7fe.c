
undefined4 FUN_1001ff7fe(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  long local_18;
  int local_c;
  
  if ((((*(int *)(param_2 + 0x2c) == *(int *)(param_3 + 0x2c)) &&
       ((*(long *)(param_3 + 0x30) == 0) != (*(long *)(param_2 + 0x30) != 0))) &&
      ((*(long *)(param_3 + 0x38) == 0) != (*(long *)(param_2 + 0x38) != 0))) &&
     ((*(long *)(param_2 + 0x38) == 0 ||
      (*(long *)(*(long *)(param_2 + 0x38) + 8) == *(long *)(*(long *)(param_3 + 0x38) + 8))))) {
    if (*(long *)(param_2 + 0x30) == 0) {
      return 0;
    }
    local_1c = 0;
    for (local_40 = *(undefined8 **)(param_2 + 0x30); local_40 != (undefined8 *)0x0;
        local_40 = (undefined8 *)*local_40) {
      local_1c = 0;
      for (local_38 = *(undefined8 **)(param_3 + 0x30); local_38 != (undefined8 *)0x0;
          local_38 = (undefined8 *)*local_38) {
        if (local_40[1] == local_38[1]) {
          local_1c = 1;
          break;
        }
      }
      if (local_1c == 0) break;
    }
    if (local_1c != 0) {
      return 0;
    }
  }
  local_58 = param_2;
  local_50 = param_1;
  if ((*(int *)(param_2 + 0x2c) == *(int *)(param_3 + 0x2c)) || (*(int *)(param_2 + 0x2c) == 0)) {
    if (((*(long *)(param_2 + 0x38) == 0) || (*(long *)(param_3 + 0x30) == 0)) &&
       ((*(long *)(param_3 + 0x38) == 0 || (*(long *)(param_2 + 0x30) == 0)))) {
      if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(param_3 + 0x30) == 0)) {
        if ((*(long *)(param_2 + 0x38) == 0) ||
           ((((*(long *)(param_3 + 0x38) == 0 ||
              (*(long *)(*(long *)(param_2 + 0x38) + 8) == *(long *)(*(long *)(param_3 + 0x38) + 8))
              ) || (*(long *)(*(long *)(param_2 + 0x38) + 8) == 0)) ||
            (*(long *)(*(long *)(param_3 + 0x38) + 8) == 0)))) {
          if ((((*(long *)(param_2 + 0x38) != 0) && (*(long *)(param_3 + 0x38) != 0)) &&
              (*(long *)(*(long *)(param_2 + 0x38) + 8) != *(long *)(*(long *)(param_3 + 0x38) + 8))
              ) && (*(long *)(*(long *)(param_2 + 0x38) + 8) == 0)) {
            *(undefined8 *)(*(long *)(param_2 + 0x38) + 8) =
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
          }
          local_64 = 0;
        }
        else {
          FUN_1001e80a3(param_1,*(undefined8 *)(param_2 + 0x18),0x701,
                        "The intersection of the wilcard is not expressible.\n",0,0);
          local_64 = 0x701;
        }
      }
      else {
        local_40 = *(undefined8 **)(param_2 + 0x30);
        local_30 = (undefined8 *)0x0;
        while (local_40 != (undefined8 *)0x0) {
          local_c = 0;
          for (local_38 = *(undefined8 **)(param_3 + 0x30); local_38 != (undefined8 *)0x0;
              local_38 = (undefined8 *)*local_38) {
            if (local_40[1] == local_38[1]) {
              local_c = 1;
              break;
            }
          }
          if (local_c == 0) {
            if (local_30 == (undefined8 *)0x0) {
              *(undefined8 *)(local_58 + 0x30) = *local_40;
            }
            else {
              *local_30 = *local_40;
            }
            local_28 = (undefined8 *)*local_40;
            (*(code *)_xmlFree)(local_40);
            local_40 = local_28;
          }
          else {
            local_30 = local_40;
            local_40 = (undefined8 *)*local_40;
          }
        }
        local_64 = 0;
      }
    }
    else {
      if (*(long *)(param_2 + 0x30) == 0) {
        local_18 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        iVar1 = FUN_1001fef25(param_1,&local_58,param_3);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
      }
      else {
        local_18 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      }
      local_30 = (undefined8 *)0x0;
      for (local_40 = *(undefined8 **)(local_58 + 0x30); local_40 != (undefined8 *)0x0;
          local_40 = (undefined8 *)*local_40) {
        if (local_40[1] == 0) {
          if (local_30 == (undefined8 *)0x0) {
            *(undefined8 *)(local_58 + 0x30) = *local_40;
          }
          else {
            *local_30 = *local_40;
          }
          (*(code *)_xmlFree)(local_40);
          break;
        }
        local_30 = local_40;
      }
      if (local_18 != 0) {
        local_30 = (undefined8 *)0x0;
        for (local_40 = *(undefined8 **)(local_58 + 0x30); local_40 != (undefined8 *)0x0;
            local_40 = (undefined8 *)*local_40) {
          if (local_40[1] == local_18) {
            if (local_30 == (undefined8 *)0x0) {
              *(undefined8 *)(local_58 + 0x30) = *local_40;
            }
            else {
              *local_30 = *local_40;
            }
            (*(code *)_xmlFree)(local_40);
            break;
          }
          local_30 = local_40;
        }
      }
      local_64 = 0;
    }
  }
  else {
    iVar1 = FUN_1001fef25(param_1,&local_58,param_3);
    if (iVar1 == -1) {
      local_64 = 0xffffffff;
    }
    else {
      local_64 = 0;
    }
  }
  return local_64;
}


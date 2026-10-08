
undefined8 * FUN_1002a0600(undefined8 *param_1,long param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_20[0] = 0;
  FUN_100129840(param_1,local_20);
  if ((*(char *)(param_2 + 0x40) == '\0') || (*(int *)(param_2 + 0x38) != 2)) {
    local_24 = 1;
    FUN_100129840(param_1,&local_24);
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    if (*(char *)(param_2 + 0x40) == '\0') {
      if (*(int *)(param_2 + 0x38) == 2) goto LAB_1002a0664;
    }
    else if (*(int *)(param_2 + 0x38) == 0) {
LAB_1002a0664:
      local_28 = 3;
      FUN_100129840(param_1,&local_28);
    }
  }
  local_2c = 4;
  if (*(char *)(param_2 + 0x40) == '\0') {
    local_2c = 2;
  }
  FUN_100129840(param_1,&local_2c);
  if (*(int *)(param_2 + 0x3c) == 0) {
    if (*(char *)(param_2 + 0x40) == '\0') {
      if (*(int *)(param_2 + 0x38) != 2) goto LAB_1002a06c3;
    }
    else if (*(int *)(param_2 + 0x38) != 0) {
      return param_1;
    }
    local_30 = 5;
    FUN_100129840(param_1,&local_30);
  }
LAB_1002a06c3:
  if (((*(char *)(param_2 + 0x40) == '\0') && (*(int *)(param_2 + 0x38) == 0)) &&
     (*(int *)(param_2 + 0x3c) == 0)) {
    local_34 = 6;
    FUN_100129840(param_1,&local_34);
  }
  return param_1;
}


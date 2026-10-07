
undefined4 FUN_1001caa5f(long param_1,undefined8 *param_2,int *param_3)

{
  undefined4 local_54;
  int *local_50;
  undefined8 *local_48;
  undefined8 local_30;
  int local_24;
  long local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_30 = 0;
  local_50 = param_3;
  if (param_3 == (int *)0x0) {
    local_50 = &local_24;
  }
  local_48 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    local_48 = &local_30;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    *local_50 = 0;
    *local_48 = 0;
    local_54 = 0xffffffff;
  }
  else {
    local_c = (int)*(undefined8 *)(param_1 + 0x50) - (int)*(undefined8 *)(param_1 + 0x48);
    local_20 = param_1;
    do {
      local_10 = FUN_1001c85b7(local_20);
      if (local_10 < 1) break;
      local_c = local_c + local_10;
    } while ((*(int *)(local_20 + 0x6c) < 1) || (local_c < *(int *)(local_20 + 0x6c)));
    *local_48 = *(undefined8 *)(local_20 + 0x48);
    *local_50 = local_c;
    if ((*(int *)(local_20 + 0x6c) < 1) || (*(int *)(local_20 + 0x6c) <= local_c)) {
      if (local_c == 0) {
        local_14 = 0xffffffff;
      }
    }
    else {
      local_14 = 0xffffffff;
    }
    local_54 = local_14;
  }
  return local_54;
}


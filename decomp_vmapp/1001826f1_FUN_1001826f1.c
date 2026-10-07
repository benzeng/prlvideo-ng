
int FUN_1001826f1(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int local_2c;
  char *local_18;
  int local_c;
  
  if (param_2 == (undefined8 *)0x0) {
    local_2c = -1;
  }
  else {
    local_18 = (char *)*param_2;
    if ((*local_18 == '/') && (local_18[1] == '/')) {
      local_18 = local_18 + 2;
      local_c = FUN_10018211d(param_1,&local_18);
      if (local_c != 0) {
        return local_c;
      }
      iVar1 = 0;
      if (*local_18 == '/') {
        local_18 = local_18 + 1;
        iVar1 = FUN_100181960(param_1,&local_18,1);
      }
    }
    else {
      if (*local_18 != '/') {
        return 4;
      }
      local_18 = local_18 + 1;
      iVar1 = FUN_100181960(param_1,&local_18,1);
    }
    local_c = iVar1;
    if (local_c == 0) {
      if (*local_18 == '?') {
        local_18 = local_18 + 1;
        iVar1 = FUN_10017fe6d(param_1,&local_18);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      *param_2 = local_18;
      local_2c = 0;
    }
    else {
      local_2c = local_c;
    }
  }
  return local_2c;
}


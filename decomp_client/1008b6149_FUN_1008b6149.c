
int FUN_1008b6149(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 local_2c;
  
  if (param_2 == (long *)0x0) {
    local_2c = -1;
  }
  else {
    lVar1 = *param_2;
    local_2c = FUN_1008b3b5a(param_1,param_2);
    if (local_2c == 0) {
      if (*(char *)*param_2 == ':') {
        *param_2 = *param_2 + 1;
        if (*(char *)*param_2 == '/') {
          local_2c = FUN_1008b6019(param_1,param_2);
        }
        else {
          local_2c = FUN_1008b3c9a(param_1,param_2);
        }
      }
      else {
        *param_2 = lVar1;
        local_2c = 1;
      }
    }
  }
  return local_2c;
}


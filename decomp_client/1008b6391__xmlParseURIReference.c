
int _xmlParseURIReference(undefined8 param_1,char *param_2)

{
  int local_2c;
  char *local_28;
  undefined8 local_20;
  int local_14;
  char *local_10;
  
  if (param_2 == (char *)0x0) {
    local_2c = -1;
  }
  else {
    local_28 = param_2;
    local_20 = param_1;
    local_10 = param_2;
    FUN_1008b228f(param_1);
    local_14 = FUN_1008b6149(local_20,&local_28);
    if (local_14 != 0) {
      FUN_1008b228f(local_20);
      local_28 = local_10;
      local_14 = FUN_1008b61fe(local_20,&local_28);
    }
    if (local_14 == 0) {
      if (*local_28 == '#') {
        local_28 = local_28 + 1;
        local_14 = FUN_1008b33ec(local_20,&local_28);
        if (local_14 != 0) {
          return local_14;
        }
      }
      if (*local_28 == '\0') {
        local_2c = 0;
      }
      else {
        FUN_1008b228f(local_20);
        local_2c = 1;
      }
    }
    else {
      FUN_1008b228f(local_20);
      local_2c = local_14;
    }
  }
  return local_2c;
}


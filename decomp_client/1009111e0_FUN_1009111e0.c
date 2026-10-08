
undefined4 FUN_1009111e0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  
  if (param_1 == param_2) {
    local_2c = 1;
  }
  else if (param_1 == (char *)0x0) {
    local_2c = 0;
  }
  else {
    local_28 = param_2;
    local_20 = param_1;
    if (param_2 == (char *)0x0) {
      local_2c = 0;
    }
    else {
      do {
        pcVar2 = local_28;
        if (*local_20 == *local_28) {
          local_20 = local_20 + 1;
          local_28 = local_28 + 1;
        }
        else {
          if (*local_28 == '*') {
            local_28 = local_20;
            local_20 = pcVar2;
          }
          if (((*local_28 == '\0') || (*local_20 == '\0')) ||
             (cVar1 = *local_20, local_20 = local_20 + 1, cVar1 != '*')) {
            return 0;
          }
          do {
            if (*local_28 == '|') break;
            local_28 = local_28 + 1;
          } while (*local_28 != '\0');
        }
      } while (*local_28 != '\0');
      if (*local_20 == '\0') {
        local_2c = 1;
      }
      else {
        local_2c = 0;
      }
    }
  }
  return local_2c;
}


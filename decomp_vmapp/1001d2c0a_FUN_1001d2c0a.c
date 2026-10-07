
char * FUN_1001d2c0a(char *param_1)

{
  char *local_18;
  char *local_10;
  
  local_18 = param_1;
  if ((*param_1 == '-') && (param_1[1] == '-')) {
    for (local_10 = param_1 + 2; (*local_10 != '\0' && ((*local_10 != '-' || (local_10[1] != '-'))))
        ; local_10 = local_10 + 1) {
    }
    if (*local_10 == '\0') {
      local_18 = (char *)0x0;
    }
    else {
      local_18 = local_10 + 2;
    }
  }
  return local_18;
}


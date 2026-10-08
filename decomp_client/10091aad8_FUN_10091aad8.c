
char * FUN_10091aad8(int param_1)

{
  char *local_18;
  
  if (param_1 == 2) {
    local_18 = "lax";
  }
  else if (param_1 == 3) {
    local_18 = "strict";
  }
  else if (param_1 == 1) {
    local_18 = "skip";
  }
  else {
    local_18 = "invalid process contents";
  }
  return local_18;
}


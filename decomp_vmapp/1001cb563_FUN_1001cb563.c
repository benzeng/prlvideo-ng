
int FUN_1001cb563(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int local_28;
  
  if (param_2 < 3) {
    local_28 = -1;
  }
  else if ((*param_1 < '0') || ('9' < *param_1)) {
    local_28 = 0;
  }
  else {
    pcVar1 = param_1 + 1;
    if ((*pcVar1 < '0') || ('9' < *pcVar1)) {
      local_28 = 0;
    }
    else {
      pcVar2 = param_1 + 2;
      if ((*pcVar2 < '0') || ('9' < *pcVar2)) {
        local_28 = 0;
      }
      else {
        local_28 = ((*param_1 + -0x30) * 10 + (int)*pcVar1 + -0x30) * 10 + (int)*pcVar2 + -0x30;
        if (param_1[3] == '-') {
          local_28 = -local_28;
        }
      }
    }
  }
  return local_28;
}


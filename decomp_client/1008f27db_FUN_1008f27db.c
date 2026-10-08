
undefined4 FUN_1008f27db(int *param_1,int *param_2)

{
  undefined4 local_1c;
  
  if (param_1 == param_2) {
    local_1c = 1;
  }
  else if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_1c = 0;
  }
  else if (*param_1 == *param_2) {
    if (*param_1 == 6) {
      if (*(long *)(param_1 + 10) == *(long *)(param_2 + 10)) {
        if (param_1[0xc] == param_2[0xc]) {
          if (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0xe)) {
            if (param_1[0x10] == param_2[0x10]) {
              local_1c = 1;
            }
            else {
              local_1c = 0;
            }
          }
          else {
            local_1c = 0;
          }
        }
        else {
          local_1c = 0;
        }
      }
      else {
        local_1c = 0;
      }
    }
    else {
      local_1c = 0;
    }
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}


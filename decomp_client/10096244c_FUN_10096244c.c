
undefined4 FUN_10096244c(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined4 local_34;
  int local_c;
  
  if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) {
    local_34 = 0;
  }
  else if (param_2 == param_3) {
    local_34 = 1;
  }
  else if (*param_2 == *param_3) {
    if (param_2[1] == param_3[1]) {
      if ((int)param_2[3] == (int)param_3[3]) {
        if ((int)param_2[2] == (int)param_3[2]) {
          if (param_2[5] == param_3[5]) {
            if ((param_2[4] != param_3[4]) &&
               (iVar1 = _xmlStrEqual((xmlChar *)param_2[4],(xmlChar *)param_3[4]), iVar1 == 0)) {
              return 0;
            }
            for (local_c = 0; local_c < (int)param_2[2]; local_c = local_c + 1) {
              if (*(long *)(param_2[6] + (long)local_c * 8) !=
                  *(long *)(param_3[6] + (long)local_c * 8)) {
                return 0;
              }
            }
            local_34 = 1;
          }
          else {
            local_34 = 0;
          }
        }
        else {
          local_34 = 0;
        }
      }
      else {
        local_34 = 0;
      }
    }
    else {
      local_34 = 0;
    }
  }
  else {
    local_34 = 0;
  }
  return local_34;
}


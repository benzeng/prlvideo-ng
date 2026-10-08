
undefined4 FUN_10093c74a(int *param_1)

{
  undefined4 local_14;
  
  if (*param_1 == 1) {
    if ((param_1[0x28] == 1) || (param_1[0x28] == 0x2e)) {
      local_14 = 1;
    }
    else if (param_1[0x28] == 2) {
      local_14 = 2;
    }
    else {
      local_14 = 3;
    }
  }
  else if (((uint)param_1[0x16] >> 6 & 1) == 0) {
    if (((uint)param_1[0x16] >> 7 & 1) == 0) {
      if (((uint)param_1[0x16] >> 8 & 1) == 0) {
        local_14 = 0xffffffff;
      }
      else if (((uint)param_1[0x16] >> 0x18 & 1) == 0) {
        if (((uint)param_1[0x16] >> 0x19 & 1) == 0) {
          local_14 = 3;
        }
        else {
          local_14 = 2;
        }
      }
      else {
        local_14 = 1;
      }
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 3;
  }
  return local_14;
}


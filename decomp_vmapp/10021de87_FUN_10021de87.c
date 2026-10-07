
undefined4 FUN_10021de87(byte *param_1,byte *param_2,int param_3)

{
  undefined4 local_30;
  byte *local_28;
  byte *local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  do {
    if ((*local_20 == 0) || (*local_28 == 0)) {
      if (*local_20 == 0) {
        if (*local_28 == 0) {
          local_30 = 0;
        }
        else if (param_3 == 0) {
          local_30 = 0xffffffff;
        }
        else {
          local_30 = 1;
        }
      }
      else if (param_3 == 0) {
        local_30 = 1;
      }
      else {
        local_30 = 0xffffffff;
      }
      return local_30;
    }
    if ((*local_28 == 9) || ((*local_28 == 10 || (*local_28 == 0xd)))) {
      if (*local_20 != 0x20) {
        if (-1 < (int)(*local_20 - 0x20)) {
          if (param_3 != 0) {
            return 0xffffffff;
          }
          return 1;
        }
        if (param_3 != 0) {
          return 1;
        }
        return 0xffffffff;
      }
    }
    else {
      if ((int)((uint)*local_20 - (uint)*local_28) < 0) {
        if (param_3 != 0) {
          return 1;
        }
        return 0xffffffff;
      }
      if (0 < (int)((uint)*local_20 - (uint)*local_28)) {
        if (param_3 != 0) {
          return 0xffffffff;
        }
        return 1;
      }
    }
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
  } while( true );
}


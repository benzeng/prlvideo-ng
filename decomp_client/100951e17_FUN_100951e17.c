
undefined4 FUN_100951e17(byte *param_1,byte *param_2)

{
  undefined4 local_2c;
  byte *local_28;
  byte *local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  do {
    if ((*local_20 == 0) || (*local_28 == 0)) {
      if (*local_20 == 0) {
        if (*local_28 == 0) {
          local_2c = 0;
        }
        else {
          local_2c = 0xffffffff;
        }
      }
      else {
        local_2c = 1;
      }
      return local_2c;
    }
    if ((*local_28 == 0x20) || (((8 < *local_28 && (*local_28 < 0xb)) || (*local_28 == 0xd)))) {
      if ((*local_20 != 0x20) && (((*local_20 < 9 || (10 < *local_20)) && (*local_20 != 0xd)))) {
        if ((int)(*local_20 - 0x20) < 0) {
          return 0xffffffff;
        }
        return 1;
      }
    }
    else {
      if (((*local_20 == 0x20) || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd)) {
        if ((int)(0x20 - (uint)*local_28) < 0) {
          return 0xffffffff;
        }
        return 1;
      }
      if ((int)((uint)*local_20 - (uint)*local_28) < 0) {
        return 0xffffffff;
      }
      if (0 < (int)((uint)*local_20 - (uint)*local_28)) {
        return 1;
      }
    }
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
  } while( true );
}


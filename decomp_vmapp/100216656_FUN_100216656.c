
int FUN_100216656(byte param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x41) || (0x5a < param_1)) {
    if ((param_1 < 0x61) || (0x7a < param_1)) {
      if ((param_1 < 0x30) || (0x39 < param_1)) {
        if (param_1 == 0x2b) {
          local_10 = 0x3e;
        }
        else if (param_1 == 0x2f) {
          local_10 = 0x3f;
        }
        else if (param_1 == 0x3d) {
          local_10 = 0x40;
        }
        else {
          local_10 = -1;
        }
      }
      else {
        local_10 = param_1 + 4;
      }
    }
    else {
      local_10 = param_1 - 0x47;
    }
  }
  else {
    local_10 = param_1 - 0x41;
  }
  return local_10;
}


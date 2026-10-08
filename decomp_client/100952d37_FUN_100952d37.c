
int FUN_100952d37(byte *param_1)

{
  int local_24;
  byte *local_18;
  int local_c;
  
  local_c = 0;
  local_18 = param_1;
  if (param_1 == (byte *)0x0) {
    local_24 = -1;
  }
  else {
    for (; (*local_18 == 0x20 || (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))));
        local_18 = local_18 + 1) {
    }
    while (*local_18 != 0) {
      if ((char)*local_18 < '\0') {
        if ((local_18[1] & 0xc0) != 0x80) {
          return -1;
        }
        if ((*local_18 & 0xe0) == 0xe0) {
          if ((local_18[2] & 0xc0) != 0x80) {
            return -1;
          }
          if ((*local_18 & 0xf0) == 0xf0) {
            if (((*local_18 & 0xf8) != 0xf0) || ((local_18[3] & 0xc0) != 0x80)) {
              return -1;
            }
            local_18 = local_18 + 4;
          }
          else {
            local_18 = local_18 + 3;
          }
        }
        else {
          local_18 = local_18 + 2;
        }
      }
      else if (((*local_18 == 0x20) || ((8 < *local_18 && (*local_18 < 0xb)))) || (*local_18 == 0xd)
              ) {
        for (; ((*local_18 == 0x20 || ((8 < *local_18 && (*local_18 < 0xb)))) || (*local_18 == 0xd))
            ; local_18 = local_18 + 1) {
        }
        if (*local_18 == 0) break;
      }
      else {
        local_18 = local_18 + 1;
      }
      local_c = local_c + 1;
    }
    local_24 = local_c;
  }
  return local_24;
}


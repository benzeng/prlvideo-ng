
void FUN_10096d1af(byte *param_1)

{
  byte *pbVar1;
  byte *local_18;
  byte *local_10;
  
  local_10 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; (*local_10 == 0x20 || (((8 < *local_10 && (*local_10 < 0xb)) || (*local_10 == 0xd))));
        local_10 = local_10 + 1) {
    }
    local_18 = param_1;
    if (local_10 == param_1) {
      do {
        for (; (((pbVar1 = local_10, *local_10 != 0 && (*local_10 != 0x20)) &&
                ((*local_10 < 9 || (10 < *local_10)))) && (*local_10 != 0xd));
            local_10 = local_10 + 1) {
        }
        if (*local_10 == 0) {
          return;
        }
        for (; ((*local_10 == 0x20 || ((8 < *local_10 && (*local_10 < 0xb)))) || (*local_10 == 0xd))
            ; local_10 = local_10 + 1) {
        }
      } while (*local_10 != 0);
      *pbVar1 = 0;
    }
    else {
      while( true ) {
        for (; (((*local_10 != 0 && (*local_10 != 0x20)) && ((*local_10 < 9 || (10 < *local_10))))
               && (*local_10 != 0xd)); local_10 = local_10 + 1) {
          *local_18 = *local_10;
          local_18 = local_18 + 1;
        }
        if (*local_10 == 0) {
          *local_18 = 0;
          return;
        }
        for (; (*local_10 == 0x20 || (((8 < *local_10 && (*local_10 < 0xb)) || (*local_10 == 0xd))))
            ; local_10 = local_10 + 1) {
        }
        if (*local_10 == 0) break;
        *local_18 = *local_10;
        local_10 = local_10 + 1;
        local_18 = local_18 + 1;
      }
      *local_18 = 0;
    }
  }
  return;
}


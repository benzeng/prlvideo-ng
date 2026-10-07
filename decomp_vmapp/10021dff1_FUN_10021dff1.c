
undefined4 FUN_10021dff1(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 local_30;
  byte *local_28;
  byte *local_20;
  
  for (local_28 = param_2;
      (*local_28 == 0x20 ||
      (((8 < *local_28 && (*local_28 < 0xb)) || (local_20 = param_1, *local_28 == 0xd))));
      local_28 = local_28 + 1) {
  }
  while( true ) {
    while( true ) {
      if ((*local_20 == 0) || (*local_28 == 0)) {
        if (*local_20 != 0) {
          if (param_3 != 0) {
            return 0xffffffff;
          }
          return 1;
        }
        if (*local_28 != 0) {
          for (; ((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) ||
                 (*local_28 == 0xd)); local_28 = local_28 + 1) {
          }
          if (*local_28 != 0) {
            if (param_3 != 0) {
              return 1;
            }
            return 0xffffffff;
          }
        }
        return 0;
      }
      if ((*local_28 == 0x20) || (((8 < *local_28 && (*local_28 < 0xb)) || (*local_28 == 0xd))))
      break;
      bVar1 = *local_20;
      bVar2 = *local_28;
      local_20 = local_20 + 1;
      local_28 = local_28 + 1;
      if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
        if (param_3 != 0) {
          return 1;
        }
        return 0xffffffff;
      }
      if (0 < (int)((uint)bVar1 - (uint)bVar2)) {
        if (param_3 == 0) {
          local_30 = 1;
        }
        else {
          local_30 = 0xffffffff;
        }
        return local_30;
      }
    }
    if (*local_20 != 0x20) break;
    local_20 = local_20 + 1;
    do {
      do {
        local_28 = local_28 + 1;
      } while (*local_28 == 0x20);
    } while (((8 < *local_28) && (*local_28 < 0xb)) || (*local_28 == 0xd));
  }
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


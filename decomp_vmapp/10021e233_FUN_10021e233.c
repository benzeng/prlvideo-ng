
undefined4 FUN_10021e233(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *local_28;
  byte *local_20;
  
  for (local_28 = param_2;
      (*local_28 == 0x20 ||
      (((8 < *local_28 && (*local_28 < 0xb)) || (local_20 = param_1, *local_28 == 0xd))));
      local_28 = local_28 + 1) {
  }
  do {
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
      if ((*local_28 != 0x20) && (((*local_28 < 9 || (10 < *local_28)) && (*local_28 != 0xd))))
      break;
      if (((*local_20 != 0x20) && ((*local_20 < 9 || (10 < *local_20)))) && (*local_20 != 0xd)) {
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
      local_20 = local_20 + 1;
      do {
        do {
          local_28 = local_28 + 1;
        } while (*local_28 == 0x20);
      } while (((8 < *local_28) && (*local_28 < 0xb)) || (*local_28 == 0xd));
    }
    if ((*local_20 == 0x20) || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd)))) {
      if (-1 < (int)(0x20 - (uint)*local_28)) {
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
    bVar1 = *local_20;
    bVar2 = *local_28;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
    if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
      return 0xffffffff;
    }
  } while ((int)((uint)bVar1 - (uint)bVar2) < 1);
  return 1;
}



int FUN_10021e67d(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *local_28;
  byte *local_20;
  
  for (local_20 = param_1;
      (*local_20 == 0x20 ||
      (((8 < *local_20 && (*local_20 < 0xb)) || (local_28 = param_2, *local_20 == 0xd))));
      local_20 = local_20 + 1) {
  }
  for (; ((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) || (*local_28 == 0xd));
      local_28 = local_28 + 1) {
  }
  do {
    while( true ) {
      if ((*local_20 == 0) || (*local_28 == 0)) {
        if (*local_20 != 0) {
          for (; (*local_20 == 0x20 ||
                 (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))));
              local_20 = local_20 + 1) {
          }
          if (*local_20 != 0) {
            return 1;
          }
        }
        if (*local_28 != 0) {
          for (; ((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) ||
                 (*local_28 == 0xd)); local_28 = local_28 + 1) {
          }
          if (*local_28 != 0) {
            return -1;
          }
        }
        return 0;
      }
      if (((*local_20 != 0x20) && ((*local_20 < 9 || (10 < *local_20)))) && (*local_20 != 0xd))
      break;
      if ((*local_28 != 0x20) && (((*local_28 < 9 || (10 < *local_28)) && (*local_28 != 0xd)))) {
        return (uint)*local_20 - (uint)*local_28;
      }
      for (; ((*local_20 == 0x20 || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd));
          local_20 = local_20 + 1) {
      }
      for (; ((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) || (*local_28 == 0xd));
          local_28 = local_28 + 1) {
      }
    }
    bVar1 = *local_20;
    bVar2 = *local_28;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
    if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
      return -1;
    }
  } while ((int)((uint)bVar1 - (uint)bVar2) < 1);
  return 1;
}


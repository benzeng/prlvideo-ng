
byte * FUN_10023cfee(undefined8 param_1,byte *param_2)

{
  byte *local_40;
  byte *local_38;
  byte *local_20;
  byte *local_18;
  
  local_18 = param_2;
  if (param_2 == (byte *)0x0) {
    local_40 = (byte *)0x0;
  }
  else {
    for (; *local_18 != 0; local_18 = local_18 + 1) {
    }
    local_40 = (byte *)(*(code *)_xmlMallocAtomic)((long)(((int)local_18 - (int)param_2) + 1));
    local_38 = param_2;
    if (local_40 == (byte *)0x0) {
      FUN_10022d41d(param_1,"validating\n");
      local_40 = (byte *)0x0;
    }
    else {
      for (; (*local_38 == 0x20 ||
             (((8 < *local_38 && (*local_38 < 0xb)) || (local_20 = local_40, *local_38 == 0xd))));
          local_38 = local_38 + 1) {
      }
      while (*local_38 != 0) {
        if (((*local_38 == 0x20) || ((8 < *local_38 && (*local_38 < 0xb)))) || (*local_38 == 0xd)) {
          for (; ((*local_38 == 0x20 || ((8 < *local_38 && (*local_38 < 0xb)))) ||
                 (*local_38 == 0xd)); local_38 = local_38 + 1) {
          }
          if (*local_38 == 0) break;
          *local_20 = 0x20;
          local_20 = local_20 + 1;
        }
        else {
          *local_20 = *local_38;
          local_38 = local_38 + 1;
          local_20 = local_20 + 1;
        }
      }
      *local_20 = 0;
    }
  }
  return local_40;
}


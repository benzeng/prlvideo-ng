
byte * FUN_100903f86(byte *param_1)

{
  bool bVar1;
  bool bVar2;
  byte *local_38;
  byte *local_20;
  byte *local_10;
  
  bVar1 = true;
  if (param_1 == (byte *)0x0) {
    local_38 = (byte *)0x0;
  }
  else {
    bVar2 = true;
    local_20 = param_1;
    while ((*local_20 != 0 && (bVar1))) {
      if ((*local_20 == 0x20) || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd)))) {
        if ((*local_20 != 0x20) || (bVar2)) {
          bVar1 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      local_20 = local_20 + 1;
    }
    if ((!bVar1) || (bVar2)) {
      local_38 = _xmlStrdup(param_1);
      bVar1 = false;
      local_10 = local_38;
      for (local_20 = param_1; *local_20 != 0; local_20 = local_20 + 1) {
        if ((*local_20 == 0x20) || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd)))) {
          if (local_10 != local_38) {
            bVar1 = true;
          }
        }
        else {
          if (bVar1) {
            *local_10 = 0x20;
            local_10 = local_10 + 1;
            bVar1 = false;
          }
          *local_10 = *local_20;
          local_10 = local_10 + 1;
        }
      }
      *local_10 = 0;
    }
    else {
      local_38 = (byte *)0x0;
    }
  }
  return local_38;
}


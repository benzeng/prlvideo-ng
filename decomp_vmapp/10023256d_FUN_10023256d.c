
undefined4 FUN_10023256d(byte *param_1)

{
  byte *local_10;
  
  local_10 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; *local_10 != 0; local_10 = local_10 + 1) {
      if ((*local_10 != 0x20) && (((*local_10 < 9 || (10 < *local_10)) && (*local_10 != 0xd)))) {
        return 0;
      }
    }
  }
  return 1;
}


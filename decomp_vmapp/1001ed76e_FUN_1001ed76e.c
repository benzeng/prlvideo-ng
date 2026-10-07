
undefined4 FUN_1001ed76e(byte *param_1,int param_2)

{
  int local_14;
  byte *local_10;
  
  if (param_1 != (byte *)0x0) {
    local_14 = param_2;
    local_10 = param_1;
    if (param_2 < 0) {
      for (; *local_10 != 0; local_10 = local_10 + 1) {
        if ((*local_10 != 0x20) && (((*local_10 < 9 || (10 < *local_10)) && (*local_10 != 0xd)))) {
          return 0;
        }
      }
    }
    else {
      for (; (*local_10 != 0 && (local_14 != 0)); local_14 = local_14 + -1) {
        if (((*local_10 != 0x20) && ((*local_10 < 9 || (10 < *local_10)))) && (*local_10 != 0xd)) {
          return 0;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 1;
}


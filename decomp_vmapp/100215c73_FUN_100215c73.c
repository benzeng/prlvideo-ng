
undefined4 FUN_100215c73(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 local_3c;
  byte *local_20;
  int local_c;
  
  local_20 = (byte *)*param_2;
  local_c = 0;
  if ((((*local_20 < 0x30) || (0x39 < *local_20)) && (*local_20 != 0x2d)) && (*local_20 != 0x2b)) {
    local_3c = 0xffffffff;
  }
  else {
    bVar1 = *local_20;
    pbVar2 = local_20;
    if (bVar1 == 0x2d) {
      local_20 = local_20 + 1;
      pbVar2 = local_20;
    }
    for (; (0x2f < *local_20 && (*local_20 < 0x3a)); local_20 = local_20 + 1) {
      *param_1 = *param_1 * 10 + (long)(int)(*local_20 - 0x30);
      local_c = local_c + 1;
    }
    if ((local_c < 4) || ((4 < local_c && (*pbVar2 == 0x30)))) {
      local_3c = 1;
    }
    else {
      if (bVar1 == 0x2d) {
        *param_1 = -*param_1;
      }
      if (*param_1 == 0) {
        local_3c = 2;
      }
      else {
        *param_2 = local_20;
        local_3c = 0;
      }
    }
  }
  return local_3c;
}


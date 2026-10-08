
int FUN_10094b75a(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  int local_5c;
  long local_38;
  long local_30;
  long local_28;
  byte *local_20;
  byte *local_18;
  int local_10;
  int local_c;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = (byte *)*param_1;
  local_10 = 0;
  local_c = 0;
  for (; *local_18 == 0x30; local_18 = local_18 + 1) {
  }
  for (local_20 = local_18; ((*local_20 != 0 && (0x2f < *local_20)) && (*local_20 < 0x3a));
      local_20 = local_20 + 1) {
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  }
  if (local_c < 0x19) {
    for (; 0x10 < local_c; local_c = local_c + -1) {
      local_28 = local_28 * 10 + (long)(int)(*local_18 - 0x30);
      local_18 = local_18 + 1;
    }
    for (; 8 < local_c; local_c = local_c + -1) {
      local_30 = local_30 * 10 + (long)(int)(*local_18 - 0x30);
      local_18 = local_18 + 1;
    }
    for (; 0 < local_c; local_c = local_c + -1) {
      local_38 = local_38 * 10 + (long)(int)(*local_18 - 0x30);
      local_18 = local_18 + 1;
    }
    *param_1 = local_18;
    *param_2 = local_38;
    *param_3 = local_30;
    *param_4 = local_28;
    local_5c = local_10;
  }
  else {
    *param_1 = local_20;
    local_5c = -1;
  }
  return local_5c;
}



uint FUN_1001a4a7d(undefined8 param_1,uint *param_2)

{
  undefined8 local_20;
  uint local_14;
  byte local_d;
  uint local_c;
  
  local_20 = param_1;
  local_c = 1;
  *param_2 = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    local_d = *(byte *)((long)&local_20 + (ulong)(byte)(&DAT_100b35958)[7 - local_14]);
    local_c = local_c & ((&DAT_100b35970)[local_14] & local_d) == (&DAT_100b35970)[local_14];
    *param_2 = *param_2 | (uint)((&DAT_100b35978)[local_14] & local_d);
  }
  return local_c;
}


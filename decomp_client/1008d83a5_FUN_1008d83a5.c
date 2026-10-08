
uint FUN_1008d83a5(undefined8 param_1,uint *param_2)

{
  undefined8 local_20;
  uint local_14;
  byte local_d;
  uint local_c;
  
  local_20 = param_1;
  local_c = 1;
  *param_2 = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    local_d = *(byte *)((long)&local_20 + (ulong)(byte)(&DAT_101c9ba38)[7 - local_14]);
    local_c = local_c & ((&DAT_101c9ba58)[local_14] & local_d) == (&DAT_101c9ba58)[local_14];
    *param_2 = *param_2 | (uint)((&DAT_101c9ba60)[local_14] & local_d);
  }
  return local_c;
}


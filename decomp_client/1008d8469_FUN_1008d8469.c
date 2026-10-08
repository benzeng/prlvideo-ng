
uint FUN_1008d8469(undefined8 param_1)

{
  undefined8 local_20 [2];
  uint local_10;
  uint local_c;
  
  local_20[0] = param_1;
  local_c = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_c = local_c | (&DAT_101c9ba68)[local_10] &
                        *(byte *)((long)local_20 + (ulong)(byte)(&DAT_101c9ba38)[7 - local_10]);
  }
  return local_c;
}


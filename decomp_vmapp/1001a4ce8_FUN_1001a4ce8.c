
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001a4ce8(double param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  
  if ((double)(DAT_100b35d30 & (ulong)param_1) == _DAT_100b35960) {
    if (0.0 < param_1) {
      local_24 = 1;
    }
    else {
      local_24 = 0xffffffff;
    }
    local_28 = local_24;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}


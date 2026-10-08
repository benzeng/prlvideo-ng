
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ab4a10(long param_1)

{
  mach_timebase_info in_RAX;
  mach_timebase_info local_18;
  
  if (DAT_102313aa4 == 0) {
    local_18 = in_RAX;
    _mach_timebase_info(&local_18);
    _DAT_102313aa0 = local_18;
    DAT_102313aa8 =
         (double)((ulong)local_18 & 0xffffffff) /
         ((double)((ulong)local_18 >> 0x20) * _DAT_101cd5bb8);
  }
  return (long)((double)param_1 / DAT_102313aa8);
}


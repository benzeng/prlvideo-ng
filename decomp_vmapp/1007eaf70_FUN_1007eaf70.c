
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1007eaf70(long *param_1,long param_2)

{
  long lVar1;
  mach_timebase_info in_RAX;
  mach_timebase_info local_18;
  
  lVar1 = *param_1;
  if (DAT_1011c050c == 0) {
    local_18 = in_RAX;
    _mach_timebase_info(&local_18);
    _DAT_1011c0508 = local_18;
    DAT_1011c0510 =
         (double)((ulong)local_18 & 0xffffffff) /
         ((double)((ulong)local_18 >> 0x20) * _DAT_100b4ae98);
  }
  return (long)((double)(lVar1 - param_2) * DAT_1011c0510);
}


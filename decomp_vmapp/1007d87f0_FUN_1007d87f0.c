
ulong FUN_1007d87f0(void)

{
  uint64_t uVar1;
  
  if (DAT_1011bffb8 == (code *)0x0) {
    _mach_timebase_info((mach_timebase_info_t)&DAT_1011bffc0);
    DAT_1011bffb8 = FUN_1007d8930;
  }
  uVar1 = _mach_absolute_time();
  return (uVar1 * DAT_1011bffc0) / ((ulong)DAT_1011bffc4 * 1000);
}


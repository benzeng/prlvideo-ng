
ulong FUN_100ddba70(void)

{
  uint64_t uVar1;
  
  if (DAT_102319250 == (code *)0x0) {
    _mach_timebase_info((mach_timebase_info_t)&DAT_102319258);
    DAT_102319250 = FUN_100ddbbb0;
  }
  uVar1 = _mach_absolute_time();
  return (uVar1 * DAT_102319258) / ((ulong)DAT_10231925c * 1000);
}


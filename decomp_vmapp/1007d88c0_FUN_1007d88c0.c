
undefined8 FUN_1007d88c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint64_t uVar3;
  
  if (DAT_1011bffb8 == (code *)0x0) {
    _mach_timebase_info((mach_timebase_info_t)&DAT_1011bffc0);
    DAT_1011bffb8 = FUN_1007d8930;
  }
  uVar3 = _mach_absolute_time();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)DAT_1011bffc4 * 1000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3 * DAT_1011bffc0;
  return SUB168((auVar2 / auVar1 >> 3 & (undefined1  [16])0x1fffffffffffffff) /
                (undefined1  [16])0x7d,0);
}


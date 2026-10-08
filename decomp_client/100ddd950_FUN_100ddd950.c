
uint64_t FUN_100ddd950(void)

{
  uint64_t uVar1;
  code *pcVar2;
  code *pcVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  bool bVar7;
  mach_timebase_info local_20;
  
  uVar1 = _mach_absolute_time();
  _mach_timebase_info(&local_20);
  uVar6 = (ulong)local_20.numer;
  uVar4 = 1000000000;
  if (uVar6 != 0) {
    uVar4 = 1000000000;
    if ((ulong)local_20.denom != 0) {
      uVar4 = ((ulong)local_20.denom * 1000000000) / uVar6;
    }
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","Std",3,"[PrlTicks] Init (timebase: %u/%u, freq: %llu)",uVar6,local_20.denom,
                  uVar4);
  }
  DAT_10230feb0 = uVar4;
  PTR_FUN_10230fe80 = PTR__mach_absolute_time_1021e1c50;
  PTR_FUN_10230fe88 = FUN_100ddda60;
  bVar7 = uVar4 == 1000000000;
  pcVar2 = FUN_100dddb20;
  if (bVar7) {
    pcVar2 = FUN_100dddaa0;
  }
  pcVar3 = FUN_100dddba0;
  if (bVar7) {
    pcVar3 = FUN_100dddad0;
  }
  pcVar5 = FUN_100dddc20;
  if (bVar7) {
    pcVar5 = FUN_100dddaf0;
  }
  PTR_FUN_10230fe90 = pcVar2;
  PTR_FUN_10230fe98 = pcVar3;
  PTR_FUN_10230fea0 = pcVar5;
  PTR_FUN_10230fea8 = FUN_100dddc40;
  return uVar1;
}


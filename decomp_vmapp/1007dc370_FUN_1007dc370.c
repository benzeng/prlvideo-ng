
uint64_t FUN_1007dc370(void)

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
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","Std",3,"[PrlTicks] Init (timebase: %u/%u, freq: %llu)",uVar6,local_20.denom,
                  uVar4);
  }
  DAT_1011a6550 = uVar4;
  PTR_FUN_1011a6520 = PTR__mach_absolute_time_100ba25c8;
  PTR_FUN_1011a6528 = FUN_1007dc480;
  bVar7 = uVar4 == 1000000000;
  pcVar2 = FUN_1007dc540;
  if (bVar7) {
    pcVar2 = FUN_1007dc4c0;
  }
  pcVar3 = FUN_1007dc5c0;
  if (bVar7) {
    pcVar3 = FUN_1007dc4f0;
  }
  pcVar5 = FUN_1007dc640;
  if (bVar7) {
    pcVar5 = FUN_1007dc510;
  }
  PTR_FUN_1011a6530 = pcVar2;
  PTR_FUN_1011a6538 = pcVar3;
  PTR_FUN_1011a6540 = pcVar5;
  PTR_FUN_1011a6548 = FUN_1007dc660;
  return uVar1;
}


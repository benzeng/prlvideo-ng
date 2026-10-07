
ulong FUN_10078f030(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar3 <= uVar2) {
    if (DAT_1011bff34 == 0) {
      _mach_timebase_info((mach_timebase_info_t)&DAT_1011bff30);
      uVar2 = *param_2;
      uVar3 = *param_1;
    }
    uVar1 = (((ulong)DAT_1011bff30 / (ulong)DAT_1011bff34) * (uVar2 - uVar3)) / 1000000;
  }
  return uVar1;
}


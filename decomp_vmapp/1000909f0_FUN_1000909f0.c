
ulong FUN_1000909f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (10 < param_2 >> 0x1c) {
    uVar1 = 0xffffffffffffffff;
    if (0xffffffff < param_2) {
      uVar1 = param_2 - 0x50000000;
    }
  }
  return uVar1;
}


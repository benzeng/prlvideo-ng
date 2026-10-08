
ulong FUN_1001e8da0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1001e8e10();
  if ((-1 < (int)uVar2) || ((int)uVar2 == -0x7ffffbfc)) {
    uVar2 = FUN_1001e8f70(param_1);
    if ((-1 < (int)uVar2) || ((int)uVar2 == -0x7ffffbfc)) {
      uVar1 = FUN_1001e9070();
      uVar2 = (ulong)((int)uVar1 >> 0x1f & uVar1);
    }
  }
  return uVar2;
}



ulong FUN_1006937b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x18100) != 0) {
    uVar1 = FUN_1006a7690();
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = FUN_100697940(*(undefined8 *)(param_1 + 0x20));
      uVar2 = uVar1 / uVar2;
    }
  }
  return uVar2;
}


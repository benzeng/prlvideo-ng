
ulong FUN_100b1be20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x18100) != 0) {
    uVar1 = FUN_100b2fb60();
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = FUN_100b1ffb0(*(undefined8 *)(param_1 + 0x20));
      uVar2 = uVar1 / uVar2;
    }
  }
  return uVar2;
}


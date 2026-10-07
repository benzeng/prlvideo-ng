
ulong FUN_100541f50(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (((uint)param_1 & 0xff00) == 0xf000) {
    uVar1 = param_1 & 0xff;
    uVar2 = uVar1;
    if ((0x1f < (uint)uVar1) && (uVar2 = param_1, (uint)uVar1 < 0x2a)) {
      uVar2 = (ulong)(uint)(int)(char)(&DAT_100b46b60)[uVar1];
    }
  }
  return uVar2 & 0xffff;
}


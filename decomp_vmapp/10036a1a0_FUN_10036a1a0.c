
undefined4 FUN_10036a1a0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(&DAT_100b3cfd4 + (ulong)param_2 * 8) >> 8 & 0xff;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_100b3d4b0 + (ulong)uVar1 * 4);
  }
  uVar2 = 0x500;
  if (param_2 - 0x4d < 2) {
    uVar2 = 0x8368;
  }
  return uVar2;
}


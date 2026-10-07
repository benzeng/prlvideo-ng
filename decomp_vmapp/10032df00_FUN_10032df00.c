
ulong FUN_10032df00(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((*(ushort *)(param_1 + 0xb0) & 7) == 1) {
    uVar1 = (ulong)param_2 % (ulong)*(uint *)(param_1 + 0x1c);
  }
  return uVar1;
}


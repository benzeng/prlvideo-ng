
ulong FUN_1002c9700(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 < 2) {
    uVar1 = (ulong)((*(ushort *)(*(long *)(param_1 + 0x40) + 0x2010 + (ulong)param_2 * 2) & 5) == 5)
    ;
  }
  else {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x14e8) != 0) {
      uVar1 = FUN_1002db2d0(*(long *)(param_1 + 0x14e8),param_2 - 2);
      return uVar1;
    }
  }
  return uVar1;
}


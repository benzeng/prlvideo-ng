
ushort FUN_1002db2d0(long param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (param_2 < DAT_101116bca) {
    uVar1 = *(ushort *)(param_1 + 0x3a + (ulong)param_2 * 4) >> 1 & 1;
  }
  return uVar1;
}


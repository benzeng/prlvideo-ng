
void FUN_1002db2f0(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  
  if (param_2 < DAT_101116bca) {
    uVar2 = *(ushort *)(param_1 + 0x3c + (ulong)param_2 * 4);
    if ((uVar2 & 1) == 0) {
      *(ushort *)(param_1 + 0x3c + (ulong)param_2 * 4) = uVar2 | 1;
      puVar1 = (uint *)(param_1 + 0xb8 + (ulong)(param_2 + 1 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)(param_2 + 1) & 0x1f);
      FUN_1002db030();
      return;
    }
  }
  return;
}


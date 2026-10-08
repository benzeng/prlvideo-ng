
ushort FUN_100cabbb0(long param_1,byte param_2)

{
  return *(ushort *)(*(long *)(param_1 + 8) + (ulong)param_2 * 2) & 1;
}


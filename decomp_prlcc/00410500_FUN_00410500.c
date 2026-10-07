
long FUN_00410500(long param_1,ushort param_2)

{
  if (param_1 != 0) {
    *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | param_2;
  }
  return param_1;
}


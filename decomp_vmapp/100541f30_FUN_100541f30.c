
uint FUN_100541f30(uint param_1)

{
  if (param_1 < 0x80) {
    param_1 = (uint)*(ushort *)(&DAT_1011bc314 + (ulong)(param_1 & 0xffff) * 2);
  }
  return param_1 & 0xffff;
}



uint FUN_1003b0e10(int param_1)

{
  if (param_1 - 3U < 0x1a) {
    return 0x2c3006bU >> ((byte)(param_1 - 3U) & 0x1f) & 1;
  }
  return 0;
}



uint FUN_100351ab0(int param_1)

{
  if (param_1 - 0x42U < 0x1e) {
    return 0x28030d5fU >> ((byte)(param_1 - 0x42U) & 0x1f) & 1;
  }
  return 0;
}


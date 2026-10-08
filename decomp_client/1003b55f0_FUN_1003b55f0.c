
uint FUN_1003b55f0(int param_1)

{
  if (param_1 - 2U < 0x1b) {
    return 0x5bfc1d7U >> ((byte)(param_1 - 2U) & 0x1f) & 1;
  }
  return 0;
}


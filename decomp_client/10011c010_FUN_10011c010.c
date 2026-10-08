
uint FUN_10011c010(int param_1)

{
  if (param_1 + 0xcffffffeU < 0x11) {
    return 0x17f73U >> ((byte)(param_1 + 0xcffffffeU) & 0x1f) & 1;
  }
  return 0;
}


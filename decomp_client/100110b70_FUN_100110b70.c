
uint FUN_100110b70(int param_1)

{
  if (param_1 - 7U < 9) {
    return 0x107U >> ((byte)(param_1 - 7U) & 0x1f) & 1;
  }
  return 0;
}


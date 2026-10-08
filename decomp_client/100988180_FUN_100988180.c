
uint FUN_100988180(char param_1)

{
  if ((byte)(param_1 + 1U) < 0x12) {
    return 0x3ff01U >> (param_1 + 1U & 0x1f) & 1;
  }
  return 0;
}



uint FUN_1000bd100(undefined8 param_1,int param_2)

{
  if (param_2 + 0xcffffffeU < 0xf) {
    return 0x4907U >> ((byte)(param_2 + 0xcffffffeU) & 0x1f) & 1;
  }
  return 0;
}


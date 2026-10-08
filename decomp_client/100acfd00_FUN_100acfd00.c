
void FUN_100acfd00(long param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0xaa4)) {
    return;
  }
  *(char *)(param_1 + 0xaa4) = param_2;
  FUN_100ae32c0();
  return;
}



void FUN_10072e390(long param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0xaa)) {
    return;
  }
  *(char *)(param_1 + 0xaa) = param_2;
  FUN_1008559b0();
  return;
}


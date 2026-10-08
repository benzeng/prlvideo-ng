
void FUN_100785050(long param_1,char param_2)

{
  if (param_2 == **(char **)(param_1 + 0x10)) {
    return;
  }
  **(char **)(param_1 + 0x10) = param_2;
  FUN_10085e480();
  return;
}


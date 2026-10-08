
void FUN_10072e360(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0xa9) == param_2) {
    return;
  }
  *(char *)(param_1 + 0xa9) = param_2;
  FUN_100855950();
  return;
}


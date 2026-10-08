
void FUN_100173f90(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x13c) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x13c) = param_2;
  FUN_100801690();
  return;
}


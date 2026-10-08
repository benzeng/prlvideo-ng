
void FUN_10034ac60(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x31) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x31) = param_2;
  FUN_100830bb0();
  return;
}



void FUN_1001902d0(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0xd9) == param_2) {
    return;
  }
  *(char *)(param_1 + 0xd9) = param_2;
  FUN_100804d60();
  return;
}



void FUN_100369f80(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x8d) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x8d) = param_2;
  FUN_100832cc0(*(undefined8 *)(param_1 + 0x10));
  return;
}


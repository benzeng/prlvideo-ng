
void FUN_100763120(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x30) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x30) = param_2;
  FUN_10085a860();
  return;
}


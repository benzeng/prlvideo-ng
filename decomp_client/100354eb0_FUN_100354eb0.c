
void FUN_100354eb0(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x9c) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x9c) = param_2;
  if (param_2 != '\0') {
    FUN_100354640();
    return;
  }
  FUN_100353ed0(param_1,0);
  return;
}


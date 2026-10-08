
void FUN_100078090(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x20) = param_2;
  if (param_2 != '\0') {
    FUN_1008666b0();
    return;
  }
  FUN_1008666d0(*(undefined8 *)(param_1 + 0x10));
  return;
}



void FUN_1007ec630(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3a) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3a) = param_2;
  FUN_100867eb0(*(undefined8 *)(param_1 + 0x10));
  return;
}


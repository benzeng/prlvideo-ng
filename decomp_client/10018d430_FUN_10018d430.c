
void FUN_10018d430(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0xf0) == param_2) {
    return;
  }
  *(char *)(param_1 + 0xf0) = param_2;
  FUN_1008056f0();
  return;
}


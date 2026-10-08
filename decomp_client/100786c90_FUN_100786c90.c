
void FUN_100786c90(long param_1,char param_2)

{
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x48) == param_2) {
    return;
  }
  *(char *)(*(long *)(param_1 + 0x10) + 0x48) = param_2;
  FUN_10085eb00();
  return;
}


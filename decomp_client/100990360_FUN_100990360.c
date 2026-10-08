
void FUN_100990360(long param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_100990240();
  return;
}



void FUN_100ad9d70(long param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_100ad9d90();
  return;
}

